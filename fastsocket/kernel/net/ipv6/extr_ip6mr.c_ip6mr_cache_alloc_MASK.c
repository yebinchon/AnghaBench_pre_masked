
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_3__ {int minvif; } ;
struct TYPE_4__ {TYPE_1__ res; } ;
struct mfc6_cache {TYPE_2__ mfc_un; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mfc6_cache* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mfc6_cache*,struct net*) ;
 int VAR_2 ;

__attribute__((used)) static struct mfc6_cache *FUNC_2(struct net *VAR_3)
{
 struct mfc6_cache *VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_4->mfc_un.res.minvif = VAR_1;
 FUNC_1(VAR_4, VAR_3);
 return VAR_4;
}
