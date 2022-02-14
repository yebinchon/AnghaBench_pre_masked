
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_cache_rec {int buf; struct hda_cache_rec* hash; } ;


 int FUNC_0 (struct hda_cache_rec*,int,int) ;
 int FUNC_1 (int *,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_cache_rec *VAR_0,
         unsigned int VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(VAR_0->hash, 0xff, sizeof(VAR_0->hash));
 FUNC_1(&VAR_0->buf, VAR_1, 64);
}
