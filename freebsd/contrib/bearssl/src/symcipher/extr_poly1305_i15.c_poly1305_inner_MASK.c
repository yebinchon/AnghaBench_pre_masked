
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,unsigned char*,int,int ) ;
 int FUNC_3 (int*,int*,int const*,int ,int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_7(uint16_t *VAR_2, const uint16_t *VAR_3, const void *VAR_4, size_t VAR_5)
{
 const unsigned char *VAR_6;

 VAR_6 = VAR_4;
 while (VAR_5 > 0) {
  unsigned char VAR_7[16], VAR_8[16];
  uint16_t VAR_9[10];
  uint32_t VAR_10;
  int VAR_11;




  if (VAR_5 < 16) {
   FUNC_6(VAR_7, 0, sizeof VAR_7);
   FUNC_5(VAR_7, VAR_6, VAR_5);
   VAR_6 = VAR_7;
   VAR_5 = 16;
  }





  for (VAR_11 = 0; VAR_11 < 16; VAR_11 ++) {
   VAR_8[VAR_11] = VAR_6[15 - VAR_11];
  }
  FUNC_2(VAR_9, VAR_8, sizeof VAR_8, VAR_1);
  VAR_9[9] |= 0x0100;





  VAR_10 = FUNC_1(VAR_9, VAR_2, 1);
  VAR_10 |= FUNC_0(FUNC_4(VAR_9, VAR_1, 0));
  FUNC_4(VAR_9, VAR_1, VAR_10);




  FUNC_3(VAR_2, VAR_9, VAR_3, VAR_1, VAR_0);

  VAR_6 += 16;
  VAR_5 -= 16;
 }
}
