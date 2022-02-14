
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ushort_t ;
typedef size_t ulong_t ;
typedef int uint_t ;
typedef int dtrace_attribute_t ;
typedef int dt_idops_t ;
struct TYPE_9__ {size_t dh_hashsz; int (* dh_defer ) (TYPE_1__*,TYPE_2__*) ;int dh_nelems; TYPE_2__** dh_hash; int * dh_tmpl; } ;
typedef TYPE_1__ dt_idhash_t ;
struct TYPE_10__ {struct TYPE_10__* di_next; } ;
typedef TYPE_2__ dt_ident_t ;


 TYPE_2__* FUNC_0 (char const*,int ,int ,int ,int ,int ,int const*,void*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (char const*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

dt_ident_t *
FUNC_4(dt_idhash_t *VAR_0, const char *VAR_1, ushort_t VAR_2,
    ushort_t VAR_3, uint_t VAR_4, dtrace_attribute_t VAR_5, uint_t VAR_6,
    const dt_idops_t *VAR_7, void *VAR_8, ulong_t VAR_9)
{
 dt_ident_t *VAR_10;
 ulong_t VAR_11;

 if (VAR_0->dh_tmpl != ((void*)0))
  FUNC_1(VAR_0);

 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_11 = FUNC_2(VAR_1, ((void*)0)) % VAR_0->dh_hashsz;
 VAR_10->di_next = VAR_0->dh_hash[VAR_11];

 VAR_0->dh_hash[VAR_11] = VAR_10;
 VAR_0->dh_nelems++;

 if (VAR_0->dh_defer != ((void*)0))
  VAR_0->dh_defer(VAR_0, VAR_10);

 return (VAR_10);
}
