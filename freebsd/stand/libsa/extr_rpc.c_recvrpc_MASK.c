
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int rpu_errno; } ;
struct rpc_reply {TYPE_1__ rp_u; int rp_astatus; int rp_direction; int rp_xid; } ;
struct iodesc {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct iodesc*,void**,void**,int ) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t
FUNC_4(struct iodesc *VAR_5, void **VAR_6, void **VAR_7, time_t VAR_8, void *VAR_9)
{
 void *VAR_10;
 struct rpc_reply *VAR_11;
 ssize_t VAR_12;
 int VAR_13;

 VAR_3 = 0;





 VAR_10 = ((void*)0);
 VAR_12 = FUNC_3(VAR_5, &VAR_10, (void **)&VAR_11, VAR_8);
 if (VAR_12 <= (4 * 4)) {
  FUNC_0(VAR_10);
  return (-1);
 }

 VAR_13 = FUNC_1(VAR_11->rp_xid);
 if (VAR_13 != VAR_4) {




  FUNC_0(VAR_10);
  return (-1);
 }

 VAR_13 = FUNC_1(VAR_11->rp_direction);
 if (VAR_13 != VAR_1) {




  FUNC_0(VAR_10);
  return (-1);
 }

 VAR_13 = FUNC_1(VAR_11->rp_astatus);
 if (VAR_13 != VAR_0) {
  VAR_3 = FUNC_1(VAR_11->rp_u.rpu_errno);
  FUNC_2("recvrpc: reject, astat=%d, errno=%d\n", VAR_13, VAR_3);
  FUNC_0(VAR_10);
  return (-1);
 }

 *VAR_6 = VAR_10;
 *VAR_7 = VAR_11;

 return (VAR_12);
}
