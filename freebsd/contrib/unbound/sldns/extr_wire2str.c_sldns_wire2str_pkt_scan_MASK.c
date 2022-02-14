
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int **,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_5 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_6 (int **,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_7 (int **,size_t*,char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_8 (int **,size_t*,char**,size_t*,int *,size_t) ;

int FUNC_9(uint8_t** VAR_1, size_t* VAR_2, char** VAR_3, size_t* VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 uint8_t* VAR_11 = *VAR_1;
 size_t VAR_12 = *VAR_2;
 if(*VAR_2 >= VAR_0) {
  VAR_6 = (unsigned)FUNC_3(*VAR_1);
  VAR_7 = (unsigned)FUNC_0(*VAR_1);
  VAR_8 = (unsigned)FUNC_2(*VAR_1);
  VAR_9 = (unsigned)FUNC_1(*VAR_1);
 } else {
  VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;
 }
 VAR_5 += FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 += FUNC_5(VAR_3, VAR_4, "\n");
 VAR_5 += FUNC_5(VAR_3, VAR_4, ";; QUESTION SECTION:\n");
 for(VAR_10=0; VAR_10<VAR_6; VAR_10++) {
  VAR_5 += FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_11, VAR_12);
  if(!*VAR_2) break;
 }
 VAR_5 += FUNC_5(VAR_3, VAR_4, "\n");
 VAR_5 += FUNC_5(VAR_3, VAR_4, ";; ANSWER SECTION:\n");
 for(VAR_10=0; VAR_10<VAR_7; VAR_10++) {
  VAR_5 += FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12);
  if(!*VAR_2) break;
 }
 VAR_5 += FUNC_5(VAR_3, VAR_4, "\n");
 VAR_5 += FUNC_5(VAR_3, VAR_4, ";; AUTHORITY SECTION:\n");
 for(VAR_10=0; VAR_10<VAR_8; VAR_10++) {
  VAR_5 += FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12);
  if(!*VAR_2) break;
 }
 VAR_5 += FUNC_5(VAR_3, VAR_4, "\n");
 VAR_5 += FUNC_5(VAR_3, VAR_4, ";; ADDITIONAL SECTION:\n");
 for(VAR_10=0; VAR_10<VAR_9; VAR_10++) {
  VAR_5 += FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12);
  if(!*VAR_2) break;
 }

 VAR_5 += FUNC_5(VAR_3, VAR_4, ";; MSG SIZE  rcvd: %d\n", (int)VAR_12);
 if(*VAR_2 > 0) {
  VAR_5 += FUNC_4(";; trailing garbage 0x",
   VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_5 += FUNC_5(VAR_3, VAR_4, "\n");
 }
 return VAR_5;
}
