
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef scalar_t__ uint8_t ;
typedef int u_int8_t ;
typedef int sup_pages ;
struct scsi_vpd_supported_page_list {int length; scalar_t__* list; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct scsi_vpd_supported_page_list*,int) ;
 int FUNC_2 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_3 (union ccb*) ;
 union ccb* FUNC_4 (struct cam_device*) ;
 scalar_t__ FUNC_5 (struct cam_device*,union ccb*) ;
 int FUNC_6 (int *,int,int *,int ,int *,int,int,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct cam_device *VAR_10, uint8_t VAR_11, int VAR_12,
   int VAR_13, int VAR_14)
{
 union ccb *VAR_15 = ((void*)0);
 struct scsi_vpd_supported_page_list VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 VAR_15 = FUNC_4(VAR_10);
 if (VAR_15 == ((void*)0)) {
  FUNC_7("Unable to allocate CCB");
  VAR_18 = -1;
  goto bailout;
 }


 FUNC_0(&VAR_15->csio);

 FUNC_1(&VAR_16, sizeof(VAR_16));

 FUNC_6(&VAR_15->csio,
                   VAR_12,
                  ((void*)0),
                        VAR_6,
                     (u_int8_t *)&VAR_16,
                     sizeof(VAR_16),
                  1,
                       VAR_8,
                       VAR_7,
                     VAR_13 ? VAR_13 : 5000);


 VAR_15->ccb_h.flags |= VAR_0;

 if (VAR_12 != 0)
  VAR_15->ccb_h.flags |= VAR_3;

 if (FUNC_5(VAR_10, VAR_15) < 0) {
  FUNC_3(VAR_15);
  VAR_15 = ((void*)0);
  VAR_18 = -1;
  goto bailout;
 }

 if ((VAR_15->ccb_h.status & VAR_5) != VAR_4) {
  if (VAR_14 != 0)
   FUNC_2(VAR_10, VAR_15, VAR_2,
     VAR_1, VAR_9);
  VAR_18 = -1;
  goto bailout;
 }

 for (VAR_17 = 0; VAR_17 < VAR_16.length; VAR_17++) {
  if (VAR_16.list[VAR_17] == VAR_11) {
   VAR_18 = 1;
   goto bailout;
  }
 }
bailout:
 if (VAR_15 != ((void*)0))
  FUNC_3(VAR_15);

 return (VAR_18);
}
