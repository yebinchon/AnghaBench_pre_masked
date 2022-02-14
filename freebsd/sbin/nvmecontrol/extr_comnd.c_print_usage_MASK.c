
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* name; char* descr; int parent; } ;


 int FUNC_0 (int ,char*,char*,...) ;
 char* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const struct cmd *VAR_1)
{

 FUNC_0(VAR_0, "    %s", FUNC_1());
 FUNC_2(VAR_1->parent);
 FUNC_0(VAR_0, " %-15s - %s\n", VAR_1->name, VAR_1->descr);
}
