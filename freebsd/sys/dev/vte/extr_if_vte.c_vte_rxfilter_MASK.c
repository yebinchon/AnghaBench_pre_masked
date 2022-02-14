
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_softc {struct ifnet* vte_ifp; } ;
struct vte_maddr_ctx {int* mchash; int** rxfilt_perf; scalar_t__ nperf; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct vte_softc*,scalar_t__) ;
 int FUNC_1 (struct vte_softc*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vte_softc*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct ifnet*,int ,struct vte_maddr_ctx*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_5(struct vte_softc *VAR_14)
{
 struct ifnet *VAR_15;
 struct vte_maddr_ctx VAR_16;
 uint16_t VAR_17;
 int VAR_18;

 FUNC_2(VAR_14);

 VAR_15 = VAR_14->vte_ifp;

 FUNC_3(VAR_16.mchash, sizeof(VAR_16.mchash));
 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_16.rxfilt_perf[VAR_18][0] = 0xFFFF;
  VAR_16.rxfilt_perf[VAR_18][1] = 0xFFFF;
  VAR_16.rxfilt_perf[VAR_18][2] = 0xFFFF;
 }
 VAR_16.nperf = 0;

 VAR_17 = FUNC_0(VAR_14, VAR_10);
 VAR_17 &= ~(VAR_5 | VAR_4);
 VAR_17 |= VAR_3;
 if ((VAR_15->if_flags & VAR_1) != 0)
  VAR_17 &= ~VAR_3;
 if ((VAR_15->if_flags & (VAR_2 | VAR_0)) != 0) {
  if ((VAR_15->if_flags & VAR_2) != 0)
   VAR_17 |= VAR_5;
  if ((VAR_15->if_flags & VAR_0) != 0)
   VAR_17 |= VAR_4;
  VAR_16.mchash[0] = 0xFFFF;
  VAR_16.mchash[1] = 0xFFFF;
  VAR_16.mchash[2] = 0xFFFF;
  VAR_16.mchash[3] = 0xFFFF;
  goto chipit;
 }

 FUNC_4(VAR_15, VAR_13, &VAR_16);
 if (VAR_16.mchash[0] != 0 || VAR_16.mchash[1] != 0 ||
     VAR_16.mchash[2] != 0 || VAR_16.mchash[3] != 0)
  VAR_17 |= VAR_4;

chipit:

 FUNC_1(VAR_14, VAR_6, VAR_16.mchash[0]);
 FUNC_1(VAR_14, VAR_7, VAR_16.mchash[1]);
 FUNC_1(VAR_14, VAR_8, VAR_16.mchash[2]);
 FUNC_1(VAR_14, VAR_9, VAR_16.mchash[3]);

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  FUNC_1(VAR_14, VAR_11 + 8 * VAR_18 + 0,
      VAR_16.rxfilt_perf[VAR_18][0]);
  FUNC_1(VAR_14, VAR_11 + 8 * VAR_18 + 2,
      VAR_16.rxfilt_perf[VAR_18][1]);
  FUNC_1(VAR_14, VAR_11 + 8 * VAR_18 + 4,
      VAR_16.rxfilt_perf[VAR_18][2]);
 }
 FUNC_1(VAR_14, VAR_10, VAR_17);
 FUNC_0(VAR_14, VAR_10);
}
