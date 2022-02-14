
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_range {int sbit; unsigned long ebit; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0 (unsigned long VAR_1, struct itbl_range VAR_2)
{
  unsigned long VAR_3;
  unsigned long VAR_4;
  int VAR_5 = VAR_0 - VAR_2.sbit;


  VAR_3 = 0xffffffff << VAR_5;
  VAR_3 = VAR_3 >> VAR_5;
  VAR_3 = VAR_3 >> VAR_2.ebit;
  VAR_3 = VAR_3 << VAR_2.ebit;

  VAR_4 = (VAR_1 & VAR_3) >> VAR_2.ebit;
  return VAR_4;
}
