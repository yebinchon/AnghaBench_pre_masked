
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct rndtest_state {int* rs_buf; } ;
struct TYPE_2__ {int rst_longruns; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct rndtest_state*,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct rndtest_state *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 u_int8_t VAR_9;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_9 = VAR_2->rs_buf[VAR_3];
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++, VAR_9 <<= 1) {
   if (VAR_9 & 0x80) {
    VAR_6 = 0;
    VAR_5++;
    if (VAR_5 > VAR_7)
     VAR_7 = VAR_5;
   } else {
    VAR_5 = 0;
    VAR_6++;
    if (VAR_6 > VAR_8)
     VAR_8 = VAR_6;
   }
  }
 }

 if (VAR_7 < 26 && VAR_8 < 26) {
  FUNC_0(VAR_2, 0, "longruns pass (%d ones, %d zeros)",
   VAR_7, VAR_8);
  return (0);
 } else {
  FUNC_0(VAR_2, 1, "longruns fail (%d ones, %d zeros)",
   VAR_7, VAR_8);
  VAR_1.rst_longruns++;
  return (-1);
 }
}
