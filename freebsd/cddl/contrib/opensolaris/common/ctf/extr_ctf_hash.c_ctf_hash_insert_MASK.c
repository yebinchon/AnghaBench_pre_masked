
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef size_t ulong_t ;
typedef int uint_t ;
struct TYPE_7__ {char* cts_strs; scalar_t__ cts_len; } ;
typedef TYPE_1__ ctf_strs_t ;
struct TYPE_8__ {int h_next; scalar_t__ h_type; int h_name; } ;
typedef TYPE_2__ ctf_helem_t ;
struct TYPE_9__ {size_t h_free; size_t h_nelems; size_t h_nbuckets; int * h_buckets; TYPE_2__* h_chains; } ;
typedef TYPE_3__ ctf_hash_t ;
struct TYPE_10__ {TYPE_1__* ctf_str; } ;
typedef TYPE_4__ ctf_file_t ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(ctf_hash_t *VAR_4, ctf_file_t *VAR_5, ushort_t VAR_6, uint_t VAR_7)
{
 ctf_strs_t *VAR_8 = &VAR_5->ctf_str[FUNC_1(VAR_7)];
 const char *VAR_9 = VAR_8->cts_strs + FUNC_0(VAR_7);
 ctf_helem_t *VAR_10 = &VAR_4->h_chains[VAR_4->h_free];
 ulong_t VAR_11;

 if (VAR_6 == 0)
  return (VAR_2);

 if (VAR_4->h_free >= VAR_4->h_nelems)
  return (VAR_3);

 if (VAR_8->cts_strs == ((void*)0))
  return (VAR_1);

 if (VAR_8->cts_len <= FUNC_0(VAR_7))
  return (VAR_0);

 if (VAR_9[0] == '\0')
  return (0);

 VAR_10->h_name = VAR_7;
 VAR_10->h_type = VAR_6;
 VAR_11 = FUNC_2(VAR_9, FUNC_3(VAR_9)) % VAR_4->h_nbuckets;
 VAR_10->h_next = VAR_4->h_buckets[VAR_11];
 VAR_4->h_buckets[VAR_11] = VAR_4->h_free++;

 return (0);
}
