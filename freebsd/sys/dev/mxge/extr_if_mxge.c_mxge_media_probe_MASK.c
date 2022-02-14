
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct mxge_media_type {int bitmask; int name; scalar_t__ flag; } ;
struct TYPE_8__ {scalar_t__ connector; scalar_t__ current_media; int dev; scalar_t__ need_media_probe; } ;
typedef TYPE_1__ mxge_softc_t ;
struct TYPE_9__ {int data0; void* data1; } ;
typedef TYPE_2__ mxge_cmd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 struct mxge_media_type* VAR_9 ;
 scalar_t__ VAR_10 ;
 struct mxge_media_type* VAR_11 ;
 int FUNC_5 (struct mxge_media_type*) ;

__attribute__((used)) static void
FUNC_6(mxge_softc_t *VAR_12)
{
 mxge_cmd_t VAR_13;
 char *VAR_14;

 struct mxge_media_type *VAR_15 = ((void*)0);
 int VAR_16, VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20;

 VAR_12->need_media_probe = 0;

 if (VAR_12->connector == VAR_7) {

  VAR_15 = VAR_11;
  VAR_19 =
   FUNC_5(VAR_11);
  VAR_20 = VAR_8;
  VAR_14 = "XFP";
 } else if (VAR_12->connector == VAR_6) {

  VAR_15 = VAR_9;
  VAR_19 =
   FUNC_5(VAR_9);
  VAR_14 = "SFP+";
  VAR_20 = 3;
 } else {

  return;
 }
 VAR_13.data0 = 0;
 VAR_13.data1 = VAR_20;
 VAR_17 = FUNC_4(VAR_12, VAR_4, &VAR_13);
 if (VAR_17 == VAR_2) {
  FUNC_1(VAR_12->dev, "failed to read XFP\n");
 }
 if (VAR_17 == VAR_1) {
  FUNC_1(VAR_12->dev, "Type R/S with no XFP!?!?\n");
 }
 if (VAR_17 != VAR_5) {
  return;
 }


 VAR_13.data0 = VAR_20;
 VAR_17 = FUNC_4(VAR_12, VAR_3, &VAR_13);
 for (VAR_18 = 0; (VAR_17 == VAR_0) && (VAR_18 < 50); VAR_18++) {
  FUNC_0(1000);
  VAR_13.data0 = VAR_20;
  VAR_17 = FUNC_4(VAR_12, VAR_3, &VAR_13);
 }
 if (VAR_17 != VAR_5) {
  FUNC_1(VAR_12->dev, "failed to read %s (%d, %dms)\n",
         VAR_14, VAR_17, VAR_18);
  return;
 }

 if (VAR_13.data0 == VAR_15[0].bitmask) {
  if (VAR_10)
   FUNC_1(VAR_12->dev, "%s:%s\n", VAR_14,
          VAR_15[0].name);
  if (VAR_12->current_media != VAR_15[0].flag) {
   FUNC_2(VAR_12);
   FUNC_3(VAR_12, VAR_15[0].flag);
  }
  return;
 }
 for (VAR_16 = 1; VAR_16 < VAR_19; VAR_16++) {
  if (VAR_13.data0 & VAR_15[VAR_16].bitmask) {
   if (VAR_10)
    FUNC_1(VAR_12->dev, "%s:%s\n",
           VAR_14,
           VAR_15[VAR_16].name);

   if (VAR_12->current_media != VAR_15[VAR_16].flag) {
    FUNC_2(VAR_12);
    FUNC_3(VAR_12, VAR_15[VAR_16].flag);
   }
   return;
  }
 }
 if (VAR_10)
  FUNC_1(VAR_12->dev, "%s media 0x%x unknown\n",
         VAR_14, VAR_13.data0);

 return;
}
