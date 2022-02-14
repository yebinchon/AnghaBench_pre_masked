
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxvif; } ;
struct net {TYPE_1__ ipv6; } ;
struct TYPE_5__ {int minvif; int maxvif; unsigned char* ttls; } ;
struct TYPE_6__ {TYPE_2__ res; } ;
struct mfc6_cache {TYPE_3__ mfc_un; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 struct net* FUNC_2 (struct mfc6_cache*) ;

__attribute__((used)) static void FUNC_3(struct mfc6_cache *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 struct net *VAR_4 = FUNC_2(VAR_1);

 VAR_1->mfc_un.res.minvif = VAR_0;
 VAR_1->mfc_un.res.maxvif = 0;
 FUNC_1(VAR_1->mfc_un.res.ttls, 255, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_4->ipv6.maxvif; VAR_3++) {
  if (FUNC_0(VAR_4, VAR_3) &&
      VAR_2[VAR_3] && VAR_2[VAR_3] < 255) {
   VAR_1->mfc_un.res.ttls[VAR_3] = VAR_2[VAR_3];
   if (VAR_1->mfc_un.res.minvif > VAR_3)
    VAR_1->mfc_un.res.minvif = VAR_3;
   if (VAR_1->mfc_un.res.maxvif <= VAR_3)
    VAR_1->mfc_un.res.maxvif = VAR_3 + 1;
  }
 }
}
