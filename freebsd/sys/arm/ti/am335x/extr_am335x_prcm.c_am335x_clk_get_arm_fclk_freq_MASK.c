
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct ti_clock_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned int*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ti_clock_dev *VAR_2, unsigned int *VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_4(VAR_0);


 if (FUNC_0(VAR_4))
  return VAR_1;

 FUNC_3(((void*)0), &VAR_5);
 *VAR_3 = FUNC_2(VAR_4) * (VAR_5 / FUNC_1(VAR_4));
 return(0);
}
