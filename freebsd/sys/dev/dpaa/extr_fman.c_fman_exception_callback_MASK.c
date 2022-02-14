
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct fman_softc* t_Handle ;
struct TYPE_2__ {int dev; } ;
struct fman_softc {TYPE_1__ sc_base; } ;
typedef int e_FmExceptions ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(t_Handle VAR_0, e_FmExceptions VAR_1)
{
 struct fman_softc *VAR_2;

 VAR_2 = VAR_0;
 FUNC_0(VAR_2->sc_base.dev, "FMan exception occurred.\n");
}
