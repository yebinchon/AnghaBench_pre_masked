
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; int unresolved; } ;
struct TYPE_4__ {TYPE_1__ unres; } ;
struct mfc6_cache {TYPE_2__ mfc_un; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mfc6_cache* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mfc6_cache*,struct net*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mfc6_cache *FUNC_3(struct net *VAR_4)
{
 struct mfc6_cache *VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_2(&VAR_5->mfc_un.unres.unresolved);
 VAR_5->mfc_un.unres.expires = VAR_2 + 10 * VAR_1;
 FUNC_1(VAR_5, VAR_4);
 return VAR_5;
}
