
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; struct TYPE_4__* name; int val; } ;
typedef TYPE_1__ bhnd_nvram_prop ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;

void
FUNC_4(bhnd_nvram_prop *VAR_0)
{
 FUNC_0(VAR_0->refs >= 1, ("prop over-released"));


 if (!FUNC_3(&VAR_0->refs))
  return;


 FUNC_2(VAR_0->val);
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
