
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {uintptr_t cpuc_dtrace_illval; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (void const*,void*,size_t,size_t*) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_2 (uintptr_t,uintptr_t,size_t) ;

void
FUNC_3(uintptr_t VAR_4, uintptr_t VAR_5, size_t VAR_6,
    volatile uint16_t *VAR_7)
{
 size_t VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_4, VAR_5, VAR_6)) {
  VAR_9 = FUNC_1((const void *)VAR_4, (void *)VAR_5,
      VAR_6, &VAR_8);


  if (VAR_9 && VAR_9 != VAR_1) {
   FUNC_0(VAR_0);
   VAR_2[VAR_3].cpuc_dtrace_illval = (uintptr_t)VAR_4;
  }
 }
}
