
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bhnd_nvram_type ;
struct TYPE_4__ {int val; } ;
typedef TYPE_1__ bhnd_nvram_prop ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ,size_t*,scalar_t__*) ;

const void *
FUNC_3(bhnd_nvram_prop *VAR_0, size_t *VAR_1,
    bhnd_nvram_type *VAR_2)
{
 const void *VAR_3;

 VAR_3 = FUNC_2(VAR_0->val, VAR_1, VAR_2);
 FUNC_0(*VAR_2 == FUNC_1(VAR_0), ("type mismatch"));

 return (VAR_3);
}
