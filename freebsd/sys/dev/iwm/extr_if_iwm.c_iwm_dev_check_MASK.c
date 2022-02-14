
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct iwm_softc {int cfg; } ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ device; int cfg; } ;


 int VAR_0 ;
 struct iwm_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct iwm_softc *VAR_3;
 uint16_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 VAR_4 = FUNC_3(VAR_2);
 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].device == VAR_4) {
   VAR_3->cfg = VAR_1[VAR_5].cfg;
   return (0);
  }
 }
 FUNC_1(VAR_2, "unknown adapter type\n");
 return VAR_0;
}
