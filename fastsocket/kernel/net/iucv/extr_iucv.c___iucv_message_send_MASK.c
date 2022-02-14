
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ipflags1; int ipmsgid; int ipmsgtag; void* ipsrccls; int iptrgcls; int ippathid; void* ipbfln1f; void* ipbfadr1; } ;
struct TYPE_3__ {int ipflags1; int iprmmsg; int ipmsgtag; void* ipsrccls; int iptrgcls; int ippathid; } ;
union iucv_param {TYPE_2__ db; TYPE_1__ dpl; } ;
typedef int u8 ;
typedef void* u32 ;
struct iucv_path {int pathid; } ;
struct iucv_message {int id; int tag; int class; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,union iucv_param*) ;
 union iucv_param** VAR_5 ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (union iucv_param*,int ,int) ;
 size_t FUNC_4 () ;

int FUNC_5(struct iucv_path *VAR_6, struct iucv_message *VAR_7,
        u8 VAR_8, u32 VAR_9, void *VAR_10, size_t VAR_11)
{
 union iucv_param *VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_4)) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_12 = VAR_5[FUNC_4()];
 FUNC_3(VAR_12, 0, sizeof(union iucv_param));
 if (VAR_8 & VAR_2) {

  VAR_12->dpl.ippathid = VAR_6->pathid;
  VAR_12->dpl.ipflags1 = VAR_8 | VAR_1;
  VAR_12->dpl.iptrgcls = VAR_7->class;
  VAR_12->dpl.ipsrccls = VAR_9;
  VAR_12->dpl.ipmsgtag = VAR_7->tag;
  FUNC_2(VAR_12->dpl.iprmmsg, VAR_10, 8);
 } else {
  VAR_12->db.ipbfadr1 = (u32)(addr_t) VAR_10;
  VAR_12->db.ipbfln1f = (u32) VAR_11;
  VAR_12->db.ippathid = VAR_6->pathid;
  VAR_12->db.ipflags1 = VAR_8 | VAR_1;
  VAR_12->db.iptrgcls = VAR_7->class;
  VAR_12->db.ipsrccls = VAR_9;
  VAR_12->db.ipmsgtag = VAR_7->tag;
 }
 VAR_13 = FUNC_1(VAR_3, VAR_12);
 if (!VAR_13)
  VAR_7->id = VAR_12->db.ipmsgid;
out:
 return VAR_13;
}
