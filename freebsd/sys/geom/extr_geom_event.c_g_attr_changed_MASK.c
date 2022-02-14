
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int dummy; } ;
struct g_attrchanged_args {char const* attr; struct g_provider* pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_attrchanged_args*) ;
 struct g_attrchanged_args* FUNC_1 (int,int) ;
 int FUNC_2 (int ,struct g_attrchanged_args*,int,struct g_provider*,int *) ;

int
FUNC_3(struct g_provider *VAR_2, const char *VAR_3, int VAR_4)
{
 struct g_attrchanged_args *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof *VAR_5, VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 VAR_5->pp = VAR_2;
 VAR_5->attr = VAR_3;
 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_4, VAR_2, ((void*)0));
 if (VAR_6 != 0)
  FUNC_0(VAR_5);
 return (VAR_6);
}
