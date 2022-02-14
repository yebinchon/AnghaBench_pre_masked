
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int p ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,int *,size_t) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int,unsigned char*,size_t,unsigned char*) ;

__attribute__((used)) static size_t
FUNC_4(uint8_t* VAR_2, size_t VAR_3, uint8_t* VAR_4, size_t VAR_5,
 int VAR_6, size_t VAR_7, uint8_t* VAR_8, size_t VAR_9)
{
 size_t VAR_10 = FUNC_1(VAR_6);


 unsigned char VAR_11[VAR_0+1+VAR_1+256];
 size_t VAR_12;
 if(VAR_5+VAR_9 > sizeof(VAR_11) || VAR_10+VAR_9 > sizeof(VAR_11))
  return 0;
 if(VAR_10 > VAR_3)
  return 0;

 FUNC_0(VAR_11, VAR_4, VAR_5);
 FUNC_2(VAR_11);
 FUNC_0(VAR_11+VAR_5, VAR_8, VAR_9);
 (void)FUNC_3(VAR_6, VAR_11, VAR_5+VAR_9, (unsigned char*)VAR_2);
 for(VAR_12=0; VAR_12<VAR_7; VAR_12++) {

  FUNC_0(VAR_11, VAR_2, VAR_10);
  FUNC_0(VAR_11+VAR_10, VAR_8, VAR_9);
  (void)FUNC_3(VAR_6, VAR_11, VAR_10+VAR_9,
   (unsigned char*)VAR_2);
 }
 return VAR_10;
}
