
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sis_softc {scalar_t__ sis_rev; struct ifnet* sis_ifp; } ;
struct sis_hash_maddr_ctx {int* hashes; struct sis_softc* sc; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ifnet*,int ,struct sis_hash_maddr_ctx*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_3(struct sis_softc *VAR_12)
{
 struct ifnet *VAR_13;
 struct sis_hash_maddr_ctx VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;

 VAR_13 = VAR_12->sis_ifp;


 if (VAR_12->sis_rev >= VAR_3 || VAR_12->sis_rev == VAR_4)
  VAR_17 = 16;
 else
  VAR_17 = 8;

 VAR_15 = FUNC_0(VAR_12, VAR_9);
 if (VAR_15 & VAR_8) {
  FUNC_1(VAR_12, VAR_9, VAR_15 & ~VAR_8);
  FUNC_0(VAR_12, VAR_9);
 }
 VAR_15 &= ~(VAR_6 | VAR_7 |
     VAR_5);
 if (VAR_13->if_flags & VAR_1)
  VAR_15 |= VAR_7;

 if (VAR_13->if_flags & (VAR_0 | VAR_2)) {
  VAR_15 |= VAR_5;
  if (VAR_13->if_flags & VAR_2)
   VAR_15 |= VAR_6;
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   VAR_14.hashes[VAR_16] = ~0;
 } else {
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   VAR_14.hashes[VAR_16] = 0;
  VAR_14.sc = VAR_12;
  if (FUNC_2(VAR_13, VAR_11, &VAR_14) > VAR_17) {
   VAR_15 |= VAR_5;
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
    VAR_14.hashes[VAR_16] = ~0;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  FUNC_1(VAR_12, VAR_9, (4 + VAR_16) << 16);
  FUNC_1(VAR_12, VAR_10, VAR_14.hashes[VAR_16]);
 }


 FUNC_1(VAR_12, VAR_9, VAR_15 | VAR_8);
 FUNC_0(VAR_12, VAR_9);
}
