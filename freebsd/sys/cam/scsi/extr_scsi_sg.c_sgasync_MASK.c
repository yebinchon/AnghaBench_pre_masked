
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ccb_getdev {int protocol; } ;
struct cam_status_entry {char* status_text; } ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cam_status_entry* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *,char*,int ,struct cam_path*,void (*) (void*,int,struct cam_path*,void*),int const,struct ccb_getdev*) ;
 int FUNC_2 (struct cam_periph*,int,struct cam_path*,void*) ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(void *VAR_7, uint32_t VAR_8, struct cam_path *VAR_9, void *VAR_10)
{
 struct cam_periph *VAR_11;

 VAR_11 = (struct cam_periph *)VAR_7;

 switch (VAR_8) {
 case 128:
 {
  struct ccb_getdev *VAR_12;
  cam_status VAR_13;

  VAR_12 = (struct ccb_getdev *)VAR_10;
  if (VAR_12 == ((void*)0))
   break;

  if (VAR_12->protocol != VAR_3)
   break;





  VAR_13 = FUNC_1(VAR_6, VAR_5,
       VAR_4, ((void*)0), "sg",
       VAR_0, VAR_9,
       FUNC_4, 128, VAR_12);
  if ((VAR_13 != VAR_1) && (VAR_13 != VAR_2)) {
   const struct cam_status_entry *VAR_14;

   VAR_14 = FUNC_0(VAR_13);
   FUNC_3("sgasync: Unable to attach new device "
    "due to status %#x: %s\n", VAR_13, VAR_14 ?
    VAR_14->status_text : "Unknown");
  }
  break;
 }
 default:
  FUNC_2(VAR_11, VAR_8, VAR_9, VAR_10);
  break;
 }
}
