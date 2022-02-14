
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* name; struct cmd* parent; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const struct cmd *VAR_1)
{

 if (VAR_1->parent != ((void*)0))
  FUNC_1(VAR_1->parent);
 if (VAR_1->name != ((void*)0))
  FUNC_0(VAR_0, " %s", VAR_1->name);
}
