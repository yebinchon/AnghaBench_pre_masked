
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_timer_softc {int dummy; } ;
struct eventtimer {int et_frequency; scalar_t__ et_priv; } ;
typedef int sbintime_t ;


 int FUNC_0 (struct jz4780_timer_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct eventtimer *VAR_4, sbintime_t VAR_5, sbintime_t VAR_6)
{
 struct jz4780_timer_softc *VAR_7 =
     (struct jz4780_timer_softc *)VAR_4->et_priv;
 uint32_t VAR_8;

 VAR_8 = (VAR_5 * VAR_4->et_frequency) / VAR_2;
 if (VAR_8 == 0)
  return (VAR_0);

 FUNC_0(VAR_7, FUNC_2(5), VAR_8);
 FUNC_0(VAR_7, FUNC_1(5), 0);
 FUNC_0(VAR_7, VAR_1, VAR_3);

 return (0);
}
