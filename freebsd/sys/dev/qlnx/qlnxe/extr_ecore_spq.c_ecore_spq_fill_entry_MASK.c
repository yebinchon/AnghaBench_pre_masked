
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lo; int hi; } ;
struct TYPE_6__ {int protocol_id; int cmd_id; int cid; } ;
struct TYPE_8__ {TYPE_3__ data_ptr; TYPE_2__ hdr; } ;
struct TYPE_5__ {int function; } ;
struct ecore_spq_entry {int comp_mode; TYPE_4__ elem; TYPE_1__ comp_cb; scalar_t__ flags; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,int const,int const,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_4,
       struct ecore_spq_entry *VAR_5)
{
 VAR_5->flags = 0;

 switch (VAR_5->comp_mode) {
 case 128:
 case 130:
  VAR_5->comp_cb.function = VAR_3;
  break;
 case 129:
  break;
 default:
  FUNC_0(VAR_4, 1, "Unknown SPQE completion mode %d\n",
     VAR_5->comp_mode);
  return VAR_0;
 }

 FUNC_1(VAR_4, VAR_1,
     "Ramrod header: [CID 0x%08x CMD 0x%02x protocol 0x%02x] Data pointer: [%08x:%08x] Completion Mode: %s\n",
     VAR_5->elem.hdr.cid, VAR_5->elem.hdr.cmd_id,
     VAR_5->elem.hdr.protocol_id,
     VAR_5->elem.data_ptr.hi, VAR_5->elem.data_ptr.lo,
     FUNC_2(VAR_5->comp_mode, 128,
      130, "MODE_EBLOCK", "MODE_BLOCK",
      "MODE_CB"));

 return VAR_2;
}
