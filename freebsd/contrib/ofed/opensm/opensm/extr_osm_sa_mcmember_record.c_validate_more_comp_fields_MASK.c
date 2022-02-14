
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int mtu; int rate; } ;
struct TYPE_7__ {TYPE_1__ mcmember_rec; } ;
typedef TYPE_2__ osm_mgrp_t ;
typedef int osm_log_t ;
typedef int ib_net64_t ;
struct TYPE_8__ {int mtu; int rate; } ;
typedef TYPE_3__ ib_member_rec_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static boolean_t FUNC_2(osm_log_t * VAR_5,
        const osm_mgrp_t * VAR_6,
        const ib_member_rec_t *
        VAR_7,
        ib_net64_t VAR_8)
{
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 if (VAR_8 & VAR_1) {
  VAR_9 = (uint8_t) (VAR_7->mtu >> 6);

  VAR_10 = (uint8_t) (VAR_7->mtu & 0x3F);
  VAR_11 = (uint8_t) (VAR_6->mcmember_rec.mtu & 0x3F);
  switch (VAR_9) {
  case 0:
   if (VAR_11 <= VAR_10) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has MTU %x, "
     "which is not greater than %x\n",
     VAR_11, VAR_10);
    return VAR_0;
   }
   break;
  case 1:
   if (VAR_11 >= VAR_10) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has MTU %x, "
     "which is not less than %x\n",
     VAR_11, VAR_10);
    return VAR_0;
   }
   break;
  case 2:
   if (VAR_11 != VAR_10) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has MTU %x, "
     "which is not equal to %x\n",
     VAR_11, VAR_10);
    return VAR_0;
   }
   break;
  default:
   break;
  }
 }


 if (VAR_8 & VAR_2) {
  VAR_12 = (uint8_t) (VAR_7->rate >> 6);

  VAR_13 = (uint8_t) (VAR_7->rate & 0x3F);
  VAR_14 = (uint8_t) (VAR_6->mcmember_rec.rate & 0x3F);
  switch (VAR_12) {
  case 0:
   if (FUNC_1(VAR_14, VAR_13) <= 0) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has RATE %x, "
     "which is not greater than %x\n",
     VAR_14, VAR_13);
    return VAR_0;
   }
   break;
  case 1:
   if (FUNC_1(VAR_14, VAR_13) >= 0) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has RATE %x, "
     "which is not less than %x\n",
     VAR_14, VAR_13);
    return VAR_0;
   }
   break;
  case 2:
   if (FUNC_1(VAR_14, VAR_13)) {
    FUNC_0(VAR_5, VAR_3,
     "Requested mcast group has RATE %x, "
     "which is not equal to %x\n",
     VAR_14, VAR_13);
    return VAR_0;
   }
   break;
  default:
   break;
  }
 }

 return VAR_4;
}
