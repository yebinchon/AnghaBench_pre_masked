
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct _region {int dummy; } ;
struct _citrus_db_locator {int dummy; } ;
struct _citrus_db {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _citrus_db*,char const*,struct _region*,struct _citrus_db_locator*) ;
 int FUNC_1 (struct _region*) ;
 int FUNC_2 (struct _region*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

int
FUNC_5(struct _citrus_db *VAR_1, const char *VAR_2,
    uint16_t *VAR_3, struct _citrus_db_locator *VAR_4)
{
 struct _region VAR_5;
 int VAR_6;
 uint16_t VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_4);
 if (VAR_6)
  return (VAR_6);

 if (FUNC_2(&VAR_5) != 2)
  return (VAR_0);

 if (VAR_3) {
  FUNC_4(&VAR_7, FUNC_1(&VAR_5), 2);
  *VAR_3 = FUNC_3(VAR_7);
 }

 return (0);
}
