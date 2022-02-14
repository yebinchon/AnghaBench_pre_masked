
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udbp_softc {char* sc_name; int sc_mtx; int * sc_node; } ;
typedef int * node_p ;


 struct udbp_softc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct udbp_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int VAR_0 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_1)
{
 struct udbp_softc *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0)) {
  goto done;
 }

 if (FUNC_4(&VAR_0, &VAR_2->sc_node) != 0) {
  FUNC_6("%s: Could not create Netgraph node\n",
      VAR_2->sc_name);
  VAR_2->sc_node = ((void*)0);
  goto done;
 }

 if (FUNC_5(VAR_2->sc_node, VAR_2->sc_name) != 0) {
  FUNC_6("%s: Could not name Netgraph node\n",
      VAR_2->sc_name);
  FUNC_2(VAR_2->sc_node);
  VAR_2->sc_node = ((void*)0);
  goto done;
 }
 FUNC_1(VAR_2->sc_node, VAR_2);

done:
 if (VAR_2) {
  FUNC_3(&VAR_2->sc_mtx);
 }
 return (0);
}
