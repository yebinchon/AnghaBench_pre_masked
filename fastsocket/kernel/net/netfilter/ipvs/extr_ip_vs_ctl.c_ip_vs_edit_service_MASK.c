
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service_user_kern {scalar_t__ af; int netmask; int flags; int timeout; scalar_t__* pe_name; scalar_t__* sched_name; } ;
struct ip_vs_service {int flags; int timeout; int netmask; struct ip_vs_pe* pe; struct ip_vs_scheduler* scheduler; int usecnt; } ;
struct ip_vs_scheduler {int dummy; } ;
struct ip_vs_pe {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ip_vs_service*,struct ip_vs_pe*) ;
 int FUNC_3 (struct ip_vs_service*,struct ip_vs_scheduler*) ;
 struct ip_vs_pe* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct ip_vs_pe*) ;
 struct ip_vs_scheduler* FUNC_6 (scalar_t__*) ;
 int FUNC_7 (struct ip_vs_scheduler*) ;
 int FUNC_8 (struct ip_vs_service*) ;
 int FUNC_9 (struct ip_vs_service*) ;
 int FUNC_10 (char*,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct ip_vs_service *VAR_6, struct ip_vs_service_user_kern *VAR_7)
{
 struct ip_vs_scheduler *VAR_8, *VAR_9;
 struct ip_vs_pe *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12 = 0;




 VAR_8 = FUNC_6(VAR_7->sched_name);
 if (VAR_8 == ((void*)0)) {
  FUNC_10("Scheduler module ip_vs_%s not found\n", VAR_7->sched_name);
  return -VAR_2;
 }
 VAR_9 = VAR_8;

 if (VAR_7->pe_name && *VAR_7->pe_name) {
  VAR_10 = FUNC_4(VAR_7->pe_name);
  if (VAR_10 == ((void*)0)) {
   FUNC_10("persistence engine module ip_vs_pe_%s "
    "not found\n", VAR_7->pe_name);
   VAR_12 = -VAR_2;
   goto out;
  }
  VAR_11 = VAR_10;
 }
 FUNC_11(&VAR_5);




 FUNC_0(FUNC_1(&VAR_6->usecnt) > 1);




 VAR_6->flags = VAR_7->flags | VAR_4;
 VAR_6->timeout = VAR_7->timeout * VAR_3;
 VAR_6->netmask = VAR_7->netmask;

 VAR_9 = VAR_6->scheduler;
 if (VAR_8 != VAR_9) {



  if ((VAR_12 = FUNC_9(VAR_6))) {
   VAR_9 = VAR_8;
   goto out_unlock;
  }




  if ((VAR_12 = FUNC_3(VAR_6, VAR_8))) {
   FUNC_3(VAR_6, VAR_9);
   VAR_9 = VAR_8;
   goto out_unlock;
  }
 }

 VAR_11 = VAR_6->pe;
 if (VAR_10 != VAR_11) {
  FUNC_8(VAR_6);
  FUNC_2(VAR_6, VAR_10);
 }

  out_unlock:
 FUNC_12(&VAR_5);
  out:
 FUNC_7(VAR_9);
 FUNC_5(VAR_11);
 return VAR_12;
}
