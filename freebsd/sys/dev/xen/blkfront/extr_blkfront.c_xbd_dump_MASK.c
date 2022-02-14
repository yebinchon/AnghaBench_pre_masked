
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct xbd_softc {size_t xbd_max_request_size; int xbd_dev; int xbd_io_lock; int xbd_max_request_segments; } ;
struct xbd_command {size_t cm_datalen; size_t cm_sector_number; scalar_t__ cm_status; int cm_complete; int cm_operation; void* cm_data; int cm_gref_head; } ;
struct disk {size_t d_sectorsize; struct xbd_softc* d_drv1; } ;
typedef size_t off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xbd_command* FUNC_4 (struct xbd_softc*,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct xbd_command*,int ) ;
 int FUNC_6 (struct xbd_command*) ;
 int FUNC_7 (struct xbd_softc*) ;
 int FUNC_8 (struct xbd_softc*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_8, void *VAR_9, vm_offset_t VAR_10, off_t VAR_11,
    size_t VAR_12)
{
 struct disk *VAR_13 = VAR_8;
 struct xbd_softc *VAR_14 = VAR_13->d_drv1;
 struct xbd_command *VAR_15;
 size_t VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 if (VAR_12 == 0)
  return (0);

 FUNC_7(VAR_14);





 FUNC_2(&VAR_14->xbd_io_lock);


 for (VAR_17=0; VAR_12 > 0; VAR_17++) {
  VAR_15 = FUNC_4(VAR_14, VAR_5);
  if (VAR_15 == ((void*)0)) {
   FUNC_3(&VAR_14->xbd_io_lock);
   FUNC_0(VAR_14->xbd_dev, "dump: no more commands?\n");
   return (VAR_2);
  }

  if (FUNC_1(VAR_14->xbd_max_request_segments,
      &VAR_15->cm_gref_head) != 0) {
   FUNC_6(VAR_15);
   FUNC_3(&VAR_14->xbd_io_lock);
   FUNC_0(VAR_14->xbd_dev, "no more grant allocs?\n");
   return (VAR_2);
  }

  VAR_16 = VAR_12 > VAR_14->xbd_max_request_size ?
      VAR_14->xbd_max_request_size : VAR_12;
  VAR_15->cm_data = VAR_9;
  VAR_15->cm_datalen = VAR_16;
  VAR_15->cm_operation = VAR_0;
  VAR_15->cm_sector_number = VAR_11 / VAR_13->d_sectorsize;
  VAR_15->cm_complete = VAR_7;

  FUNC_5(VAR_15, VAR_6);

  VAR_12 -= VAR_16;
  VAR_11 += VAR_16;
  VAR_9 = (char *) VAR_9 + VAR_16;
 }


 FUNC_8(VAR_14);
 FUNC_3(&VAR_14->xbd_io_lock);


 FUNC_7(VAR_14);


 while ((VAR_15 = FUNC_4(VAR_14, VAR_4)) != ((void*)0)) {
  if (VAR_15->cm_status != VAR_1) {
   FUNC_0(VAR_14->xbd_dev,
       "Dump I/O failed at sector %jd\n",
       VAR_15->cm_sector_number);
   VAR_18 = VAR_3;
  }
  FUNC_6(VAR_15);
 }

 return (VAR_18);
}
