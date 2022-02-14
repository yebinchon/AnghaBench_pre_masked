
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_sq {int lock; } ;
struct TYPE_4__ {int csum_flags; TYPE_1__* snd_tag; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mbuf*) ;
 struct mlx5e_sq* FUNC_2 (struct ifnet*,struct mbuf*) ;
 struct mlx5e_sq* FUNC_3 (struct ifnet*,struct mbuf*) ;
 int FUNC_4 (struct ifnet*,struct mlx5e_sq*,struct mbuf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct mlx5e_sq *VAR_4;
 int VAR_5;

 if (VAR_3->m_pkthdr.csum_flags & VAR_0) {
  FUNC_0(VAR_3->m_pkthdr.snd_tag->ifp == VAR_2);
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (FUNC_7(VAR_4 == ((void*)0))) {
   goto select_queue;
  }
 } else {
select_queue:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (FUNC_7(VAR_4 == ((void*)0))) {

   FUNC_1(VAR_3);


   return (VAR_1);
  }
 }

 FUNC_5(&VAR_4->lock);
 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_3);
 FUNC_6(&VAR_4->lock);

 return (VAR_5);
}
