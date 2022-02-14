
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct ixl_vf {int vf_flags; } ;
struct TYPE_4__ {size_t vf_base_id; } ;
struct TYPE_5__ {TYPE_1__ func_caps; } ;
struct ixl_pf {size_t num_vfs; struct ixl_vf* vfs; int dev; TYPE_2__ hw; } ;
struct TYPE_6__ {int cookie_high; int retval; } ;
struct i40e_arq_event_info {size_t msg_len; void* msg_buf; TYPE_3__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixl_pf*,int ,char*,int ,int,char*,size_t,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int,int ) ;
 int FUNC_3 (struct ixl_pf*,struct ixl_vf*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_7 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_8 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_9 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_10 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_11 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_12 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_13 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_14 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_15 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_16 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_17 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_18 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_19 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_20 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 int FUNC_21 (struct ixl_pf*,struct ixl_vf*,void*,size_t) ;
 size_t FUNC_22 (int ) ;
 int FUNC_23 (int ) ;

void
FUNC_24(struct ixl_pf *VAR_2, struct i40e_arq_event_info *VAR_3)
{
 struct ixl_vf *VAR_4;
 void *VAR_5;
 uint16_t VAR_6, VAR_7;
 uint32_t VAR_8;

 VAR_6 = FUNC_22(VAR_3->desc.retval) - VAR_2->hw.func_caps.vf_base_id;
 VAR_8 = FUNC_23(VAR_3->desc.cookie_high);

 if (VAR_6 >= VAR_2->num_vfs) {
  FUNC_1(VAR_2->dev, "Got msg from illegal VF: %d\n", VAR_6);
  return;
 }

 VAR_4 = &VAR_2->vfs[VAR_6];
 VAR_5 = VAR_3->msg_buf;
 VAR_7 = VAR_3->msg_len;

 FUNC_0(VAR_2, FUNC_4(VAR_8),
     "Got msg %s(%d) from%sVF-%d of size %d\n",
     FUNC_5(VAR_8), VAR_8,
     (VAR_4->vf_flags & VAR_1) ? " " : " disabled ",
     VAR_6, VAR_7);


 if (!(VAR_4->vf_flags & VAR_1))
  return;

 switch (VAR_8) {
 case 128:
  FUNC_21(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 130:
  FUNC_19(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 131:
  FUNC_17(VAR_2, VAR_4, VAR_5, VAR_7);



  FUNC_3(VAR_2, VAR_4);
  break;
 case 137:
  FUNC_12(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 143:
  FUNC_8(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 133:
  FUNC_16(VAR_2, VAR_4, VAR_5, VAR_7);



  FUNC_3(VAR_2, VAR_4);
  break;
 case 134:
  FUNC_15(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 145:
  FUNC_6(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 136:
  FUNC_13(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 144:
  FUNC_7(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 135:
  FUNC_14(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 142:
  FUNC_9(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 132:
  FUNC_18(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 141:
  FUNC_10(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 140:
  FUNC_11(VAR_2, VAR_4, VAR_5, VAR_7);
  break;
 case 129:
  FUNC_20(VAR_2, VAR_4, VAR_5, VAR_7);
  break;


 case 138:
 case 139:
 default:
  FUNC_2(VAR_2, VAR_4, VAR_8, VAR_0);
  break;
 }
}
