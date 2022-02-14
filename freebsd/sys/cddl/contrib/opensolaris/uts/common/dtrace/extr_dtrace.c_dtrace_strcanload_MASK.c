
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dtrace_vstate_t ;
struct TYPE_4__ {int dtms_access; } ;
typedef TYPE_1__ dtrace_mstate_t ;


 int VAR_0 ;
 int FUNC_0 (size_t*,scalar_t__,scalar_t__,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,size_t*,TYPE_1__*,int *) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(uint64_t VAR_1, size_t VAR_2, size_t *VAR_3,
    dtrace_mstate_t *VAR_4, dtrace_vstate_t *VAR_5)
{
 size_t VAR_6;





 if ((VAR_4->dtms_access & VAR_0) != 0) {
  FUNC_0(VAR_3, VAR_1, VAR_1, VAR_2);
  return (1);
 }





 if (VAR_3 == ((void*)0)) {
  VAR_3 = &VAR_6;
 }
 if (FUNC_2(VAR_1, 0, VAR_3, VAR_4, VAR_5)) {
  size_t VAR_7;






  VAR_7 = 1 + FUNC_3((char *)(uintptr_t)VAR_1,
      FUNC_1(VAR_2, *VAR_3));
  if (VAR_7 <= *VAR_3) {
   return (1);
  }
 }

 return (0);
}
