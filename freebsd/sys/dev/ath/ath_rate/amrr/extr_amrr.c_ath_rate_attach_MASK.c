
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int dummy; } ;
struct ath_ratectrl {int arc_space; } ;
struct amrr_softc {struct ath_ratectrl arc; } ;
struct amrr_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*) ;
 struct amrr_softc* FUNC_1 (int,int ,int) ;

struct ath_ratectrl *
FUNC_2(struct ath_softc *VAR_3)
{
 struct amrr_softc *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct amrr_softc), VAR_0, VAR_1|VAR_2);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->arc.arc_space = sizeof(struct amrr_node);
 FUNC_0(VAR_3);

 return &VAR_4->arc;
}
