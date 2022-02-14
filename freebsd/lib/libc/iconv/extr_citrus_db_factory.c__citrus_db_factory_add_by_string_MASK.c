
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_region {int dummy; } ;
struct _citrus_db_factory {int dummy; } ;


 int FUNC_0 (struct _citrus_db_factory*,struct _region*,int,struct _citrus_region*,int) ;
 int FUNC_1 (struct _region*,char*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(struct _citrus_db_factory *VAR_1,
    const char *VAR_2, struct _citrus_region *VAR_3, int VAR_4)
{
 struct _region VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_5, VAR_6, FUNC_3(VAR_2));
 return FUNC_0(VAR_1, &VAR_5, 1, VAR_3, VAR_4);
}
