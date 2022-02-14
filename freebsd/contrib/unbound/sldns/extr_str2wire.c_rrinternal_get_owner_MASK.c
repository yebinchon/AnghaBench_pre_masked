
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int *,size_t*,int *,size_t) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(sldns_buffer* VAR_3, uint8_t* VAR_4, size_t* VAR_5,
 size_t* VAR_6, uint8_t* VAR_7, size_t VAR_8, uint8_t* VAR_9,
 size_t VAR_10, char* VAR_11, size_t VAR_12)
{

 if(FUNC_3(VAR_3, VAR_11, "\t\n ", VAR_12) == -1) {
  return FUNC_0(VAR_2,
   FUNC_4(VAR_3));
 }

 if(FUNC_6(VAR_11, "@") == 0) {
  uint8_t* VAR_13;
  if (VAR_7) {
   *VAR_6 = VAR_8;
   VAR_13 = VAR_7;
  } else if (VAR_9) {
   *VAR_6 = VAR_10;
   VAR_13 = VAR_9;
  } else {

   *VAR_6 = 1;
   VAR_13 = (uint8_t*)"\0";
  }
  if(*VAR_5 < *VAR_6)
   return FUNC_0(VAR_0,
    FUNC_4(VAR_3));
  FUNC_2(VAR_4, VAR_13, *VAR_6);
 } else if(*VAR_11 == '\0') {


  uint8_t* VAR_14;
  if(VAR_9) {
   *VAR_6 = VAR_10;
   VAR_14 = VAR_9;
  } else if(VAR_7) {
   *VAR_6 = VAR_8;
   VAR_14 = VAR_7;
  } else {
   *VAR_6 = 1;
   VAR_14 = (uint8_t*)"\0";
  }
  if(*VAR_5 < *VAR_6)
   return FUNC_0(VAR_0,
    FUNC_4(VAR_3));
  FUNC_2(VAR_4, VAR_14, *VAR_6);
 } else {
  size_t VAR_15 = *VAR_5;
  int VAR_16 = FUNC_5(VAR_11, VAR_4, &VAR_15,
   VAR_7, VAR_8);
  if(VAR_16) return FUNC_1(VAR_16,
   FUNC_4(VAR_3)-FUNC_7(VAR_11));
  *VAR_6 = VAR_15;
 }
 return VAR_1;
}
