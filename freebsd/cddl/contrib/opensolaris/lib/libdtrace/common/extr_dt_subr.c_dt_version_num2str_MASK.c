
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;
typedef int dt_version_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,scalar_t__,scalar_t__,...) ;

char *
FUNC_4(dt_version_t VAR_0, char *VAR_1, size_t VAR_2)
{
 uint_t VAR_3 = FUNC_0(VAR_0);
 uint_t VAR_4 = FUNC_2(VAR_0);
 uint_t VAR_5 = FUNC_1(VAR_0);

 if (VAR_5 == 0)
  (void) FUNC_3(VAR_1, VAR_2, "%u.%u", VAR_3, VAR_4);
 else
  (void) FUNC_3(VAR_1, VAR_2, "%u.%u.%u", VAR_3, VAR_4, VAR_5);

 return (VAR_1);
}
