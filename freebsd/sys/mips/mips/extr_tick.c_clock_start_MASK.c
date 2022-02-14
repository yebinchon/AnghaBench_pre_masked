
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct eventtimer {int et_frequency; } ;
typedef int sbintime_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct eventtimer *VAR_2, sbintime_t VAR_3, sbintime_t VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;

 if (VAR_4 != 0) {
  VAR_6 = (VAR_2->et_frequency * VAR_4) >> 32;
 } else
  VAR_6 = 0;
 if (VAR_3 != 0)
  VAR_5 = (VAR_2->et_frequency * VAR_3) >> 32;
 else
  VAR_5 = VAR_6;
 FUNC_0(VAR_1, VAR_6);
 VAR_7 = FUNC_1() + VAR_5;
 FUNC_0(VAR_0, VAR_7);
 FUNC_2(VAR_7);
 return (0);
}
