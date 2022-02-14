
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_db_factory {int dummy; } ;


 int FUNC_0 (struct _citrus_db_factory*,char const*,struct _region*,int) ;
 int FUNC_1 (struct _region*,char*,scalar_t__) ;
 int VAR_0 ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*) ;

int
FUNC_4(struct _citrus_db_factory *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 struct _region VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_5, VAR_4, FUNC_3(VAR_4) + 1);
 return (FUNC_0(VAR_1, VAR_2, &VAR_5, 1));
}
