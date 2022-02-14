
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {size_t r_hdrlen; int r_flags; int la_flags; int * r_linkdata; int * ll_addr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,size_t) ;

void
FUNC_1(struct ifnet *VAR_2, struct llentry *VAR_3,
    const char *VAR_4, size_t VAR_5, int VAR_6)
{

 FUNC_0(VAR_3->r_linkdata, VAR_4, VAR_5);
 VAR_3->r_hdrlen = VAR_5;
 VAR_3->ll_addr = &VAR_3->r_linkdata[VAR_6];
 VAR_3->la_flags |= VAR_0;
 VAR_3->r_flags |= VAR_1;
}
