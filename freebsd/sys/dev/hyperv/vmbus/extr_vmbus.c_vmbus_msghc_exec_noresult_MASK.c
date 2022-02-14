
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct hypercall_postmsg_in {int dummy; } ;
struct vmbus_msghc {struct hypercall_postmsg_in mh_inprm_save; int mh_xact; } ;
typedef int sbintime_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hypercall_postmsg_in*,struct hypercall_postmsg_in*,int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 struct hypercall_postmsg_in* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct vmbus_msghc *VAR_7)
{
 sbintime_t VAR_8 = VAR_5;
 struct hypercall_postmsg_in *VAR_9;
 bus_addr_t VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_7->mh_xact);
 VAR_10 = FUNC_4(VAR_7->mh_xact);
 FUNC_1(&VAR_7->mh_inprm_save, VAR_9, VAR_3);
 for (VAR_11 = 0; VAR_11 < 20; ++VAR_11) {
  uint64_t VAR_12;

  VAR_12 = FUNC_0(VAR_10);
  if (VAR_12 == VAR_4)
   return 0;

  FUNC_2("hcpmsg", VAR_8, 0, VAR_0);
  if (VAR_8 < VAR_6 * 2)
   VAR_8 *= 2;


  FUNC_1(VAR_9, &VAR_7->mh_inprm_save, VAR_3);
 }



 return VAR_1;
}
