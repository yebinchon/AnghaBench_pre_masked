
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_threadresult_t ;
typedef int isc_thread_t ;
typedef int isc_result_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;

isc_result_t
FUNC_3(isc_thread_t VAR_4, isc_threadresult_t *VAR_5) {
 DWORD VAR_6;
 DWORD VAR_7;

 VAR_6 = FUNC_2(VAR_4, VAR_0);
 if (VAR_6 != VAR_3) {

  return (VAR_2);
 }
 if (VAR_5 != ((void*)0)) {
  if(!FUNC_1(VAR_4, &VAR_7)) {

   return (VAR_2);
  }
  *VAR_5 = VAR_7;
 }
 (void)FUNC_0(VAR_4);

 return (VAR_1);
}
