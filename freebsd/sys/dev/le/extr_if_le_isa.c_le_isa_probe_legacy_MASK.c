
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lance_softc {int dummy; } ;
struct TYPE_2__ {struct lance_softc lsc; } ;
struct le_isa_softc {int * sc_rres; int sc_rdp; int sc_rap; TYPE_1__ sc_am7990; } ;
struct le_isa_param {int rdp; int rap; int iosize; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 struct le_isa_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct lance_softc*,int ) ;
 int FUNC_5 (struct lance_softc*,int ,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, const struct le_isa_param *VAR_7)
{
 struct le_isa_softc *VAR_8;
 struct lance_softc *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_6);
 VAR_9 = &VAR_8->sc_am7990.lsc;

 VAR_11 = 0;
 VAR_8->sc_rres = FUNC_1(VAR_6, VAR_5, &VAR_11,
     VAR_7->iosize, VAR_4);
 if (VAR_8->sc_rres == ((void*)0))
  return (VAR_0);
 VAR_8->sc_rap = VAR_7->rap;
 VAR_8->sc_rdp = VAR_7->rdp;


 FUNC_5(VAR_9, VAR_2, VAR_1);
 FUNC_0(100);
 if (FUNC_4(VAR_9, VAR_2) != VAR_1) {
  VAR_10 = VAR_0;
  goto fail;
 }
 FUNC_5(VAR_9, VAR_3, 0);
 VAR_10 = 0;

 fail:
 FUNC_2(VAR_6, VAR_5,
     FUNC_6(VAR_8->sc_rres), VAR_8->sc_rres);
 return (VAR_10);
}
