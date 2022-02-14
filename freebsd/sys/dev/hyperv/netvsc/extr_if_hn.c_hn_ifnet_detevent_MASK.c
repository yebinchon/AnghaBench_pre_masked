
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {size_t if_index; int if_xname; int * if_input; } ;
struct hn_softc {int hn_flags; int hn_xvf_flags; scalar_t__ hn_vf_rdytick; TYPE_1__* hn_ifp; int hn_saved_tsosegsz; int hn_saved_tsosegcnt; int hn_saved_tsomax; int hn_saved_caps; int * hn_vf_input; int hn_vf_init; int hn_vf_taskq; int * hn_vf_ifp; } ;
struct TYPE_2__ {int if_xname; int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; int if_hw_tsomax; int if_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct hn_softc*) ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct hn_softc*,struct ifnet*) ;
 int FUNC_4 (struct hn_softc*,int ) ;
 int FUNC_5 (struct hn_softc*) ;
 int FUNC_6 (struct hn_softc*) ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct hn_softc*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(void *VAR_7, struct ifnet *VAR_8)
{
 struct hn_softc *VAR_9 = VAR_7;

 FUNC_0(VAR_9);

 if (VAR_9->hn_vf_ifp == ((void*)0))
  goto done;

 if (!FUNC_3(VAR_9, VAR_8))
  goto done;

 if (VAR_6) {
  FUNC_1(VAR_9);
  FUNC_10(VAR_9->hn_vf_taskq, &VAR_9->hn_vf_init);
  FUNC_0(VAR_9);

  FUNC_2(VAR_9->hn_vf_input != ((void*)0), ("%s VF input is not saved",
      VAR_9->hn_ifp->if_xname));
  VAR_8->if_input = VAR_9->hn_vf_input;
  VAR_9->hn_vf_input = ((void*)0);

  if ((VAR_9->hn_flags & VAR_0) &&
      (VAR_9->hn_xvf_flags & VAR_2))
   FUNC_4(VAR_9, VAR_1);

  if (VAR_9->hn_vf_rdytick == 0) {



   VAR_9->hn_ifp->if_capabilities = VAR_9->hn_saved_caps;
   VAR_9->hn_ifp->if_hw_tsomax = VAR_9->hn_saved_tsomax;
   VAR_9->hn_ifp->if_hw_tsomaxsegcount =
       VAR_9->hn_saved_tsosegcnt;
   VAR_9->hn_ifp->if_hw_tsomaxsegsize = VAR_9->hn_saved_tsosegsz;
  }

  if (VAR_9->hn_flags & VAR_0) {



   FUNC_6(VAR_9);





   FUNC_5(VAR_9);
  }
 }


 FUNC_7(VAR_9, 1 );

 FUNC_8(&VAR_4);

 FUNC_2(VAR_8->if_index < VAR_5,
     ("ifindex %d, vfmapsize %d", VAR_8->if_index, VAR_5));
 if (VAR_3[VAR_8->if_index] != ((void*)0)) {
  FUNC_2(VAR_3[VAR_8->if_index] == VAR_9->hn_ifp,
      ("%s: ifindex %d was mapped to %s",
       VAR_8->if_xname, VAR_8->if_index,
       VAR_3[VAR_8->if_index]->if_xname));
  VAR_3[VAR_8->if_index] = ((void*)0);
 }

 FUNC_9(&VAR_4);
done:
 FUNC_1(VAR_9);
}
