
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void** VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 () ;
 int VAR_11 ;
 void* FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(void)
{
 uint64_t VAR_14, VAR_15;
 int VAR_16;





 VAR_9[VAR_1] = FUNC_1(VAR_6);
 VAR_9[VAR_0] = FUNC_1(VAR_4);
 VAR_9[VAR_3] = FUNC_1(VAR_8);
 VAR_9[VAR_2] = FUNC_1(VAR_7);




 VAR_10 = FUNC_1(VAR_5);
 VAR_10 |= (1 << 12) | (1 << 11);
 VAR_10 &= ~((1 << 18) | (1 << 16));

 if (FUNC_0() || FUNC_2())
  VAR_14 = 133330000;
 else
  VAR_14 = 100000000;






 VAR_15 = (VAR_12 / VAR_14) & 0xff;
 VAR_11 = (VAR_15 << 8) | (VAR_15 << 40);
 for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
  VAR_13 = (VAR_13 << 8) | VAR_15;
}
