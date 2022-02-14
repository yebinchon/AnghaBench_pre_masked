
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct ti_clock_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ti_clock_dev *VAR_5, unsigned int VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13;

 FUNC_2(((void*)0), &VAR_7);


 FUNC_4(VAR_0, 0x4);


 while (!(FUNC_3(VAR_2)
     & (1 << 8)))
  FUNC_0(10);


 VAR_13 = VAR_6;
 for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++) {
  for (VAR_11 = 1; VAR_11 < VAR_3; VAR_11++) {
   VAR_12 = FUNC_1(VAR_6 - VAR_10*(VAR_7/VAR_11));
   if (VAR_12 < VAR_13) {
    VAR_8 = VAR_10;
    VAR_9 = VAR_11;
    VAR_13 = VAR_12;
   }
   if (VAR_13 == 0)
    break;
  }
 }

 FUNC_4(VAR_1, (VAR_8 << 8) | (VAR_9 - 1));


 FUNC_4(VAR_0, 0x7);

 int VAR_14 = 10000;
 while ((!(FUNC_3(VAR_2)
     & (1 << 0))) && VAR_14--)
  FUNC_0(10);

 return(0);
}
