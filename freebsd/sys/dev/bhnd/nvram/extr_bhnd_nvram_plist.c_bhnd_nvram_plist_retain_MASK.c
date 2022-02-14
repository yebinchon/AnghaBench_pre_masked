
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ bhnd_nvram_plist ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*) ;

bhnd_nvram_plist *
FUNC_2(bhnd_nvram_plist *VAR_0)
{
 FUNC_0(VAR_0->refs >= 1, ("plist over-released"));

 FUNC_1(&VAR_0->refs);
 return (VAR_0);
}
