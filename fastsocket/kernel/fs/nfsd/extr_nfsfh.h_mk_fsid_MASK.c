
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int ino_t ;
typedef int dev_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,unsigned char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(int VAR_0, u32 *VAR_1, dev_t VAR_2, ino_t VAR_3,
      u32 VAR_4, unsigned char *VAR_5)
{
 u32 *VAR_6;
 switch(VAR_0) {
 case 135:
  VAR_1[0] = FUNC_3((FUNC_1(VAR_2)<<16) |
     FUNC_2(VAR_2));
  VAR_1[1] = FUNC_4(VAR_3);
  break;
 case 132:
  VAR_1[0] = VAR_4;
  break;
 case 133:
  VAR_1[0] = FUNC_3(FUNC_1(VAR_2));
  VAR_1[1] = FUNC_3(FUNC_2(VAR_2));
  VAR_1[2] = FUNC_4(VAR_3);
  break;

 case 134:
  VAR_1[0] = FUNC_6(VAR_2);
  VAR_1[1] = FUNC_4(VAR_3);
  break;

 case 129:

  VAR_6 = (u32*)VAR_5;
  VAR_1[0] = FUNC_4(VAR_3);
  VAR_1[1] = VAR_6[0] ^ VAR_6[1] ^ VAR_6[2] ^ VAR_6[3];
  break;

 case 128:

  VAR_6 = (u32*)VAR_5;
  VAR_1[0] = VAR_6[0] ^ VAR_6[2];
  VAR_1[1] = VAR_6[1] ^ VAR_6[3];
  break;

 case 131:

  FUNC_5(VAR_1, VAR_5, 16);
  break;

 case 130:

  *(u64*)VAR_1 = (u64)VAR_3;
  FUNC_5(VAR_1+2, VAR_5, 16);
  break;
 default: FUNC_0();
 }
}
