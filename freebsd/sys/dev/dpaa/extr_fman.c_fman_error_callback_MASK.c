
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef struct fman_softc* t_Handle ;
struct TYPE_2__ {int dev; } ;
struct fman_softc {TYPE_1__ sc_base; } ;
typedef int e_FmPortType ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(t_Handle VAR_0, e_FmPortType VAR_1,
    uint8_t VAR_2, uint64_t VAR_3, uint8_t VAR_4, uint16_t VAR_5)
{
 struct fman_softc *VAR_6;

 VAR_6 = VAR_0;
 FUNC_0(VAR_6->sc_base.dev, "FMan error occurred.\n");
}
