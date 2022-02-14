
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct l_fixedpt {int fraction; int int_part; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int *) ;
 double VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct l_fixedpt const*) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_1,
            register const struct l_fixedpt *VAR_2,
            register const struct l_fixedpt *VAR_3)
{
 register int32_t VAR_4;
 register uint32_t VAR_5, VAR_6;
 register uint32_t VAR_7, VAR_8;
 register uint32_t VAR_9;
 register double VAR_10;
 int VAR_11;

 VAR_5 = FUNC_0(&VAR_3->int_part);
 VAR_7 = FUNC_0(&VAR_2->int_part);
 VAR_6 = FUNC_0(&VAR_3->fraction);
 VAR_8 = FUNC_0(&VAR_2->fraction);
 if (VAR_7 == 0 && VAR_8 == 0) {
  FUNC_2(VAR_1, VAR_3);
  return;
 }

 VAR_4 = VAR_5 - VAR_7;

 if (VAR_4 > 0) {
  VAR_11 = 0;
  VAR_9 = VAR_6 - VAR_8;
  if (VAR_8 > VAR_6)
   VAR_4 -= 1;
 } else if (VAR_4 < 0) {
  VAR_11 = 1;
  VAR_9 = VAR_8 - VAR_6;
  if (VAR_6 > VAR_8)
   VAR_4 += 1;
  VAR_4 = -VAR_4;
 } else {
  if (VAR_6 > VAR_8) {
   VAR_11 = 0;
   VAR_9 = VAR_6 - VAR_8;
  } else {
   VAR_11 = 1;
   VAR_9 = VAR_8 - VAR_6;
  }
 }

 VAR_10 = VAR_9;
 if (VAR_10 < 0.0)
  VAR_10 += VAR_0;
 VAR_10 = VAR_10 / VAR_0;
 VAR_9 = (uint32_t)(VAR_10 * 1000000000.0);
 FUNC_1((VAR_1, "%s%d.%09d", VAR_11 ? "-" : "+", VAR_4, VAR_9));
}
