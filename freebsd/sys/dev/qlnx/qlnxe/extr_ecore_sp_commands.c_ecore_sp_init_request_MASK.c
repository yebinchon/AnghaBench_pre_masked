
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_8__ {void* function; TYPE_3__* cookie; } ;
struct TYPE_7__ {scalar_t__ done; } ;
struct TYPE_5__ {void* protocol_id; void* cmd_id; int cid; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct ecore_spq_entry {int comp_mode; int ramrod; TYPE_4__ comp_cb; TYPE_3__ comp_done; int priority; TYPE_2__ elem; } ;
struct ecore_sp_init_data {int opaque_fid; int cid; int comp_mode; TYPE_4__* p_comp_data; } ;
struct ecore_hwfn {int dummy; } ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,void*,void*,unsigned long long,int ) ;
 int FUNC_2 (int,int const,int const,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 void* VAR_4 ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_spq_entry**) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_5,
        struct ecore_spq_entry **VAR_6,
        u8 VAR_7,
        u8 VAR_8,
        struct ecore_sp_init_data *VAR_9)
{
 u32 VAR_10 = VAR_9->opaque_fid << 16 | VAR_9->cid;
 struct ecore_spq_entry *VAR_11 = VAR_4;
 enum _ecore_status_t VAR_12;

 if (!VAR_6)
  return VAR_0;


 VAR_12 = FUNC_5(VAR_5, VAR_6);
 if (VAR_12 != VAR_3)
  return VAR_12;


 VAR_11 = *VAR_6;
 VAR_11->elem.hdr.cid = FUNC_3(VAR_10);
 VAR_11->elem.hdr.cmd_id = VAR_7;
 VAR_11->elem.hdr.protocol_id = VAR_8;
 VAR_11->priority = VAR_2;
 VAR_11->comp_mode = VAR_9->comp_mode;
 VAR_11->comp_done.done = 0;

 switch (VAR_11->comp_mode) {
 case 128:
  VAR_11->comp_cb.cookie = &VAR_11->comp_done;
  break;

 case 130:
  if (!VAR_9->p_comp_data)
   return VAR_0;

  VAR_11->comp_cb.cookie = VAR_9->p_comp_data->cookie;
  break;

 case 129:
  if (!VAR_9->p_comp_data)
   VAR_11->comp_cb.function = VAR_4;
  else
   VAR_11->comp_cb = *VAR_9->p_comp_data;
  break;

 default:
  FUNC_0(VAR_5, 1, "Unknown SPQE completion mode %d\n",
     VAR_11->comp_mode);
  return VAR_0;
 }

 FUNC_1(VAR_5, VAR_1,
     "Initialized: CID %08x cmd %02x protocol %02x data_addr %llx comp_mode [%s]\n",
     VAR_10, VAR_7, VAR_8,
     (unsigned long long)(osal_uintptr_t)&VAR_11->ramrod,
     FUNC_2(VAR_11->comp_mode, 128,
      130, "MODE_EBLOCK", "MODE_BLOCK",
      "MODE_CB"));

 FUNC_4(&VAR_11->ramrod, 0, sizeof(VAR_11->ramrod));

 return VAR_3;
}
