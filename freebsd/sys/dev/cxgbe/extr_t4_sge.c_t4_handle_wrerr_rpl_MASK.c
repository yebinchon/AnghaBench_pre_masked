
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_9__ {int eqid; int* val; int mv_pkd; int pfn_vfn; int cidx; } ;
struct TYPE_8__ {int eqid; int* wrhdr; int pfn_vfn; int cidx; } ;
struct TYPE_7__ {int regaddr; int regval; } ;
struct TYPE_6__ {int* info; } ;
struct TYPE_10__ {TYPE_4__ acl; TYPE_3__ wr; TYPE_2__ hwmodule; TYPE_1__ exception; } ;
struct fw_error_cmd {int op_to_type; TYPE_5__ u; } ;
struct adapter {int dev; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 unsigned int FUNC_9 (int*) ;

__attribute__((used)) static int
FUNC_10(struct adapter *VAR_3, const __be64 *VAR_4)
{
 u8 VAR_5 = *(const u8 *)VAR_4;
 const struct fw_error_cmd *VAR_6 = (const void *)VAR_4;
 unsigned int VAR_7;

 if (VAR_5 != VAR_1) {
  FUNC_8(VAR_2,
      "%s: Received WRERR_RPL message with opcode %#x\n",
      FUNC_7(VAR_3->dev), VAR_5);
  return (VAR_0);
 }
 FUNC_8(VAR_2, "%s: FW_ERROR (%s) ", FUNC_7(VAR_3->dev),
     FUNC_0(FUNC_6(VAR_6->op_to_type)) ? "fatal" :
     "non-fatal");
 switch (FUNC_3(FUNC_6(VAR_6->op_to_type))) {
 case 130:
  FUNC_8(VAR_2, "exception info:\n");
  for (VAR_7 = 0; VAR_7 < FUNC_9(VAR_6->u.exception.info); VAR_7++)
   FUNC_8(VAR_2, "%s%08x", VAR_7 == 0 ? "\t" : " ",
       FUNC_6(VAR_6->u.exception.info[VAR_7]));
  FUNC_8(VAR_2, "\n");
  break;
 case 129:
  FUNC_8(VAR_2, "HW module regaddr %08x regval %08x\n",
      FUNC_6(VAR_6->u.hwmodule.regaddr),
      FUNC_6(VAR_6->u.hwmodule.regval));
  break;
 case 128:
  FUNC_8(VAR_2, "WR cidx %d PF %d VF %d eqid %d hdr:\n",
      FUNC_5(VAR_6->u.wr.cidx),
      FUNC_2(FUNC_5(VAR_6->u.wr.pfn_vfn)),
      FUNC_4(FUNC_5(VAR_6->u.wr.pfn_vfn)),
      FUNC_6(VAR_6->u.wr.eqid));
  for (VAR_7 = 0; VAR_7 < FUNC_9(VAR_6->u.wr.wrhdr); VAR_7++)
   FUNC_8(VAR_2, "%s%02x", VAR_7 == 0 ? "\t" : " ",
       VAR_6->u.wr.wrhdr[VAR_7]);
  FUNC_8(VAR_2, "\n");
  break;
 case 131:
  FUNC_8(VAR_2, "ACL cidx %d PF %d VF %d eqid %d %s",
      FUNC_5(VAR_6->u.acl.cidx),
      FUNC_2(FUNC_5(VAR_6->u.acl.pfn_vfn)),
      FUNC_4(FUNC_5(VAR_6->u.acl.pfn_vfn)),
      FUNC_6(VAR_6->u.acl.eqid),
      FUNC_1(FUNC_5(VAR_6->u.acl.mv_pkd)) ? "vlanid" :
      "MAC");
  for (VAR_7 = 0; VAR_7 < FUNC_9(VAR_6->u.acl.val); VAR_7++)
   FUNC_8(VAR_2, " %02x", VAR_6->u.acl.val[VAR_7]);
  FUNC_8(VAR_2, "\n");
  break;
 default:
  FUNC_8(VAR_2, "type %#x\n",
      FUNC_3(FUNC_6(VAR_6->op_to_type)));
  return (VAR_0);
 }
 return (0);
}
