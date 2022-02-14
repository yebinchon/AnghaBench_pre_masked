
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct ib_smp {scalar_t__ data; } ;
struct ib_port_info {int neighbormtu_mastersmsl; int clientrereg_resv_subnetto; int sm_lid; int lid; } ;
struct TYPE_3__ {scalar_t__ mgmt_class; scalar_t__ method; scalar_t__ attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct TYPE_4__ {void* port_num; } ;
struct ib_event {TYPE_2__ element; int event; struct ib_device* device; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ib_event*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (int ,void*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct ib_device *VAR_8,
        u8 VAR_9,
        const struct ib_mad *VAR_10,
        u16 VAR_11)
{
 struct ib_event VAR_12;

 if ((VAR_10->mad_hdr.mgmt_class == VAR_4 ||
      VAR_10->mad_hdr.mgmt_class == VAR_3) &&
     VAR_10->mad_hdr.method == VAR_5) {
  if (VAR_10->mad_hdr.attr_id == VAR_7) {
   struct ib_port_info *VAR_13 =
    (struct ib_port_info *) ((struct ib_smp *) VAR_10)->data;
   u16 VAR_14 = FUNC_0(VAR_13->lid);

   FUNC_2(FUNC_3(VAR_8), VAR_9);
   FUNC_4(FUNC_3(VAR_8), VAR_9,
         FUNC_0(VAR_13->sm_lid),
         VAR_13->neighbormtu_mastersmsl & 0xf);

   VAR_12.device = VAR_8;
   VAR_12.element.port_num = VAR_9;

   if (VAR_13->clientrereg_resv_subnetto & 0x80) {
    VAR_12.event = VAR_0;
    FUNC_1(&VAR_12);
   }

   if (VAR_11 != VAR_14) {
    VAR_12.event = VAR_1;
    FUNC_1(&VAR_12);
   }
  }

  if (VAR_10->mad_hdr.attr_id == VAR_6) {
   VAR_12.device = VAR_8;
   VAR_12.event = VAR_2;
   VAR_12.element.port_num = VAR_9;
   FUNC_1(&VAR_12);
  }
 }
}
