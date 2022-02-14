
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mge_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mge_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct mge_softc*,int ,int) ;
 struct mge_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static uint32_t
FUNC_8(device_t VAR_9, int VAR_10, int VAR_11)
{
 uint32_t VAR_12;
 uint32_t VAR_13;
 struct mge_softc *VAR_14;

 VAR_14 = FUNC_6(VAR_9);
 FUNC_0(VAR_14 != ((void*)0), ("NULL softc ptr!"));
 VAR_12 = VAR_8;

 FUNC_3();
 while (--VAR_12 &&
     (FUNC_2(VAR_14, VAR_0) & VAR_1))
  FUNC_1(VAR_7);

 if (VAR_12 == 0) {
  FUNC_7(VAR_9, "SMI write timeout.\n");
  VAR_13 = ~0U;
  goto out;
 }

 FUNC_5(VAR_14, VAR_0, VAR_4 &
     (VAR_5 | (VAR_11 << 21) | (VAR_10 << 16)));


 VAR_12 = VAR_8;
 while (--VAR_12 &&
     !((FUNC_2(VAR_14, VAR_0) & VAR_6)))
  FUNC_1(VAR_7);

 if (VAR_12 == 0) {
  FUNC_7(VAR_9, "SMI write validation timeout.\n");
  VAR_13 = ~0U;
  goto out;
 }


 FUNC_1(VAR_3);
 VAR_13 = FUNC_2(VAR_14, VAR_0) & VAR_2;

out:
 FUNC_4();
 return (VAR_13);

}
