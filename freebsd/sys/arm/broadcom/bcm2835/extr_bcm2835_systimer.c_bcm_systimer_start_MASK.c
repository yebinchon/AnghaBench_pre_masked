
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct systimer {int index; int enabled; } ;
struct eventtimer {scalar_t__ et_frequency; struct systimer* et_priv; } ;
typedef int sbintime_t ;
typedef int register_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_4, sbintime_t VAR_5, sbintime_t VAR_6)
{
 struct systimer *VAR_7 = VAR_4->et_priv;
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10;
 register_t VAR_11;

 if (VAR_5 != 0) {

  VAR_10 = ((uint32_t)VAR_4->et_frequency * VAR_5) >> 32;

  VAR_11 = FUNC_2();
  VAR_8 = FUNC_0(VAR_2);
restart:
  VAR_8 += VAR_10;



  FUNC_1(VAR_3, (1 << VAR_7->index));
  FUNC_1(VAR_1 + VAR_7->index*4, VAR_8);
  VAR_9 = FUNC_0(VAR_2);
  if ((int32_t)(VAR_9 - VAR_8) >= 0) {
   VAR_10 *= 2;
   VAR_8 = VAR_9;
   goto restart;
  }
  VAR_7->enabled = 1;
  FUNC_3(VAR_11);

  return (0);
 }

 return (VAR_0);
}
