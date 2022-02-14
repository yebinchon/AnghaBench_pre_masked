
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mfc6_cache** mfc6_cache_array; } ;
struct net {TYPE_1__ ipv6; } ;
struct mfc6_cache {struct mfc6_cache* next; int mf6c_mcastgrp; int mf6c_origin; } ;
struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct mf6cctl {TYPE_3__ mf6cc_mcastgrp; TYPE_2__ mf6cc_origin; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mfc6_cache*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_2, struct mf6cctl *VAR_3)
{
 int VAR_4;
 struct mfc6_cache *VAR_5, **VAR_6;

 VAR_4 = FUNC_0(&VAR_3->mf6cc_mcastgrp.sin6_addr, &VAR_3->mf6cc_origin.sin6_addr);

 for (VAR_6 = &VAR_2->ipv6.mfc6_cache_array[VAR_4];
      (VAR_5 = *VAR_6) != ((void*)0); VAR_6 = &VAR_5->next) {
  if (FUNC_2(&VAR_5->mf6c_origin, &VAR_3->mf6cc_origin.sin6_addr) &&
      FUNC_2(&VAR_5->mf6c_mcastgrp, &VAR_3->mf6cc_mcastgrp.sin6_addr)) {
   FUNC_3(&VAR_1);
   *VAR_6 = VAR_5->next;
   FUNC_4(&VAR_1);

   FUNC_1(VAR_5);
   return 0;
  }
 }
 return -VAR_0;
}
