
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_db_locator {int dummy; } ;
struct _citrus_db {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _citrus_db*,char const*,struct _region*,struct _citrus_db_locator*) ;
 char* FUNC_1 (struct _region*) ;
 int FUNC_2 (struct _region*) ;

int
FUNC_3(struct _citrus_db *VAR_1, const char *VAR_2,
    const char **VAR_3, struct _citrus_db_locator *VAR_4)
{
 struct _region VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6)
  return (VAR_6);


 if (FUNC_2(&VAR_5) == 0)
  return (VAR_0);
 if (*((const char*)FUNC_1(&VAR_5)+FUNC_2(&VAR_5)-1) != '\0')
  return (VAR_0);

 if (VAR_3)
  *VAR_3 = FUNC_1(&VAR_5);

 return (0);
}
