
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static uint64_t
FUNC_1(void)
{
 uint64_t VAR_6;





 VAR_6 = VAR_5;
 if (VAR_6 == 0) {
  FUNC_0(VAR_1, "Bad value for l2arc_write_max, value must "
      "be greater than zero, resetting it to the default (%d)",
      VAR_2);
  VAR_6 = VAR_5 = VAR_2;
 }

 if (VAR_3 == VAR_0)
  VAR_6 += VAR_4;

 return (VAR_6);

}
