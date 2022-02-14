
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtchnl_version_info {scalar_t__ major; scalar_t__ minor; } ;
struct TYPE_4__ {scalar_t__ major; scalar_t__ minor; } ;
struct i40e_hw {int dummy; } ;
struct iavf_sc {TYPE_2__ version; int dev; struct i40e_hw hw; } ;
struct TYPE_3__ {int cookie_low; int cookie_high; } ;
struct i40e_arq_event_info {scalar_t__ msg_buf; TYPE_1__ desc; int buf_len; } ;
typedef scalar_t__ i40e_status ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef int device_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_arq_event_info*,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

int
FUNC_7(struct iavf_sc *VAR_9)
{
 struct virtchnl_version_info *VAR_10;
 struct i40e_hw *VAR_11 = &VAR_9->hw;
 struct i40e_arq_event_info VAR_12;
 device_t VAR_13 = VAR_9->dev;
 i40e_status VAR_14;
 int VAR_15 = 0;

 VAR_12.buf_len = VAR_3;
 VAR_12.msg_buf = FUNC_6(VAR_12.buf_len, VAR_4, VAR_5);

 for (;;) {
  if (++VAR_15 > VAR_2)
   goto out_alloc;


  FUNC_4(100);
  VAR_14 = FUNC_3(VAR_11, &VAR_12, ((void*)0));
  if (VAR_14 == VAR_1)
   continue;
  else if (VAR_14) {
   VAR_14 = VAR_0;
   goto out_alloc;
  }

  if ((enum virtchnl_ops)FUNC_5(VAR_12.desc.cookie_high) !=
      VAR_6) {
   FUNC_0(VAR_13, "Received unexpected op response: %d\n",
       FUNC_5(VAR_12.desc.cookie_high));

   continue;
  }

  VAR_14 = (i40e_status)FUNC_5(VAR_12.desc.cookie_low);
  if (VAR_14) {
   VAR_14 = VAR_0;
   goto out_alloc;
  } else
   break;
 }

 VAR_10 = (struct virtchnl_version_info *)VAR_12.msg_buf;
 if ((VAR_10->major > VAR_7) ||
     ((VAR_10->major == VAR_7) &&
     (VAR_10->minor > VAR_8))) {
  FUNC_1(VAR_13, "Critical PF/VF API version mismatch!\n");
  VAR_14 = VAR_0;
 } else {
  VAR_9->version.major = VAR_10->major;
  VAR_9->version.minor = VAR_10->minor;
 }


 FUNC_1(VAR_13, "PF API %d.%d / VF API %d.%d\n",
     VAR_10->major, VAR_10->minor,
     VAR_7, VAR_8);

out_alloc:
 FUNC_2(VAR_12.msg_buf, VAR_4);
 return (VAR_14);
}
