
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ error; } ;
struct aml8726_sdxc_softc {TYPE_1__ busy; int ch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aml8726_sdxc_softc*) ;
 int FUNC_1 (struct aml8726_sdxc_softc*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct aml8726_sdxc_softc*,scalar_t__) ;
 int FUNC_3 (int *,int ,void (*) (void*),struct aml8726_sdxc_softc*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 struct aml8726_sdxc_softc *VAR_7 = (struct aml8726_sdxc_softc *)VAR_6;
 uint32_t VAR_8;

 VAR_7->busy.time += VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_3);

 if ((VAR_8 & VAR_2) == 0) {
  if (VAR_7->busy.time < VAR_1) {
   FUNC_3(&VAR_7->ch,
       FUNC_4(VAR_0),
       FUNC_5, VAR_7);
   FUNC_0(VAR_7);
   return;
  }
  if (VAR_7->busy.error == VAR_4)
   VAR_7->busy.error = VAR_5;
 }

 FUNC_2(VAR_7, VAR_7->busy.error);
}
