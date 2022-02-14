
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ipmsgid; void* ipbfln2f; void* ipbfadr2; void* ipbfln1f; void* ipbfadr1; int ipmsgtag; void* ipsrccls; int iptrgcls; int ipflags1; int ippathid; } ;
struct TYPE_3__ {int iprmmsg; void* ipbfln2f; void* ipbfadr2; int ipmsgtag; void* ipsrccls; int iptrgcls; int ipflags1; int ippathid; } ;
union iucv_param {TYPE_2__ db; TYPE_1__ dpl; } ;
typedef int u8 ;
typedef void* u32 ;
struct iucv_path {int flags; int pathid; } ;
struct iucv_message {int id; int tag; int class; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,union iucv_param*) ;
 union iucv_param** VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (union iucv_param*,int ,int) ;
 size_t FUNC_6 () ;

int FUNC_7(struct iucv_path *VAR_5, struct iucv_message *VAR_6,
     u8 VAR_7, u32 VAR_8, void *VAR_9, size_t VAR_10,
     void *VAR_11, size_t VAR_12, size_t *VAR_13)
{
 union iucv_param *VAR_14;
 int VAR_15;

 FUNC_2();
 if (FUNC_0(VAR_3)) {
  VAR_15 = -VAR_0;
  goto out;
 }
 VAR_14 = VAR_4[FUNC_6()];
 FUNC_5(VAR_14, 0, sizeof(union iucv_param));
 if (VAR_7 & VAR_1) {
  VAR_14->dpl.ippathid = VAR_5->pathid;
  VAR_14->dpl.ipflags1 = VAR_5->flags;
  VAR_14->dpl.iptrgcls = VAR_6->class;
  VAR_14->dpl.ipsrccls = VAR_8;
  VAR_14->dpl.ipmsgtag = VAR_6->tag;
  VAR_14->dpl.ipbfadr2 = (u32)(addr_t) VAR_11;
  VAR_14->dpl.ipbfln2f = (u32) VAR_12;
  FUNC_4(VAR_14->dpl.iprmmsg, VAR_9, 8);
 } else {
  VAR_14->db.ippathid = VAR_5->pathid;
  VAR_14->db.ipflags1 = VAR_5->flags;
  VAR_14->db.iptrgcls = VAR_6->class;
  VAR_14->db.ipsrccls = VAR_8;
  VAR_14->db.ipmsgtag = VAR_6->tag;
  VAR_14->db.ipbfadr1 = (u32)(addr_t) VAR_9;
  VAR_14->db.ipbfln1f = (u32) VAR_10;
  VAR_14->db.ipbfadr2 = (u32)(addr_t) VAR_11;
  VAR_14->db.ipbfln2f = (u32) VAR_12;
 }
 VAR_15 = FUNC_1(VAR_2, VAR_14);
 if (!VAR_15)
  VAR_6->id = VAR_14->db.ipmsgid;
out:
 FUNC_3();
 return VAR_15;
}
