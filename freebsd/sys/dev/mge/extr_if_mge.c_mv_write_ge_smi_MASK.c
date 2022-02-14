
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mge_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mge_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (struct mge_softc*,int ,int) ;
 struct mge_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7, int VAR_8, int VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11;
 struct mge_softc *VAR_12;

 VAR_12 = FUNC_6(VAR_7);
 FUNC_0(VAR_12 != ((void*)0), ("NULL softc ptr!"));

 FUNC_3();
 VAR_11 = VAR_5;
 while (--VAR_11 &&
     (FUNC_2(VAR_12, VAR_0) & VAR_1))
  FUNC_1(VAR_4);

 if (VAR_11 == 0) {
  FUNC_7(VAR_7, "SMI read timeout.\n");
  goto out;
 }

 FUNC_5(VAR_12, VAR_0, VAR_3 &
     (VAR_6 | (VAR_9 << 21) | (VAR_8 << 16) |
     (VAR_10 & VAR_2)));

out:
 FUNC_4();
}
