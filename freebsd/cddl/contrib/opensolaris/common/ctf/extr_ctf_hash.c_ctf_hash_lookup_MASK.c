
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ushort_t ;
typedef size_t ulong_t ;
struct TYPE_8__ {char* cts_strs; } ;
typedef TYPE_1__ ctf_strs_t ;
struct TYPE_9__ {size_t h_next; int h_name; } ;
typedef TYPE_2__ ctf_helem_t ;
struct TYPE_10__ {size_t h_nbuckets; size_t* h_buckets; TYPE_2__* h_chains; } ;
typedef TYPE_3__ ctf_hash_t ;
struct TYPE_11__ {TYPE_1__* ctf_str; } ;
typedef TYPE_4__ ctf_file_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (char const*,size_t) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

ctf_helem_t *
FUNC_4(ctf_hash_t *VAR_0, ctf_file_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 ctf_helem_t *VAR_4;
 ctf_strs_t *VAR_5;
 const char *VAR_6;
 ushort_t VAR_7;

 ulong_t VAR_8 = FUNC_2(VAR_2, VAR_3) % VAR_0->h_nbuckets;

 for (VAR_7 = VAR_0->h_buckets[VAR_8]; VAR_7 != 0; VAR_7 = VAR_4->h_next) {
  VAR_4 = &VAR_0->h_chains[VAR_7];
  VAR_5 = &VAR_1->ctf_str[FUNC_1(VAR_4->h_name)];
  VAR_6 = VAR_5->cts_strs + FUNC_0(VAR_4->h_name);

  if (FUNC_3(VAR_2, VAR_6, VAR_3) == 0 && VAR_6[VAR_3] == '\0')
   return (VAR_4);
 }

 return (((void*)0));
}
