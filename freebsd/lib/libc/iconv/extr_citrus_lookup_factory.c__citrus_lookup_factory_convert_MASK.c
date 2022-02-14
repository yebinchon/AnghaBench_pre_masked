
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_db_factory {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct _citrus_db_factory**,int *,int *) ;
 int FUNC_1 (struct _citrus_db_factory*) ;
 int VAR_0 ;
 int FUNC_2 (struct _region*) ;
 int FUNC_3 (struct _region*) ;
 int FUNC_4 (struct _citrus_db_factory*,char*,size_t) ;
 int FUNC_5 (struct _citrus_db_factory*,struct _region*) ;
 int VAR_1 ;
 char* FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int ,int ,int,int *) ;

int
FUNC_8(FILE *VAR_2, FILE *VAR_3)
{
 struct _citrus_db_factory *VAR_4;
 struct _region VAR_5;
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_4, &VAR_0, ((void*)0));
 if (VAR_8)
  return (VAR_8);

 while ((VAR_6 = FUNC_6(VAR_3, &VAR_7)) != ((void*)0))
  if ((VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_7))) {
   FUNC_1(VAR_4);
   return (VAR_8);
  }

 VAR_8 = FUNC_5(VAR_4, &VAR_5);
 FUNC_1(VAR_4);
 if (VAR_8)
  return (VAR_8);

 if (FUNC_7(FUNC_2(&VAR_5), FUNC_3(&VAR_5), 1, VAR_2) != 1)
  return (VAR_1);

 return (0);
}
