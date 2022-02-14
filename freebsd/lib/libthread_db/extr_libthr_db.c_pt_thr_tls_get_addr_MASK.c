
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tls_index ;
struct TYPE_4__ {size_t th_thread; TYPE_2__* th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
struct TYPE_5__ {size_t thread_off_linkmap; size_t thread_off_tlsindex; size_t thread_off_tcb; size_t thread_off_dtv; int ph; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_err_e ;
typedef int tcb_addr ;
typedef size_t psaddr_t ;
typedef int dtv_addr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t,...) ;

__attribute__((used)) static td_err_e
FUNC_2(const td_thrhandle_t *VAR_1, psaddr_t VAR_2, size_t VAR_3,
    psaddr_t *VAR_4)
{
 const td_thragent_t *VAR_5 = VAR_1->th_ta;
 psaddr_t VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;


 VAR_7 = VAR_2 - VAR_5->thread_off_linkmap;


 VAR_10 = FUNC_1(VAR_5->ph,
  VAR_7 + VAR_5->thread_off_tlsindex,
  &VAR_9, sizeof(VAR_9));
 if (VAR_10 != 0)
  return (FUNC_0(VAR_10));


 VAR_10 = FUNC_1(VAR_5->ph, VAR_1->th_thread + VAR_5->thread_off_tcb,
  &VAR_8, sizeof(VAR_8));
 if (VAR_10 != 0)
  return (FUNC_0(VAR_10));


 VAR_10 = FUNC_1(VAR_5->ph, VAR_8 + VAR_5->thread_off_dtv,
  &VAR_6, sizeof(VAR_6));
 if (VAR_10 != 0)
  return (FUNC_0(VAR_10));

 VAR_10 = FUNC_1(VAR_5->ph, VAR_6 + sizeof(void *) * (VAR_9+1),
     VAR_4, sizeof(*VAR_4));
 if (VAR_10 != 0)
  return (FUNC_0(VAR_10));

 *VAR_4 += VAR_3;
 return (VAR_0);
}
