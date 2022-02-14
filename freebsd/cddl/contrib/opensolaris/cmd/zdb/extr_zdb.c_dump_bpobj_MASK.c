
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uncomp ;
typedef int uint64_t ;
typedef char* u_longlong_t ;
typedef int objset_t ;
typedef int comp ;
typedef int bytes ;
struct TYPE_2__ {int bpo_num_blkptrs; scalar_t__ bpo_num_subobjs; scalar_t__ bpo_subobjs; int bpo_uncomp; int bpo_comp; int bpo_bytes; } ;
typedef TYPE_1__ bpobj_phys_t ;
typedef int bp ;
typedef int blkptr_t ;
typedef int blkbuf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int,int,int *,int ) ;
 int* VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(objset_t *VAR_4, uint64_t VAR_5, void *VAR_6, size_t VAR_7)
{
 bpobj_phys_t *VAR_8 = VAR_6;
 char VAR_9[32], VAR_10[32], VAR_11[32];


 FUNC_0(sizeof (VAR_9) >= VAR_2);
 FUNC_0(sizeof (VAR_10) >= VAR_2);
 FUNC_0(sizeof (VAR_11) >= VAR_2);

 if (VAR_8 == ((void*)0))
  return;

 FUNC_4(VAR_8->bpo_bytes, VAR_9, sizeof (VAR_9));
 FUNC_4(VAR_8->bpo_comp, VAR_10, sizeof (VAR_10));
 FUNC_4(VAR_8->bpo_uncomp, VAR_11, sizeof (VAR_11));

 (void) FUNC_2("\t\tnum_blkptrs = %llu\n",
     (u_longlong_t)VAR_8->bpo_num_blkptrs);
 (void) FUNC_2("\t\tbytes = %s\n", VAR_9);
 if (VAR_7 >= VAR_0) {
  (void) FUNC_2("\t\tcomp = %s\n", VAR_10);
  (void) FUNC_2("\t\tuncomp = %s\n", VAR_11);
 }
 if (VAR_7 >= sizeof (*VAR_8)) {
  (void) FUNC_2("\t\tsubobjs = %llu\n",
      (u_longlong_t)VAR_8->bpo_subobjs);
  (void) FUNC_2("\t\tnum_subobjs = %llu\n",
      (u_longlong_t)VAR_8->bpo_num_subobjs);
 }

 if (VAR_3['d'] < 5)
  return;

 for (uint64_t VAR_12 = 0; VAR_12 < VAR_8->bpo_num_blkptrs; VAR_12++) {
  char VAR_13[VAR_1];
  blkptr_t VAR_14;

  int VAR_15 = FUNC_1(VAR_4, VAR_5,
      VAR_12 * sizeof (VAR_14), sizeof (VAR_14), &VAR_14, 0);
  if (VAR_15 != 0) {
   (void) FUNC_2("got error %u from dmu_read\n", VAR_15);
   break;
  }
  FUNC_3(VAR_13, sizeof (VAR_13), &VAR_14);
  (void) FUNC_2("\t%s\n", VAR_13);
 }
}
