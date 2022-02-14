
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned int,unsigned int) ;


 void* VAR_0 ;
 void* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static void
FUNC_1(int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 & 0x007f;
 unsigned int VAR_7 = (VAR_5 & 0x7f00) >> 8;
 unsigned int VAR_8, VAR_9;

 if (VAR_6 > 100)
  VAR_6 = 100;
 if (VAR_7 > 100)
  VAR_7 = 100;



 VAR_8 = VAR_2[128];
 VAR_9 = VAR_3[128];

 switch (VAR_4) {
 case 128:
 case 129:
  VAR_2[VAR_4] = VAR_6;
  VAR_3[VAR_4] = VAR_7;

  VAR_0 = ((VAR_6) * (VAR_8) * 65536 / 10000);
  VAR_1 = ((VAR_7) * (VAR_9) * 65536 / 10000);

  break;
 }

}
