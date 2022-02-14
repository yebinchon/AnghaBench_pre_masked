
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ses_iterator {int * cache; int * enc; } ;
typedef int enc_softc_t ;
typedef int enc_cache_t ;


 int FUNC_0 (struct ses_iterator*) ;

__attribute__((used)) static void
FUNC_1(enc_softc_t *VAR_0, enc_cache_t *VAR_1, struct ses_iterator *VAR_2)
{
 VAR_2->enc = VAR_0;
 VAR_2->cache = VAR_1;
 FUNC_0(VAR_2);
}
