
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct clock_softc {TYPE_1__ et; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4)
{
 struct clock_softc *VAR_5 = (struct clock_softc *)VAR_4;
 uint32_t VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_0(VAR_6);



 VAR_7 = FUNC_2();
 VAR_8 = FUNC_0(VAR_1);
 if (VAR_6 > 0) {
  VAR_9 = VAR_7 + VAR_6;
  FUNC_1(VAR_1, VAR_9);
  FUNC_3(VAR_9);
 } else
  FUNC_3(0xffffffff);


 if (VAR_7 < FUNC_0(VAR_2)) {
  FUNC_1(VAR_3, FUNC_0(VAR_3) + 1);
 }
 FUNC_1(VAR_2, VAR_7);

 if (VAR_6 > 0) {





  VAR_10 = FUNC_0(VAR_10);
  VAR_10 += VAR_7 - VAR_8;
  if (VAR_10 > 2 * VAR_6)
   VAR_10 = VAR_6;

  while (VAR_10 >= VAR_6) {
   if (VAR_5->et.et_active)
    VAR_5->et.et_event_cb(&VAR_5->et, VAR_5->et.et_arg);
   VAR_10 -= VAR_6;
  }
  FUNC_1(VAR_10, VAR_10);
 }
 if (VAR_5->et.et_active)
  VAR_5->et.et_event_cb(&VAR_5->et, VAR_5->et.et_arg);
 return (VAR_0);
}
