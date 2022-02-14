
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvp_nbuckets; int nvp_nentries; int ** nvp_hashtable; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int i_nvp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int **,int) ;

__attribute__((used)) static void
FUNC_2(nvpriv_t *VAR_0)
{
 i_nvp_t **VAR_1 = VAR_0->nvp_hashtable;
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0->nvp_nbuckets);
  FUNC_0(VAR_0->nvp_nentries);
  return;
 }

 FUNC_1(VAR_0, VAR_1, VAR_0->nvp_nbuckets * sizeof (i_nvp_t *));

 VAR_0->nvp_hashtable = ((void*)0);
 VAR_0->nvp_nbuckets = 0;
 VAR_0->nvp_nentries = 0;
}
