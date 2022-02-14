
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(uint64_t VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 uint32_t VAR_8 = 0;
 int VAR_9 = 0;

 if (VAR_6 != 4)
  VAR_9 = (1 << 23);

 VAR_8 = FUNC_1(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6));


 if (VAR_7 != VAR_1)
  VAR_8 |= VAR_2;
 VAR_8 |= 0x100000;
 VAR_8 |= (VAR_7 << VAR_3);
 VAR_8 &= ~(0x20000);
 FUNC_2(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6), VAR_8);

 VAR_8 = FUNC_1(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6));
 VAR_8 |= 0x40000000;
 FUNC_2(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6), VAR_8);


 VAR_8 = FUNC_1(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6));
 VAR_8 &= ~( (1 << 29) | (0x7ffff));
 FUNC_2(VAR_4,
     FUNC_0(VAR_5, VAR_0, VAR_6), VAR_9 | VAR_8);
}
