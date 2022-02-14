
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int sldns_rr_descriptor ;
typedef int sldns_rdf_type ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int const*,size_t) ;
 size_t FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (char**,size_t*,char*) ;
 int FUNC_5 (int **,size_t*,char**,size_t*) ;
 int FUNC_6 (int **,size_t*,char**,size_t*,int ,int *,size_t) ;

int FUNC_7(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2,
 size_t* VAR_3, uint16_t VAR_4, uint8_t* VAR_5, size_t VAR_6)
{

 uint8_t* VAR_7 = *VAR_0;
 char* VAR_8 = *VAR_2;
 size_t VAR_9 = *VAR_1, VAR_10 = *VAR_3;
 size_t VAR_11, VAR_12;
 sldns_rdf_type VAR_13;
 int VAR_14 = 0, VAR_15;

 const sldns_rr_descriptor *VAR_16 = FUNC_0(VAR_4);
 if(!VAR_16)
  return FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);


 VAR_12 = FUNC_2(VAR_16);
 for(VAR_11=0; VAR_11 < VAR_12; VAR_11++) {
  if(*VAR_1 == 0) {
   if(VAR_11 < FUNC_3(VAR_16))
    goto failed;
   break;
  }
  VAR_13 = FUNC_1(VAR_16, VAR_11);
  if(VAR_11 != 0)
   VAR_14 += FUNC_4(VAR_2, VAR_3, " ");
  VAR_15 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_13,
   VAR_5, VAR_6);
  if(VAR_15 == -1) {
  failed:

   *VAR_0 = VAR_7; *VAR_2 = VAR_8;
   *VAR_1 = VAR_9; *VAR_3 = VAR_10;
   return FUNC_5(VAR_0, VAR_1,
    VAR_2, VAR_3);
  }
  VAR_14 += VAR_15;
 }
 if(*VAR_1 != 0) {
  goto failed;
 }
 return VAR_14;
}
