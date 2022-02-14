
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct rndtest_state {int* rs_buf; } ;
struct TYPE_2__ {int rst_monobit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct rndtest_state*,int,char*,int,...) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct rndtest_state *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8;
 u_int8_t VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_9 = VAR_5->rs_buf[VAR_6];
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++, VAR_9 <<= 1)
   if (VAR_9 & 0x80)
    VAR_7++;
 }
 if (VAR_7 > VAR_1 &&
     VAR_7 < VAR_0) {
  if (VAR_4 > 1)
   FUNC_0(VAR_5, 0, "monobit pass (%d < %d < %d)",
       VAR_1, VAR_7,
       VAR_0);
  return (0);
 } else {
  if (VAR_4)
   FUNC_0(VAR_5, 1,
       "monobit failed (%d ones)", VAR_7);
  VAR_3.rst_monobit++;
  return (-1);
 }
}
