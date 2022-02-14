
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_index; int if_input; int if_xname; int * if_start; } ;
struct hn_softc {int hn_flags; int hn_xvf_flags; int hn_vf_init; int hn_vf_taskq; scalar_t__ hn_vf_rdytick; int hn_vf_input; int hn_vf_lock; struct ifnet* hn_vf_ifp; struct ifnet* hn_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ifnet**,int ) ;
 int FUNC_4 (struct hn_softc*,struct ifnet*) ;
 int FUNC_5 (struct hn_softc*) ;
 struct ifnet** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct ifnet*,char*,int ) ;
 struct ifnet** FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct ifnet**,struct ifnet**,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_12(void *VAR_14, struct ifnet *VAR_15)
{
 struct hn_softc *VAR_16 = VAR_14;

 FUNC_0(VAR_16);

 if (!(VAR_16->hn_flags & VAR_0))
  goto done;

 if (!FUNC_4(VAR_16, VAR_15))
  goto done;

 if (VAR_16->hn_vf_ifp != ((void*)0)) {
  FUNC_6(VAR_16->hn_ifp, "%s was attached as VF\n",
      VAR_16->hn_vf_ifp->if_xname);
  goto done;
 }

 if (VAR_9 && VAR_15->if_start != ((void*)0)) {




  FUNC_6(VAR_16->hn_ifp, "%s uses if_start, which is unsupported "
      "in transparent VF mode.\n", VAR_15->if_xname);
  goto done;
 }

 FUNC_9(&VAR_7);

 if (VAR_15->if_index >= VAR_8) {
  struct ifnet **VAR_17;
  int VAR_18;

  VAR_18 = VAR_15->if_index + VAR_1;
  VAR_17 = FUNC_7(sizeof(struct ifnet *) * VAR_18, VAR_3,
      VAR_4 | VAR_5);

  FUNC_8(VAR_17, VAR_6,
      sizeof(struct ifnet *) * VAR_8);
  FUNC_3(VAR_6, VAR_3);
  VAR_6 = VAR_17;
  VAR_8 = VAR_18;
 }
 FUNC_2(VAR_6[VAR_15->if_index] == ((void*)0),
     ("%s: ifindex %d was mapped to %s",
      VAR_15->if_xname, VAR_15->if_index, VAR_6[VAR_15->if_index]->if_xname));
 VAR_6[VAR_15->if_index] = VAR_16->hn_ifp;

 FUNC_10(&VAR_7);


 FUNC_9(&VAR_16->hn_vf_lock);
 FUNC_2((VAR_16->hn_xvf_flags & VAR_2) == 0,
     ("%s: transparent VF was enabled", VAR_16->hn_ifp->if_xname));
 VAR_16->hn_vf_ifp = VAR_15;
 FUNC_10(&VAR_16->hn_vf_lock);

 if (VAR_9) {
  int VAR_19;





  VAR_16->hn_vf_input = VAR_15->if_input;
  VAR_15->if_input = VAR_11;




  FUNC_5(VAR_16);




  VAR_19 = VAR_10 * VAR_12;
  VAR_16->hn_vf_rdytick = VAR_13 + VAR_19;

  FUNC_11(VAR_16->hn_vf_taskq, &VAR_16->hn_vf_init,
      VAR_19);
 }
done:
 FUNC_1(VAR_16);
}
