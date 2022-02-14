
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort_t ;
typedef int ctf_helem_t ;
struct TYPE_3__ {int h_nbuckets; int h_nelems; int * h_chains; int * h_buckets; } ;
typedef TYPE_1__ ctf_hash_t ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(ctf_hash_t *VAR_0)
{
 if (VAR_0->h_buckets != ((void*)0) && VAR_0->h_nbuckets != 1) {
  FUNC_0(VAR_0->h_buckets, sizeof (ushort_t) * VAR_0->h_nbuckets);
  VAR_0->h_buckets = ((void*)0);
 }

 if (VAR_0->h_chains != ((void*)0)) {
  FUNC_0(VAR_0->h_chains, sizeof (ctf_helem_t) * VAR_0->h_nelems);
  VAR_0->h_chains = ((void*)0);
 }
}
