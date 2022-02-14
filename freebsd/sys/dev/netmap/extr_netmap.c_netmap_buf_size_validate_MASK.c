
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_adapter {unsigned int rx_buf_maxsize; int na_flags; TYPE_1__* ifp; } ;
struct TYPE_2__ {unsigned int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct netmap_adapter const*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int) ;

int
FUNC_3(const struct netmap_adapter *VAR_2, unsigned VAR_3) {
 unsigned VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 <= VAR_2->rx_buf_maxsize) {




  if (VAR_4 < VAR_3) {
   FUNC_1("error: netmap buf size (%u) "
     "< device MTU (%u)", VAR_4, VAR_3);
   return VAR_0;
  }
 } else {





  if (!(VAR_2->na_flags & VAR_1)) {
   FUNC_1("error: large MTU (%d) needed "
     "but %s does not support "
     "NS_MOREFRAG", VAR_3,
     VAR_2->ifp->if_xname);
   return VAR_0;
  } else if (VAR_4 < VAR_2->rx_buf_maxsize) {
   FUNC_1("error: using NS_MOREFRAG on "
     "%s requires netmap buf size "
     ">= %u", VAR_2->ifp->if_xname,
     VAR_2->rx_buf_maxsize);
   return VAR_0;
  } else {
   FUNC_2("info: netmap application on "
     "%s needs to support "
     "NS_MOREFRAG "
     "(MTU=%u,netmap_buf_size=%u)",
     VAR_2->ifp->if_xname, VAR_3, VAR_4);
  }
 }
 return 0;
}
