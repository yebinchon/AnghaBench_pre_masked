
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int str ;
struct TYPE_5__ {scalar_t__ nvp_type; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*,char**,int,scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(nvpair_t *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2->nvp_type == VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0);
  return (-1);
 }
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == ((void*)0)) {
  return (-1);
 }
 if (FUNC_5(VAR_2, &VAR_4, sizeof(VAR_4), FUNC_6(VAR_4) + 1) == -1) {
  FUNC_3(VAR_4);
  return (-1);
 }
 return (0);
}
