
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kern_data_len; } ;
struct TYPE_3__ {int status; int flags; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ctl_sg_entry {scalar_t__ len; scalar_t__ addr; } ;
struct ctl_ha_dt_req {unsigned int command; int ret; int (* callback ) (struct ctl_ha_dt_req*) ;int * remote; int * local; scalar_t__ size; union ctl_io* context; } ;
typedef int (* ctl_ha_dt_cb ) (struct ctl_ha_dt_req*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ctl_sg_entry* FUNC_0 (union ctl_io*) ;
 struct ctl_sg_entry* FUNC_1 (union ctl_io*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 struct ctl_ha_dt_req* FUNC_4 () ;
 int FUNC_5 (struct ctl_ha_dt_req*) ;
 int FUNC_6 (struct ctl_ha_dt_req*) ;
 int FUNC_7 (union ctl_io*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(union ctl_io *VAR_6, unsigned VAR_7,
    ctl_ha_dt_cb VAR_8)
{
 struct ctl_ha_dt_req *VAR_9;
 struct ctl_sg_entry *VAR_10, *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_9 = FUNC_4();






 if ((VAR_9 == ((void*)0))
  && ((VAR_6->io_hdr.status & VAR_3) != VAR_4 &&
      (VAR_6->io_hdr.status & VAR_3) != VAR_5))
  FUNC_8(&VAR_6->scsiio);

 if ((VAR_6->io_hdr.status & VAR_3) != VAR_4 &&
     (VAR_6->io_hdr.status & VAR_3) != VAR_5) {

  if (VAR_9 != ((void*)0))
   FUNC_5(VAR_9);







  FUNC_7(VAR_6, 0);

  return (1);
 }

 VAR_11 = FUNC_0(VAR_6);
 VAR_10 = FUNC_1(VAR_6);
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;
 VAR_17 = VAR_1;
 for (VAR_15 = 0, VAR_16 = 0; VAR_14 < VAR_6->scsiio.kern_data_len; ) {
  uint32_t VAR_18;
  uint8_t *VAR_19;

  VAR_9->command = VAR_7;
  VAR_9->context = VAR_6;







  VAR_18 = FUNC_3(VAR_11[VAR_15].len - VAR_12,
         VAR_10[VAR_16].len - VAR_13);
  VAR_9->size = VAR_18;

  VAR_19 = (uint8_t *)VAR_11[VAR_15].addr;
  VAR_19 += VAR_12;
  FUNC_2((VAR_6->io_hdr.flags & VAR_0) == 0,
      ("HA does not support BUS_ADDR"));
  VAR_9->local = VAR_19;


  VAR_19 = (uint8_t *)VAR_10[VAR_16].addr;
  VAR_19 += VAR_13;
  VAR_9->remote = VAR_19;

  VAR_9->callback = ((void*)0);

  VAR_12 += VAR_18;
  if (VAR_12 >= VAR_11[VAR_15].len) {
   VAR_15++;
   VAR_12 = 0;
  }

  VAR_13 += VAR_18;
  if (VAR_13 >= VAR_10[VAR_16].len) {
   VAR_16++;
   VAR_13 = 0;
  }
  VAR_14 += VAR_18;

  if (VAR_14 >= VAR_6->scsiio.kern_data_len)
   VAR_9->callback = VAR_8;

  VAR_17 = FUNC_6(VAR_9);
  if (VAR_17 > VAR_1)
   break;
 }
 if (VAR_17 != VAR_2) {
  VAR_9->ret = VAR_17;
  VAR_8(VAR_9);
 }

 return (0);
}
