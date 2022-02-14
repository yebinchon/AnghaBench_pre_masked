
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct khash {int k_keep; int k_state; void* k_mask; void* k_dst; } ;
typedef void* naddr ;
struct TYPE_2__ {int tv_sec; } ;


 int VAR_0 ;
 struct khash* FUNC_0 (void*,void*,struct khash***) ;
 int FUNC_1 (struct khash*,int ,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (int,char*) ;

__attribute__((used)) static struct khash*
FUNC_3(naddr VAR_2, naddr VAR_3)
{
 struct khash *VAR_4, **VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3, &VAR_5);
 if (VAR_4 != ((void*)0))
  return VAR_4;

 VAR_4 = (struct khash *)FUNC_2(sizeof(*VAR_4), "kern_add");

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->k_dst = VAR_2;
 VAR_4->k_mask = VAR_3;
 VAR_4->k_state = VAR_0;
 VAR_4->k_keep = VAR_1.tv_sec;
 *VAR_5 = VAR_4;

 return VAR_4;
}
