
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int capability_mask; } ;
struct TYPE_10__ {TYPE_4__ port_info; } ;
typedef TYPE_2__ osm_physp_t ;
struct TYPE_9__ {int mtu; int rate; } ;
struct TYPE_11__ {TYPE_1__ mcmember_rec; } ;
typedef TYPE_3__ osm_mgrp_t ;
typedef int osm_log_t ;
typedef TYPE_4__ ib_port_info_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static boolean_t FUNC_4(osm_log_t * VAR_4,
        const osm_mgrp_t * VAR_5,
        const osm_physp_t * VAR_6)
{
 const ib_port_info_t *VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 VAR_8 = FUNC_3(&VAR_6->port_info);
 VAR_9 = (uint8_t) (VAR_5->mcmember_rec.mtu & 0x3F);
 if (VAR_8 < VAR_9) {
  FUNC_0(VAR_4, VAR_2,
   "Port's MTU %x is less than %x\n",
   VAR_8, VAR_9);
  return VAR_0;
 }

 VAR_7 = &VAR_6->port_info;
 VAR_12 = VAR_7->capability_mask & VAR_1;
 VAR_10 = FUNC_2(VAR_7, VAR_12);
 VAR_11 = (uint8_t) (VAR_5->mcmember_rec.rate & 0x3F);
 if (FUNC_1(VAR_10, VAR_11) < 0) {
  FUNC_0(VAR_4, VAR_2,
   "Port's RATE %x is less than %x\n",
   VAR_10, VAR_11);
  return VAR_0;
 }

 return VAR_3;
}
