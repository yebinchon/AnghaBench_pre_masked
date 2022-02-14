
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct _region {int dummy; } ;
struct _citrus_db_factory {int dummy; } ;


 int FUNC_0 (struct _citrus_db_factory*,char const*,struct _region*,int) ;
 int FUNC_1 (struct _region*,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;

int
FUNC_4(struct _citrus_db_factory *VAR_1,
    const char *VAR_2, uint16_t VAR_3)
{
 struct _region VAR_4;
 uint16_t *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 *VAR_5 = FUNC_2(VAR_3);
 FUNC_1(&VAR_4, VAR_5, 2);
 return (FUNC_0(VAR_1, VAR_2, &VAR_4, 1));
}
