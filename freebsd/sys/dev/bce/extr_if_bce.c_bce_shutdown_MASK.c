
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int bce_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bce_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct bce_softc*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bce_softc*,int ) ;
 int FUNC_5 (struct bce_softc*) ;
 struct bce_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 struct bce_softc *VAR_5 = FUNC_6(VAR_4);
 u32 VAR_6;

 FUNC_2(VAR_3);

 FUNC_0(VAR_5);
 FUNC_5(VAR_5);
 if (VAR_5->bce_flags & VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;
 FUNC_4(VAR_5, VAR_6);
 FUNC_1(VAR_5);

 FUNC_3(VAR_3);

 return (0);
}
