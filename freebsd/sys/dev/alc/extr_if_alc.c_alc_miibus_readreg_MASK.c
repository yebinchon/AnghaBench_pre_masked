
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alc_softc {int alc_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*,int,int) ;
 int FUNC_1 (struct alc_softc*,int,int) ;
 struct alc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, int VAR_2, int VAR_3)
{
 struct alc_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 if ((VAR_4->alc_flags & VAR_0) != 0)
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 return (VAR_5);
}
