
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcib_softc {int flags; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct pcib_softc* FUNC_3 (int ) ;

__attribute__((used)) static __inline void
FUNC_4(device_t VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 struct pcib_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = *VAR_4;

 if (VAR_5->flags & VAR_0) {
  FUNC_0(*VAR_3 == 0,
      ("Non-zero slot number with ARI enabled!"));
  *VAR_3 = FUNC_2(VAR_6);
  *VAR_4 = FUNC_1(VAR_6);
 }
}
