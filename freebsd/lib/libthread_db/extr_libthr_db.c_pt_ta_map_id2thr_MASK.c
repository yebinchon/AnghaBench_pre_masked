
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_7__ {scalar_t__ th_thread; scalar_t__ th_tid; TYPE_2__ const* th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
struct TYPE_8__ {scalar_t__ thread_list_addr; scalar_t__ thread_off_tid; scalar_t__ thread_off_next; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_err_e ;
typedef scalar_t__ psaddr_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__ const*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_2__ const*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static td_err_e
FUNC_3(const td_thragent_t *VAR_3, thread_t VAR_4, td_thrhandle_t *VAR_5)
{
 psaddr_t VAR_6;
 int64_t VAR_7;
 int VAR_8;

 FUNC_0();

 if (VAR_4 == 0)
  return (VAR_1);
 VAR_8 = FUNC_2(VAR_3, VAR_3->thread_list_addr, &VAR_6);
 if (VAR_8 != 0)
  return (VAR_0);

 while (VAR_6 != 0) {
  VAR_8 = FUNC_1(VAR_3, VAR_6 + VAR_3->thread_off_tid, &VAR_7);
  if (VAR_8 != 0)
   return (VAR_0);
  if (VAR_7 == VAR_4)
   break;

  VAR_8 = FUNC_2(VAR_3, VAR_6 + VAR_3->thread_off_next, &VAR_6);
  if (VAR_8 != 0)
   return (VAR_0);
 }
 if (VAR_6 == 0)
  return (VAR_1);
 VAR_5->th_ta = VAR_3;
 VAR_5->th_tid = VAR_4;
 VAR_5->th_thread = VAR_6;
 return (VAR_2);
}
