
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct local_zones {int lock; } ;
struct local_zone {int lock; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* local_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,int,int *,int,int*) ;
 int FUNC_2 (int **,size_t*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct local_zones*) ;
 int VAR_1 ;
 int FUNC_6 (struct local_zones*,int *,size_t,int,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,char*,int *,int ,scalar_t__) ;
 struct local_zone* FUNC_11 (struct local_zones*,int *,size_t,int,int ,scalar_t__) ;
 int * FUNC_12 (int *,size_t) ;

__attribute__((used)) static int
FUNC_13(struct local_zones* VAR_2, struct config_file* VAR_3)
{



 struct config_strlist* VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 uint16_t VAR_7 = 0;
 uint8_t* VAR_8 = 0;
 size_t VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_5(VAR_2);
 for(VAR_4 = VAR_3->local_data; VAR_4; VAR_4 = VAR_4->next) {
  uint8_t* VAR_12;
  uint16_t VAR_13, VAR_14;
  size_t VAR_15;
  int VAR_16;
  if(!FUNC_4(VAR_4->str, &VAR_12, &VAR_13, &VAR_14)) {
   FUNC_9("Bad local-data RR %s", VAR_4->str);
   return 0;
  }
  VAR_16 = FUNC_0(VAR_12, &VAR_15);
  FUNC_7(&VAR_2->lock);
  if(!FUNC_6(VAR_2, VAR_12, VAR_15, VAR_16, VAR_13,
   VAR_14)) {
   if(!VAR_5) {
    VAR_7 = VAR_13;
    VAR_8 = VAR_12;
    VAR_9 = VAR_15;
    VAR_10 = VAR_16;
    VAR_11 = VAR_16;
    VAR_5 = 1;
   } else {
    int VAR_17;
    if(VAR_13 != VAR_7) {

     FUNC_3(VAR_12);
     VAR_6 = 1;
     FUNC_8(&VAR_2->lock);
     continue;
    }

    (void)FUNC_1(VAR_8, VAR_10,
     VAR_12, VAR_16, &VAR_17);
    FUNC_3(VAR_12);
    if(VAR_17 < VAR_11)
     VAR_11 = VAR_17;
   }
  } else FUNC_3(VAR_12);
  FUNC_8(&VAR_2->lock);
 }
 if(VAR_5) {
  uint8_t* VAR_18;
  struct local_zone* VAR_19;

  VAR_18 = VAR_8;
  FUNC_2(&VAR_18, &VAR_9, VAR_10 - VAR_11);
  VAR_18 = FUNC_12(VAR_18, VAR_9);
  FUNC_3(VAR_8);
  if(!VAR_18) {
   FUNC_9("out of memory");
   return 0;
  }
  FUNC_10(VAR_0, "implicit transparent local-zone",
   VAR_18, 0, VAR_7);
  if(!(VAR_19=FUNC_11(VAR_2, VAR_18, VAR_9, VAR_11,
   VAR_1, VAR_7))) {
   return 0;
  }
  FUNC_8(&VAR_19->lock);
 }
 if(VAR_6) {

  return FUNC_13(VAR_2, VAR_3);
 }
 return 1;
}
