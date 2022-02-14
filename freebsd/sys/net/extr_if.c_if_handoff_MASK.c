
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifqueue {int dummy; } ;
struct ifnet {int if_drv_flags; int (* if_start ) (struct ifnet*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifqueue*) ;
 int FUNC_1 (struct ifqueue*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ifqueue*,struct mbuf*) ;
 scalar_t__ FUNC_3 (struct ifqueue*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct ifnet*) ;

int
FUNC_7(struct ifqueue *VAR_6, struct mbuf *VAR_7, struct ifnet *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_0(VAR_6);
 if (FUNC_3(VAR_6)) {
  FUNC_1(VAR_6);
  FUNC_4(VAR_8, VAR_2, 1);
  FUNC_5(VAR_7);
  return (0);
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_4(VAR_8, VAR_0, VAR_7->m_pkthdr.len + VAR_9);
  if (VAR_7->m_flags & (VAR_4|VAR_5))
   FUNC_4(VAR_8, VAR_1, 1);
  VAR_10 = VAR_8->if_drv_flags & VAR_3;
 }
 FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_6);
 if (VAR_8 != ((void*)0) && !VAR_10)
  (*(VAR_8)->if_start)(VAR_8);
 return (1);
}
