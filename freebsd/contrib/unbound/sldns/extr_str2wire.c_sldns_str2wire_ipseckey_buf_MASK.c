
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int token ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int*,size_t*) ;
 int FUNC_8 (char*,int*,size_t*) ;
 int FUNC_9 (char const*,int*,size_t*) ;
 int FUNC_10 (char*,int*,size_t*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char const*) ;

int FUNC_13(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 size_t VAR_6 = 0, VAR_7 = 0;
 int VAR_8;
 uint8_t VAR_9;
 char VAR_10[512];
 sldns_buffer VAR_11;
 FUNC_5(&VAR_11, (uint8_t*)VAR_3, FUNC_12(VAR_3));

 if(*VAR_5 < 3)
  return VAR_0;

 if(FUNC_3(&VAR_11, VAR_10, "\t\n ", sizeof(VAR_10)) <= 0)
  return FUNC_0(VAR_1,
   FUNC_6(&VAR_11));
 VAR_4[0] = (uint8_t)FUNC_2(VAR_10);

 if(FUNC_3(&VAR_11, VAR_10, "\t\n ", sizeof(VAR_10)) <= 0)
  return FUNC_0(VAR_1,
   FUNC_6(&VAR_11));
 VAR_4[1] = (uint8_t)FUNC_2(VAR_10);
 VAR_9 = VAR_4[1];

 if(FUNC_3(&VAR_11, VAR_10, "\t\n ", sizeof(VAR_10)) <= 0)
  return FUNC_0(VAR_1,
   FUNC_6(&VAR_11));
 VAR_4[2] = (uint8_t)FUNC_2(VAR_10);


 if(FUNC_3(&VAR_11, VAR_10, "\t\n ", sizeof(VAR_10)) <= 0)
  return FUNC_0(VAR_1,
   FUNC_6(&VAR_11));
 if(VAR_9 == 0) {

  if(FUNC_11(VAR_10, ".") != 0)
   return FUNC_0(VAR_1,
    FUNC_6(&VAR_11));
  VAR_6 = 0;
 } else if(VAR_9 == 1) {

  VAR_6 = *VAR_5 - 3;
  VAR_8 = FUNC_7(VAR_10, VAR_4+3, &VAR_6);
  if(VAR_8) return FUNC_1(VAR_8, FUNC_6(&VAR_11));
 } else if(VAR_9 == 2) {

  VAR_6 = *VAR_5 - 3;
  VAR_8 = FUNC_8(VAR_10, VAR_4+3, &VAR_6);
  if(VAR_8) return FUNC_1(VAR_8, FUNC_6(&VAR_11));
 } else if(VAR_9 == 3) {

  VAR_6 = *VAR_5 - 3;
  VAR_8 = FUNC_10(VAR_10, VAR_4+3, &VAR_6);
  if(VAR_8) return FUNC_1(VAR_8, FUNC_6(&VAR_11));
 } else {

  return FUNC_0(VAR_1,
   FUNC_6(&VAR_11));
 }

 if(*VAR_5 < 3 + VAR_6)
  return FUNC_0(VAR_0,
   FUNC_6(&VAR_11));


 VAR_7 = *VAR_5 - 3 - VAR_6;
 VAR_8 = FUNC_9((const char*)FUNC_4(&VAR_11),
  VAR_4+3+VAR_6, &VAR_7);
 if(VAR_8) return FUNC_1(VAR_8, FUNC_6(&VAR_11));

 *VAR_5 = 3 + VAR_6 + VAR_7;
 return VAR_2;
}
