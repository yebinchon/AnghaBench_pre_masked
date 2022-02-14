
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ichss_softc {TYPE_1__* sets; } ;
struct cf_setting {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct cf_setting*,int) ;
 struct ichss_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cf_setting*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, struct cf_setting *VAR_4, int *VAR_5)
{
 struct ichss_softc *VAR_6;
 struct cf_setting VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_2);
 if (*VAR_5 < 2) {
  *VAR_5 = 2;
  return (VAR_1);
 }
 VAR_6 = FUNC_1(VAR_3);





 FUNC_2(VAR_3, &VAR_7);
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  if (VAR_6->sets[VAR_9].freq == VAR_0) {
   VAR_8 = (VAR_9 == 0) ? 1 : 0;
   FUNC_3(VAR_3, &VAR_6->sets[VAR_9]);
   FUNC_3(VAR_3, &VAR_6->sets[VAR_8]);
  }
 }

 FUNC_0(VAR_6->sets, VAR_4, sizeof(VAR_6->sets));
 *VAR_5 = 2;

 return (0);
}
