
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(uint64_t VAR_2, int VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 uint32_t VAR_7, VAR_8;


 VAR_7 = (0x1 << 31);
 if (VAR_6)
  VAR_7 |= (0x01 << 8);
 VAR_7 |= (0x01 << 2);
 VAR_7 |= 0x01;
 FUNC_2(VAR_2, FUNC_0(VAR_3, VAR_4, VAR_0), VAR_7);

 VAR_8 = (0x7 << 12) |
     (0x2 << 8) |
     0x1;
 FUNC_2(VAR_2, FUNC_0(VAR_3, VAR_4, VAR_1), VAR_8);


 VAR_7 &= ~(0x01 << 31);
 FUNC_2(VAR_2, FUNC_0(VAR_3, VAR_4, VAR_0), VAR_7);


 FUNC_2(VAR_2, FUNC_1(VAR_3, VAR_4), VAR_5);
}
