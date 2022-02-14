
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct uart_bas {int rclk; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_2(struct uart_bas *VAR_2, unsigned int VAR_3,
    unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 uint32_t VAR_7;
 long VAR_8;

 VAR_7 = VAR_2->rclk;
 *VAR_4 = 0;
 *VAR_5 = 0;

 VAR_8 = VAR_3;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  uint64_t VAR_9;
  int VAR_10;

  VAR_9 = VAR_3 * (VAR_6 + 1);
  VAR_9 *= (2 << 16);
  VAR_9 = VAR_9 / VAR_7;

  if (VAR_9 > VAR_1)
   break;

  VAR_10 = FUNC_0(FUNC_1(VAR_7, VAR_6, VAR_9) - VAR_3);
  if (VAR_10 < VAR_8) {
   VAR_8 = VAR_10;
   *VAR_4 = VAR_6;
   *VAR_5 = VAR_9;
  }
 }
}
