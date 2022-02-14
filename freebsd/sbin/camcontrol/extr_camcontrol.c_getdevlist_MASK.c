
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* index; int status; char* periph_name; int unit_number; int generation; } ;
struct TYPE_3__ {int retry_count; int flags; int func_code; } ;
union ccb {TYPE_2__ cgdl; TYPE_1__ ccb_h; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (union ccb*) ;
 union ccb* FUNC_1 (struct cam_device*) ;
 scalar_t__ FUNC_2 (struct cam_device*,union ccb*) ;
 int FUNC_3 (int ,char*,char*,int,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct cam_device *VAR_3)
{
 union ccb *VAR_4;
 char VAR_5[32];
 int VAR_6 = 0;

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->ccb_h.func_code = VAR_1;
 VAR_4->ccb_h.flags = VAR_0;
 VAR_4->ccb_h.retry_count = 1;
 VAR_4->cgdl.index = 0;
 VAR_4->cgdl.status = 128;
 while (VAR_4->cgdl.status == 128) {
  if (FUNC_2(VAR_3, VAR_4) < 0) {
   FUNC_5("error getting device list");
   FUNC_0(VAR_4);
   return (1);
  }

  VAR_5[0] = '\0';

  switch (VAR_4->cgdl.status) {
   case 128:
    FUNC_4(VAR_5, "MORE");
    break;
   case 130:
    FUNC_4(VAR_5, "LAST");
    break;
   case 129:
    FUNC_4(VAR_5, "CHANGED");
    break;
   case 131:
    FUNC_4(VAR_5, "ERROR");
    VAR_6 = 1;
    break;
  }

  FUNC_3(VAR_2, "%s%d:  generation: %d index: %s status: %s\n",
   VAR_4->cgdl.periph_name,
   VAR_4->cgdl.unit_number,
   VAR_4->cgdl.generation,
   VAR_4->cgdl.index,
   VAR_5);





  if (VAR_4->cgdl.status == 129)
   VAR_4->cgdl.index = 0;
 }

 FUNC_0(VAR_4);

 return (VAR_6);
}
