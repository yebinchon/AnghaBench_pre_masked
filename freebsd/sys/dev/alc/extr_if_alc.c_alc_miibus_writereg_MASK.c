
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alc_softc {int alc_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*,int,int,int) ;
 int FUNC_1 (struct alc_softc*,int,int,int) ;
 struct alc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct alc_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 if ((VAR_5->alc_flags & VAR_0) != 0)
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
 return (VAR_6);
}
