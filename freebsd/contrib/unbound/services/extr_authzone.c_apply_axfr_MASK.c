
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct sldns_buffer {int dummy; } ;
struct auth_zone {int data; } ;
struct auth_xfer {int have_zone; int serial; } ;
struct auth_chunk {int len; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct auth_zone*,int ,int ,struct sldns_buffer*,int *,scalar_t__,scalar_t__,int ,int *,scalar_t__,int *) ;
 int FUNC_1 (struct auth_chunk*,int) ;
 int FUNC_2 (struct auth_chunk*,int,size_t,int **,scalar_t__*,scalar_t__*,int *,scalar_t__*,int **,size_t*) ;
 int FUNC_3 (struct auth_chunk**,int*,size_t*,size_t) ;
 int FUNC_4 (struct auth_xfer*,struct auth_chunk**,int*,size_t*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,struct auth_chunk*,int *,scalar_t__,size_t) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_10(struct auth_xfer* VAR_4, struct auth_zone* VAR_5,
 struct sldns_buffer* VAR_6)
{
 struct auth_chunk* VAR_7;
 int VAR_8;
 size_t VAR_9;
 uint8_t* VAR_10, *VAR_11;
 uint16_t VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16 = 0;
 size_t VAR_17;
 size_t VAR_18 = 0;
 int VAR_19 = 0;


 FUNC_9(&VAR_5->data, VAR_2, ((void*)0));
 FUNC_7(&VAR_5->data, &VAR_1);
 VAR_4->have_zone = 0;
 VAR_4->serial = 0;




 FUNC_4(VAR_4, &VAR_7, &VAR_8, &VAR_9);
 while(!FUNC_1(VAR_7, VAR_8)) {
  if(!FUNC_2(VAR_7, VAR_8, VAR_9,
   &VAR_10, &VAR_12, &VAR_13, &VAR_15, &VAR_14,
   &VAR_11, &VAR_17)) {

   return 0;
  }
  if(VAR_3>=7) FUNC_6("apply_axfr",
   VAR_7, VAR_10, VAR_12, VAR_18);
  if(VAR_12 == VAR_0) {
   if(VAR_18 != 0) {

    VAR_19 = 1;
    break;
   }
   if(VAR_14 < 22) return 0;
   VAR_16 = FUNC_8(VAR_11+VAR_14-20);
  }


  if(!FUNC_0(VAR_5, VAR_7->data, VAR_7->len,
   VAR_6, VAR_10, VAR_12, VAR_13, VAR_15,
   VAR_11, VAR_14, ((void*)0))) {

   return 0;
  }

  VAR_18++;
  FUNC_3(&VAR_7, &VAR_8, &VAR_9, VAR_17);
 }
 if(!VAR_19) {
  FUNC_5("no end SOA record for AXFR");
  return 0;
 }

 VAR_4->serial = VAR_16;
 VAR_4->have_zone = 1;
 return 1;
}
