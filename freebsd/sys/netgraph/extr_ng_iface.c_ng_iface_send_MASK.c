
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_xname; int if_softc; } ;
typedef int sa_family_t ;
typedef int priv_p ;
typedef int * iffam_p ;
typedef int * hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *,struct mbuf*) ;
 int FUNC_6 (int const,struct rm_priotracker*) ;
 int FUNC_7 (int const,struct rm_priotracker*) ;
 int ** FUNC_8 (int const,int * const) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_13(struct ifnet *VAR_5, struct mbuf *VAR_6, sa_family_t VAR_7)
{
 struct rm_priotracker VAR_8;
 const priv_p VAR_9 = (priv_p) VAR_5->if_softc;
 const iffam_p VAR_10 = FUNC_9(VAR_7);
 hook_p VAR_11;
 int VAR_12;
 int VAR_13;


 if (VAR_10 == ((void*)0)) {
  FUNC_12(VAR_6);
  FUNC_11(VAR_4, "%s: can't handle af%d\n", VAR_5->if_xname, VAR_7);
  return (VAR_0);
 }


 VAR_13 = VAR_6->m_pkthdr.len;

 FUNC_6(VAR_9, &VAR_8);
 VAR_11 = *FUNC_8(VAR_9, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_6);
  FUNC_7(VAR_9, &VAR_8);
  return VAR_1;
 }
 FUNC_1(VAR_11);
 FUNC_7(VAR_9, &VAR_8);

 FUNC_3();
 FUNC_5(VAR_12, VAR_11, VAR_6);
 FUNC_4();
 FUNC_2(VAR_11);


 if (VAR_12 == 0) {
  FUNC_10(VAR_5, VAR_2, VAR_13);
  FUNC_10(VAR_5, VAR_3, 1);
 }

 return (VAR_12);
}
