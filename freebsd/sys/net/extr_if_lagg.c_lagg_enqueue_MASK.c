
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int csum_flags; struct m_snd_tag* snd_tag; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct m_snd_tag {int dummy; } ;
struct lagg_snd_tag {TYPE_2__* tag; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_4__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 struct m_snd_tag* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct m_snd_tag*) ;
 struct lagg_snd_tag* FUNC_3 (struct m_snd_tag*) ;
 int FUNC_4 (struct ifnet*,struct mbuf*) ;

int
FUNC_5(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 return (VAR_2->if_transmit)(VAR_2, VAR_3);
}
