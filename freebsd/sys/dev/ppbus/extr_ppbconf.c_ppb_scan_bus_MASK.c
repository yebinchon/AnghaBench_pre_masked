
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {scalar_t__ state; scalar_t__ error; int class_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_11)
{
 struct ppb_data * VAR_12 = (struct ppb_data *)FUNC_0(VAR_11);
 int VAR_13 = 0;







 VAR_13 = FUNC_2(VAR_11, VAR_5, VAR_8);

 if ((VAR_12->state == VAR_3) && (VAR_12->error == VAR_6))
  goto end_scan;

 FUNC_3(VAR_11);

 FUNC_1(VAR_11, "IEEE1284 device found ");

 if (!(VAR_13 = FUNC_2(VAR_11, VAR_5, 0))) {
  FUNC_5("/NIBBLE");
  FUNC_3(VAR_11);
 }

 if (!(VAR_13 = FUNC_2(VAR_11, VAR_7, 0))) {
  FUNC_5("/PS2");
  FUNC_3(VAR_11);
 }

 if (!(VAR_13 = FUNC_2(VAR_11, VAR_1, 0))) {
  FUNC_5("/ECP");
  FUNC_3(VAR_11);
 }

 if (!(VAR_13 = FUNC_2(VAR_11, VAR_1, VAR_9))) {
  FUNC_5("/ECP_RLE");
  FUNC_3(VAR_11);
 }

 if (!(VAR_13 = FUNC_2(VAR_11, VAR_2, 0))) {
  FUNC_5("/EPP");
  FUNC_3(VAR_11);
 }


 if (VAR_10) {
  if (!(VAR_13 = FUNC_2(VAR_11, VAR_5,
    VAR_8))) {
   FUNC_5("/NIBBLE_ID");
   FUNC_3(VAR_11);
  }

  if (!(VAR_13 = FUNC_2(VAR_11, VAR_7,
    VAR_8))) {
   FUNC_5("/PS2_ID");
   FUNC_3(VAR_11);
  }

  if (!(VAR_13 = FUNC_2(VAR_11, VAR_1,
    VAR_8))) {
   FUNC_5("/ECP_ID");
   FUNC_3(VAR_11);
  }

  if (!(VAR_13 = FUNC_2(VAR_11, VAR_1,
    VAR_8 | VAR_9))) {
   FUNC_5("/ECP_RLE_ID");
   FUNC_3(VAR_11);
  }

  if (!(VAR_13 = FUNC_2(VAR_11, VAR_0,
    VAR_4))) {
   FUNC_5("/Extensibility Link");
   FUNC_3(VAR_11);
  }
 }

 FUNC_5("\n");


 VAR_12->class_id = FUNC_4(VAR_11);

 return (0);

end_scan:
 return (VAR_13);
}
