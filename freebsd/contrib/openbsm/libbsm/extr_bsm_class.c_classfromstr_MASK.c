
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_class_ent {int ac_class; int ac_desc; int ac_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char**) ;
 int FUNC_3 (char*,char**,int ) ;

__attribute__((used)) static struct au_class_ent *
FUNC_4(char *VAR_3, struct au_class_ent *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;


 VAR_7 = FUNC_2(VAR_3, VAR_2, &VAR_8);
 VAR_5 = FUNC_2(((void*)0), VAR_2, &VAR_8);
 VAR_6 = FUNC_2(((void*)0), VAR_2, &VAR_8);

 if ((VAR_7 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return (((void*)0));




 if (FUNC_1(VAR_5) >= VAR_1)
  return (((void*)0));
 FUNC_0(VAR_4->ac_name, VAR_5, VAR_1);




 if (FUNC_1(VAR_6) >= VAR_0)
  return (((void*)0));
 FUNC_0(VAR_4->ac_desc, VAR_6, VAR_0);
 VAR_4->ac_class = FUNC_3(VAR_7, (char **) ((void*)0), 0);

 return (VAR_4);
}
