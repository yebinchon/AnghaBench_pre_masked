
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int absolute; } ;
typedef TYPE_1__ isc_time_t ;
typedef int isc_result_t ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int) ;

isc_result_t
FUNC_6(const char *VAR_5, isc_time_t *VAR_6) {
 int VAR_7;

 FUNC_0(VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

 if ((VAR_7 = FUNC_5(VAR_5, VAR_3 | VAR_2)) < 0)
  return (FUNC_4(VAR_4));






 if (!FUNC_1((HANDLE) FUNC_2(VAR_7),
    ((void*)0),
    &VAR_6->absolute,
    &VAR_6->absolute))
 {
  FUNC_3(VAR_7);
  VAR_4 = VAR_0;
  return (FUNC_4(VAR_4));
 }

 FUNC_3(VAR_7);
 return (VAR_1);

}
