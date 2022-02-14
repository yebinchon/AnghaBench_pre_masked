
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct eventtimer {int et_frequency; int et_flags; scalar_t__ et_min_period; scalar_t__ et_max_period; int et_name; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct eventtimer *VAR_2, int VAR_3)
{
 uint64_t VAR_4;

 if (VAR_2->et_frequency != 0) {
  VAR_4 = FUNC_2((VAR_2->et_frequency + VAR_3 / 2) / VAR_3, 1);
  if (VAR_2->et_flags & VAR_0)
   VAR_4 = 1 << (FUNC_1(VAR_4 + VAR_4 / 2) - 1);
  VAR_3 = (VAR_2->et_frequency + VAR_4 / 2) / VAR_4;
 }
 if (VAR_2->et_min_period > VAR_1)
  FUNC_5("Event timer \"%s\" doesn't support sub-second periods!",
      VAR_2->et_name);
 else if (VAR_2->et_min_period != 0)
  VAR_3 = FUNC_4(VAR_3, FUNC_0(VAR_2->et_min_period));
 if (VAR_2->et_max_period < VAR_1 && VAR_2->et_max_period != 0)
  VAR_3 = FUNC_3(VAR_3, FUNC_0(VAR_2->et_max_period));
 return (VAR_3);
}
