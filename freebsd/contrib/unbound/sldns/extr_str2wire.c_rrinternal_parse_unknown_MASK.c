
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;
typedef int sldns_buffer ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,size_t,size_t,size_t*,size_t) ;
 int FUNC_4 (int *,char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(sldns_buffer* VAR_5, char* VAR_6, size_t VAR_7,
        uint8_t* VAR_8, size_t* VAR_9, size_t* VAR_10, size_t VAR_11)
{
 const char* VAR_12 = "\n\t ";
 size_t VAR_13, VAR_14;



 FUNC_6(VAR_5, VAR_11);
 if(FUNC_4(VAR_5, VAR_6, VAR_12, VAR_7) == -1)
  return VAR_2;

 if(FUNC_4(VAR_5, VAR_6, VAR_12, VAR_7) == -1) {

  return FUNC_0(VAR_4,
   FUNC_5(VAR_5));
 }
 VAR_13 = (size_t)FUNC_2(VAR_6);
 if(VAR_13 > VAR_0 ||
  *VAR_10 + VAR_13 > *VAR_9) {
  return FUNC_0(VAR_1,
   FUNC_5(VAR_5));
 }

 VAR_13 *= 2;
 VAR_14 = 0;
 while(VAR_14 < VAR_13) {
  int VAR_15;
  ssize_t VAR_16 = FUNC_4(VAR_5, VAR_6, VAR_12, VAR_7);
  if((VAR_15 = FUNC_3(VAR_6, VAR_8, *VAR_9,
   *VAR_10, &VAR_14, VAR_13)) != 0)
   return FUNC_1(VAR_15,
    FUNC_5(VAR_5)-FUNC_7(VAR_6));
  if(VAR_16 == -1) {
   if(VAR_14 != VAR_13)
    return FUNC_0(
     VAR_4,
     FUNC_5(VAR_5));
   break;
  }
 }
 *VAR_10 += VAR_13/2;
 return VAR_3;
}
