
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_device {int dummy; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,int,int) ;
 int FUNC_9 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 int FUNC_10 (struct cam_device*,int,int,int,int,int,int,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*,...) ;

void
FUNC_15(struct cam_device *VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16,
    int VAR_17, int VAR_18, int VAR_19, int VAR_20, int VAR_21, int VAR_22,
    int VAR_23, int VAR_24)
{
 const char *VAR_25;

 if (VAR_21) {
  if (VAR_20)
   FUNC_5(VAR_4, "cannot edit in binary mode.");
 } else if (VAR_14) {
  FUNC_2(VAR_12, VAR_13, VAR_16, VAR_17, VAR_18,
      VAR_19, VAR_22, VAR_23, VAR_24);
 } else {
  if ((VAR_25 = FUNC_7("SCSI_MODES")) == ((void*)0))
   VAR_25 = VAR_0;

  if (FUNC_8(VAR_25, VAR_18, VAR_19) != 0 &&
      (VAR_20 || VAR_11)) {
   if (VAR_9 == VAR_1) {

    FUNC_13("cannot open modepage database \"%s\"",
        VAR_25);
   } else if (VAR_9 == VAR_2) {

    FUNC_14("modepage 0x%02x,0x%02x not found in "
        "database \"%s\"", VAR_18, VAR_19,
        VAR_25);
   }

   if (!VAR_20) {
    FUNC_14("reverting to binary display only");
    VAR_21 = 1;
   } else
    FUNC_6(VAR_3);
  }

  FUNC_1(VAR_12, VAR_13, VAR_15, VAR_17, VAR_18, VAR_19,
      VAR_22, VAR_23, VAR_24);
 }

 if (VAR_20) {
  if (VAR_17 << VAR_5 != VAR_6 &&
      VAR_17 << VAR_5 != VAR_7)
   FUNC_5(VAR_4, "it only makes sense to edit page 0 "
       "(current) or page 3 (saved values)");
  FUNC_11();
  if (VAR_14) {
   FUNC_4(VAR_12, VAR_13, VAR_16, VAR_17, VAR_18,
       VAR_19, VAR_22, VAR_23, VAR_24);
  } else {
   FUNC_3(VAR_12, VAR_13, VAR_15, VAR_17, VAR_18, VAR_19,
       VAR_22, VAR_23, VAR_24);
  }
 } else if (VAR_21 || FUNC_0(&VAR_8)) {

  if (VAR_14) {
   FUNC_10(VAR_12, VAR_13, VAR_16, VAR_17, VAR_18,
       VAR_19, VAR_22, VAR_23, VAR_24);
  } else {
   FUNC_9(VAR_12, VAR_13, VAR_15, VAR_17, VAR_18, VAR_19,
       VAR_22, VAR_23, VAR_24);
  }
 } else {

  FUNC_12(VAR_10, 0);
 }
}
