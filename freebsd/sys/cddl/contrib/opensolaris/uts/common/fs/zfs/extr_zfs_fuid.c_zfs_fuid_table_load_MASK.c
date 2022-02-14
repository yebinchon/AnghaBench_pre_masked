
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_6__ {int f_ksid; scalar_t__ f_idx; } ;
typedef TYPE_1__ fuid_domain_t ;
struct TYPE_7__ {scalar_t__ db_data; } ;
typedef TYPE_2__ dmu_buf_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ,scalar_t__,char*,int ) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ***,int*) ;
 scalar_t__ FUNC_11 (int *,int ,char**) ;
 scalar_t__ FUNC_12 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (char*,scalar_t__,int **,int ) ;

uint64_t
FUNC_14(objset_t *VAR_6, uint64_t VAR_7, avl_tree_t *VAR_8,
    avl_tree_t *VAR_9)
{
 dmu_buf_t *VAR_10;
 uint64_t VAR_11;

 FUNC_0(VAR_7 != 0);
 FUNC_1(0 == FUNC_3(VAR_6, VAR_7,
     VAR_1, &VAR_10));
 VAR_11 = *(uint64_t *)VAR_10->db_data;
 FUNC_4(VAR_10, VAR_1);

 if (VAR_11) {
  nvlist_t **VAR_12;
  nvlist_t *VAR_13 = ((void*)0);
  uint_t VAR_14;
  char *VAR_15;
  int VAR_16;

  VAR_15 = FUNC_6(VAR_11, VAR_5);
  FUNC_1(FUNC_5(VAR_6, VAR_7, 0,
      VAR_11, VAR_15, VAR_0) == 0);
  FUNC_1(FUNC_13(VAR_15, VAR_11,
      &VAR_13, 0) == 0);
  FUNC_1(FUNC_10(VAR_13, VAR_4,
      &VAR_12, &VAR_14) == 0);

  for (VAR_16 = 0; VAR_16 != VAR_14; VAR_16++) {
   fuid_domain_t *VAR_17;
   char *VAR_18;
   uint64_t VAR_19;

   FUNC_1(FUNC_11(VAR_12[VAR_16], VAR_2,
       &VAR_18) == 0);
   FUNC_1(FUNC_12(VAR_12[VAR_16], VAR_3,
       &VAR_19) == 0);

   VAR_17 = FUNC_6(sizeof (fuid_domain_t), VAR_5);

   VAR_17->f_idx = VAR_19;
   VAR_17->f_ksid = FUNC_8(VAR_18);
   FUNC_2(VAR_8, VAR_17);
   FUNC_2(VAR_9, VAR_17);
  }
  FUNC_9(VAR_13);
  FUNC_7(VAR_15, VAR_11);
 }
 return (VAR_11);
}
