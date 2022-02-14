
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int h_nbuckets; int h_nelems; int h_free; struct TYPE_6__* h_chains; struct TYPE_6__* h_buckets; } ;
typedef TYPE_1__ ushort_t ;
typedef scalar_t__ ulong_t ;
typedef int ctf_helem_t ;
typedef TYPE_1__ ctf_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(ctf_hash_t *VAR_4, ulong_t VAR_5)
{
 if (VAR_5 > VAR_2)
  return (VAR_1);





 if (VAR_5 == 0) {
  FUNC_0(VAR_4, sizeof (ctf_hash_t));
  VAR_4->h_buckets = (ushort_t *)VAR_3;
  VAR_4->h_nbuckets = 1;
  return (0);
 }

 VAR_4->h_nbuckets = 211;
 VAR_4->h_nelems = VAR_5 + 1;
 VAR_4->h_free = 1;

 VAR_4->h_buckets = FUNC_1(sizeof (ushort_t) * VAR_4->h_nbuckets);
 VAR_4->h_chains = FUNC_1(sizeof (ctf_helem_t) * VAR_4->h_nelems);

 if (VAR_4->h_buckets == ((void*)0) || VAR_4->h_chains == ((void*)0)) {
  FUNC_2(VAR_4);
  return (VAR_0);
 }

 FUNC_0(VAR_4->h_buckets, sizeof (ushort_t) * VAR_4->h_nbuckets);
 FUNC_0(VAR_4->h_chains, sizeof (ctf_helem_t) * VAR_4->h_nelems);

 return (0);
}
