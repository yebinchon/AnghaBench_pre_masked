
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {scalar_t__ hn_vf_rdytick; int * hn_vf_ifp; } ;


 int FUNC_0 (struct hn_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct hn_softc*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_2(struct hn_softc *VAR_2)
{

 FUNC_0(VAR_2);

 if (!VAR_0 || VAR_2->hn_vf_ifp == ((void*)0))
  return (0);

 if (VAR_2->hn_vf_rdytick == 0)
  return (1);

 if (VAR_2->hn_vf_rdytick > VAR_1)
  return (0);


 FUNC_1(VAR_2);
 return (1);
}
