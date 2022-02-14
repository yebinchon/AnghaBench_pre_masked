
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fb_size; int fb_vbase; } ;
struct aml8726_fb_softc {TYPE_1__ info; int * res; int ih_cookie; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_fb_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 struct aml8726_fb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct aml8726_fb_softc *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_1);

 FUNC_3(VAR_1, VAR_2->res[3], VAR_2->ih_cookie);

 FUNC_0(VAR_2);

 FUNC_2(VAR_1, VAR_0, VAR_2->res);

 FUNC_5(VAR_2->info.fb_vbase, VAR_2->info.fb_size);

 return (0);
}
