
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_range {scalar_t__ sbit; unsigned long ebit; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_1, struct itbl_range VAR_2)
{
  unsigned long VAR_3;
  unsigned long VAR_4;
  int VAR_5 = VAR_0 - VAR_2.sbit;

  FUNC_0 (VAR_2.sbit >= VAR_2.ebit);
  FUNC_0 (VAR_0 >= VAR_2.sbit);
  FUNC_0 (VAR_2.ebit >= 0);


  VAR_3 = 0xffffffff << VAR_5;
  VAR_3 = VAR_3 >> VAR_5;
  VAR_3 = VAR_3 >> VAR_2.ebit;
  VAR_3 = VAR_3 << VAR_2.ebit;

  VAR_4 = (VAR_1 << VAR_2.ebit) & VAR_3;
  return VAR_4;
}
