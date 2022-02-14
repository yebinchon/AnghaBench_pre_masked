
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union sl2vl_tbl_to_u64 {void** sl8; int sl64; } ;
typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_10__ {int is_going_down; } ;
struct TYPE_9__ {void*** phys_pkey_cache; } ;
struct mlx4_ib_dev {int * sl2vl; TYPE_5__* dev; TYPE_3__ sriov; TYPE_2__ pkeys; } ;
struct ib_smp {void** data; int attr_mod; } ;
struct ib_port_info {int neighbormtu_mastersmsl; int clientrereg_resv_subnetto; int sm_lid; int lid; } ;
struct TYPE_8__ {scalar_t__ mgmt_class; scalar_t__ method; int attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;
struct TYPE_11__ {int flags; int flags2; } ;
struct TYPE_12__ {TYPE_4__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlx4_ib_dev*,int ,int,int) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_ib_dev*,int ) ;
 int FUNC_5 (struct mlx4_ib_dev*,int ) ;
 int FUNC_6 (struct mlx4_ib_dev*,int ,int ) ;
 int FUNC_7 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_8 (struct mlx4_ib_dev*,int,int ,int *) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (char*,int,void*,...) ;
 struct mlx4_ib_dev* FUNC_13 (struct ib_device*) ;
 int FUNC_14 (struct mlx4_ib_dev*,int ,void*,int) ;

__attribute__((used)) static void FUNC_15(struct ib_device *VAR_7, u8 VAR_8, const struct ib_mad *VAR_9,
        u16 VAR_10)
{
 struct ib_port_info *VAR_11;
 u16 VAR_12;
 __be16 *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;


 struct mlx4_ib_dev *VAR_17 = FUNC_13(VAR_7);
 if ((VAR_9->mad_hdr.mgmt_class == VAR_3 ||
      VAR_9->mad_hdr.mgmt_class == VAR_2) &&
     VAR_9->mad_hdr.method == VAR_4)
  switch (VAR_9->mad_hdr.attr_id) {
  case 129:
   if (VAR_17->dev->caps.flags & VAR_6)
    return;
   VAR_11 = (struct ib_port_info *) ((struct ib_smp *) VAR_9)->data;
   VAR_12 = FUNC_2(VAR_11->lid);

   FUNC_14(VAR_17, VAR_8,
         FUNC_2(VAR_11->sm_lid),
         VAR_11->neighbormtu_mastersmsl & 0xf);

   if (VAR_11->clientrereg_resv_subnetto & 0x80)
    FUNC_4(VAR_17, VAR_8);

   if (VAR_10 != VAR_12)
    FUNC_5(VAR_17, VAR_8);
   break;

  case 130:
   if (VAR_17->dev->caps.flags & VAR_6)
    return;
   if (!FUNC_10(VAR_17->dev)) {
    FUNC_6(VAR_17, VAR_8,
             VAR_1);
    break;
   }




   VAR_14 = FUNC_3(((struct ib_smp *)VAR_9)->attr_mod) & 0xFFFF;
   VAR_13 = (__be16 *) &(((struct ib_smp *)VAR_9)->data[0]);
   VAR_15 = 0;
   for (VAR_16 = 0; VAR_16 < 32; VAR_16++) {
    FUNC_12("PKEY[%d] = x%x\n",
      VAR_16 + VAR_14*32, FUNC_2(VAR_13[VAR_16]));
    if (FUNC_2(VAR_13[VAR_16]) !=
        VAR_17->pkeys.phys_pkey_cache[VAR_8 - 1][VAR_16 + VAR_14*32]) {
     VAR_15 |= (1 << VAR_16);
     VAR_17->pkeys.phys_pkey_cache[VAR_8 - 1][VAR_16 + VAR_14*32] =
      FUNC_2(VAR_13[VAR_16]);
    }
   }
   FUNC_12("PKEY Change event: port=%d, "
     "block=0x%x, change_bitmap=0x%x\n",
     VAR_8, VAR_14, VAR_15);

   if (VAR_15) {
    FUNC_6(VAR_17, VAR_8,
             VAR_1);
    if (!VAR_17->sriov.is_going_down)
     FUNC_0(VAR_17, VAR_8, VAR_14,
           VAR_15);
   }
   break;

  case 131:
   if (VAR_17->dev->caps.flags & VAR_6)
    return;

   if (!FUNC_9(VAR_17->dev))
    FUNC_6(VAR_17, VAR_8,
             VAR_0);

   if (FUNC_9(VAR_17->dev) &&
       !VAR_17->sriov.is_going_down) {
    VAR_14 = FUNC_3(((struct ib_smp *)VAR_9)->attr_mod);
    FUNC_8(VAR_17, VAR_14, VAR_8,
            (u8 *)(&((struct ib_smp *)VAR_9)->data));
    FUNC_7(VAR_17, VAR_14, VAR_8,
             (u8 *)(&((struct ib_smp *)VAR_9)->data));
   }
   break;

  case 128:



   if (VAR_17->dev->caps.flags & VAR_6 &&
       VAR_17->dev->caps.flags2 & VAR_5)
    return;
   if (!FUNC_11(VAR_17->dev)) {
    union sl2vl_tbl_to_u64 VAR_18;
    int VAR_19;

    for (VAR_19 = 0; VAR_19 < 8; VAR_19++) {
     VAR_18[VAR_19] = ((struct ib_smp *)VAR_9)->data[VAR_19];
     FUNC_12("sl2vl[%d] = %02x\n", VAR_19, VAR_18[VAR_19]);
    }
    FUNC_1(&VAR_17->sl2vl[VAR_8 - 1], VAR_18);
   }
   break;

  default:
   break;
  }
}
