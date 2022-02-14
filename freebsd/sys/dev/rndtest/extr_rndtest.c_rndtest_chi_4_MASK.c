
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rndtest_state {int* rs_buf; } ;
struct TYPE_2__ {int rst_chi; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct rndtest_state*,int,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct rndtest_state *VAR_4)
{
 unsigned int VAR_5[VAR_0], VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5[VAR_6] = 0;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5[(VAR_4->rs_buf[VAR_6] >> 4) & VAR_1]++;
  VAR_5[(VAR_4->rs_buf[VAR_6] >> 0) & VAR_1]++;
 }

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_5[VAR_6] * VAR_5[VAR_6];

 if (VAR_7 >= 1563181 && VAR_7 <= 1576929) {
  FUNC_0(VAR_4, 0, "chi^2(4): pass (sum %u)", VAR_7);
  return (0);
 } else {
  FUNC_0(VAR_4, 1, "chi^2(4): failed (sum %u)", VAR_7);
  VAR_3.rst_chi++;
  return (-1);
 }
}
