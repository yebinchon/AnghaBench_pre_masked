
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mfc6_cache** mfc6_cache_array; } ;
struct net {TYPE_1__ ipv6; } ;
struct mfc6_cache {int mf6c_mcastgrp; int mf6c_origin; struct mfc6_cache* next; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_1 (int *,struct in6_addr*) ;

__attribute__((used)) static struct mfc6_cache *FUNC_2(struct net *VAR_0,
        struct in6_addr *VAR_1,
        struct in6_addr *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, VAR_1);
 struct mfc6_cache *VAR_4;

 for (VAR_4 = VAR_0->ipv6.mfc6_cache_array[VAR_3]; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_1(&VAR_4->mf6c_origin, VAR_1) &&
      FUNC_1(&VAR_4->mf6c_mcastgrp, VAR_2))
   break;
 }
 return VAR_4;
}
