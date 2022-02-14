
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sldns_buffer {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_xfer {scalar_t__ serial; } ;
struct auth_chunk {int len; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auth_zone*,int ,int ,struct sldns_buffer*,int *,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,int*) ;
 int FUNC_1 (struct auth_zone*,int ,int ,struct sldns_buffer*,int *,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,int*) ;
 int FUNC_2 (struct auth_chunk*,int) ;
 int FUNC_3 (struct auth_chunk*,int,size_t,int **,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int **,size_t*) ;
 int FUNC_4 (struct auth_chunk**,int*,size_t*,size_t) ;
 int FUNC_5 (struct auth_xfer*,struct auth_chunk**,int*,size_t*) ;
 int FUNC_6 (struct auth_chunk*,int,size_t,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,size_t,scalar_t__,scalar_t__) ;
 int FUNC_7 (char*,struct auth_chunk*,int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_10(struct auth_xfer* VAR_3, struct auth_zone* VAR_4,
 struct sldns_buffer* VAR_5)
{
 struct auth_chunk* VAR_6;
 int VAR_7;
 size_t VAR_8;
 uint8_t* VAR_9, *VAR_10;
 uint16_t VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;
 size_t VAR_15;
 int VAR_16 = 0;
 uint32_t VAR_17 = 0;
 size_t VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;


 FUNC_5(VAR_3, &VAR_6, &VAR_7, &VAR_8);
 while(!FUNC_2(VAR_6, VAR_7)) {
  if(!FUNC_3(VAR_6, VAR_7, VAR_8,
   &VAR_9, &VAR_11, &VAR_12, &VAR_14, &VAR_13,
   &VAR_10, &VAR_15)) {

   return 0;
  }
  if(VAR_2>=7) FUNC_7("apply ixfr",
   VAR_6, VAR_9, VAR_11, VAR_18);

  if(VAR_18 == 0 && VAR_11 != VAR_0)
   return 0;
  if(VAR_18 == 1 && VAR_11 != VAR_0) {



   return 0;
  }
  if(VAR_11 == VAR_0) {
   uint32_t VAR_21;
   if(VAR_13 < 22) return 0;
   VAR_21 = FUNC_8(VAR_10+VAR_13-20);
   if(VAR_16 == 0) {
    VAR_16 = 1;
    VAR_17 = VAR_21;
    VAR_19 = 1;

    if(!FUNC_6(VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_11, VAR_12, VAR_14,
     VAR_13, VAR_10, VAR_15,
     VAR_17, VAR_3->serial)) {
     return 0;
    }
   } else if(VAR_17 == VAR_21) {
    VAR_16++;
    if(VAR_18 == 1) {



     return 0;
    }
    if(VAR_16 == 3) {
     VAR_3->serial = VAR_17;
     break;
    }
   }





   VAR_19 = !VAR_19;
  }




  if(VAR_2>=7) FUNC_7((VAR_19?"del":"add"),
   VAR_6, VAR_9, VAR_11, VAR_18);
  if(VAR_19) {

   int VAR_22 = 0;
   if(!FUNC_1(VAR_4, VAR_6->data,
    VAR_6->len, VAR_5, VAR_9,
    VAR_11, VAR_12, VAR_14, VAR_10, VAR_13,
    &VAR_22)) {

    return 0;
   }
   if(VAR_22) {

    if(VAR_2>=4) FUNC_7(
     "IXFR error nonexistent RR",
     VAR_6, VAR_9, VAR_11, VAR_18);
    VAR_20 = 1;
   }
  } else if(VAR_18 != 0) {



   int VAR_23 = 0;

   if(!FUNC_0(VAR_4, VAR_6->data,
    VAR_6->len, VAR_5, VAR_9,
    VAR_11, VAR_12, VAR_14, VAR_10, VAR_13,
    &VAR_23)) {

    return 0;
   }
   if(VAR_23) {

    if(VAR_2>=4) FUNC_7(
     "IXFR error duplicate RR",
     VAR_6, VAR_9, VAR_11, VAR_18);
    VAR_20 = 1;
   }
  }

  VAR_18++;
  FUNC_4(&VAR_6, &VAR_7, &VAR_8, VAR_15);
 }
 if(VAR_20) {
  FUNC_9(VAR_1, "IXFR did not apply cleanly, fetching full zone");
  return 0;
 }
 return 1;
}
