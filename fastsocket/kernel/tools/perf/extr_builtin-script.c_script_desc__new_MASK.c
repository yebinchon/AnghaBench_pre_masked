
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_desc {int name; } ;


 int FUNC_0 (char const*) ;
 struct script_desc* FUNC_1 (int) ;

__attribute__((used)) static struct script_desc *FUNC_2(const char *VAR_0)
{
 struct script_desc *VAR_1 = FUNC_1(sizeof(*VAR_1));

 if (VAR_1 != ((void*)0) && VAR_0)
  VAR_1->name = FUNC_0(VAR_0);

 return VAR_1;
}
