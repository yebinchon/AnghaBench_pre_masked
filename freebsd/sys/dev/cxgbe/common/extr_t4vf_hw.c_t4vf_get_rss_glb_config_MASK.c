
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int synmapen; int syn4tupenipv6; int syn2tupenipv6; int syn4tupenipv4; int syn2tupenipv4; int ofdmapen; int tnlmapen; int tnlalllookup; int hashtoeplitz; } ;
struct TYPE_12__ {TYPE_5__ basicvirtual; } ;
struct rss_params {int mode; TYPE_6__ u; } ;
struct TYPE_9__ {int synmapen_to_hashtoeplitz; } ;
struct TYPE_8__ {int mode_pkd; } ;
struct TYPE_10__ {TYPE_3__ basicvirtual; TYPE_2__ manual; } ;
struct fw_rss_glb_config_cmd {TYPE_4__ u; void* retval_len16; void* op_to_write; } ;
struct TYPE_7__ {struct rss_params rss; } ;
struct adapter {TYPE_1__ params; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct fw_rss_glb_config_cmd) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_rss_glb_config_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_rss_glb_config_cmd*,int,struct fw_rss_glb_config_cmd*) ;

int FUNC_7(struct adapter *VAR_14)
{
 struct rss_params *VAR_15 = &VAR_14->params.rss;
 struct fw_rss_glb_config_cmd VAR_16, VAR_17;
 int VAR_18;





 FUNC_5(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_to_write = FUNC_4(FUNC_2(VAR_1) |
          VAR_4 |
          VAR_3);
 VAR_16.retval_len16 = FUNC_4(FUNC_0(VAR_16));
 VAR_18 = FUNC_6(VAR_14, &VAR_16, sizeof(VAR_16), &VAR_17);
 if (VAR_18 != VAR_2)
  return VAR_18;







 VAR_15->mode = FUNC_1(
   FUNC_3(VAR_17.u.manual.mode_pkd));
 switch (VAR_15->mode) {
 case 128: {
  u32 VAR_19 = FUNC_3(
    VAR_17.u.basicvirtual.synmapen_to_hashtoeplitz);

  VAR_15->u.basicvirtual.synmapen =
   ((VAR_19 & VAR_11) != 0);
  VAR_15->u.basicvirtual.syn4tupenipv6 =
   ((VAR_19 & VAR_10) != 0);
  VAR_15->u.basicvirtual.syn2tupenipv6 =
   ((VAR_19 & VAR_8) != 0);
  VAR_15->u.basicvirtual.syn4tupenipv4 =
   ((VAR_19 & VAR_9) != 0);
  VAR_15->u.basicvirtual.syn2tupenipv4 =
   ((VAR_19 & VAR_7) != 0);

  VAR_15->u.basicvirtual.ofdmapen =
   ((VAR_19 & VAR_6) != 0);

  VAR_15->u.basicvirtual.tnlmapen =
   ((VAR_19 & VAR_13) != 0);
  VAR_15->u.basicvirtual.tnlalllookup =
   ((VAR_19 & VAR_12) != 0);

  VAR_15->u.basicvirtual.hashtoeplitz =
   ((VAR_19 & VAR_5) != 0);


  if (!VAR_15->u.basicvirtual.tnlmapen)
   return -VAR_0;
  break;
 }

 default:

  return -VAR_0;
 }

 return 0;
}
