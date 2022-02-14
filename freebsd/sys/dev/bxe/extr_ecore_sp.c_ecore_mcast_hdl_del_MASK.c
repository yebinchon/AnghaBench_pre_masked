
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {int mcast_list_len; } ;
struct ecore_mcast_obj {int (* set_one_rule ) (struct bxe_softc*,struct ecore_mcast_obj*,int,int *,int ) ;} ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_mcast_obj*,int,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bxe_softc *VAR_1,
 struct ecore_mcast_obj *VAR_2, struct ecore_mcast_ramrod_params *VAR_3,
 int *VAR_4)
{
 int VAR_5 = *VAR_4, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->mcast_list_len; VAR_6++) {
  VAR_2->set_one_rule(VAR_1, VAR_2, VAR_5, ((void*)0), VAR_0);

  VAR_5++;

  FUNC_0(VAR_1, "Deleting MAC. %d left\n",
     VAR_3->mcast_list_len - VAR_6 - 1);
 }

 *VAR_4 = VAR_5;
}
