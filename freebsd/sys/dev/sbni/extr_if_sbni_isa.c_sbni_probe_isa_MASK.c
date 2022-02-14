
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {int io_res; int io_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 struct sbni_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct sbni_softc*) ;
 int FUNC_7 (struct sbni_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct sbni_softc *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(FUNC_2(VAR_6), VAR_6, VAR_5);
 if (VAR_8 && VAR_8 != VAR_0)
  return (VAR_8);

 VAR_7 = FUNC_3(VAR_6);

  VAR_7->io_res = FUNC_1(VAR_6, VAR_4,
        &VAR_7->io_rid, VAR_3,
        VAR_2);
 if (!VAR_7->io_res) {
  FUNC_5("sbni: cannot allocate io ports!\n");
  return (VAR_0);
 }

 if (FUNC_6(VAR_7) != 0) {
  FUNC_7(VAR_7);
  return (VAR_1);
 }

 FUNC_4(VAR_6, "Granch SBNI12/ISA adapter");
 return (0);
}
