
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipsrccls; int ipflags1; int ipmsgtag; int ipaudit; int ipmsgid; int ippathid; } ;
union iucv_param {TYPE_1__ purge; } ;
typedef int u32 ;
struct iucv_path {int pathid; } ;
struct iucv_message {int audit; int tag; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,union iucv_param*) ;
 union iucv_param** VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (union iucv_param*,int ,int) ;
 size_t FUNC_5 () ;

int FUNC_6(struct iucv_path *VAR_7, struct iucv_message *VAR_8,
         u32 VAR_9)
{
 union iucv_param *VAR_10;
 int VAR_11;

 FUNC_2();
 if (FUNC_0(VAR_5)) {
  VAR_11 = -VAR_0;
  goto out;
 }
 VAR_10 = VAR_6[FUNC_5()];
 FUNC_4(VAR_10, 0, sizeof(union iucv_param));
 VAR_10->purge.ippathid = VAR_7->pathid;
 VAR_10->purge.ipmsgid = VAR_8->id;
 VAR_10->purge.ipsrccls = VAR_9;
 VAR_10->purge.ipflags1 = VAR_3 | VAR_1 | VAR_2;
 VAR_11 = FUNC_1(VAR_4, VAR_10);
 if (!VAR_11) {
  VAR_8->audit = (*(u32 *) &VAR_10->purge.ipaudit) >> 8;
  VAR_8->tag = VAR_10->purge.ipmsgtag;
 }
out:
 FUNC_3();
 return VAR_11;
}
