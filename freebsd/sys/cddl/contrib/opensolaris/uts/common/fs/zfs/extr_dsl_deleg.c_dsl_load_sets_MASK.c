
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_8__ {int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_9__ {int p_matched; int p_setname; } ;
typedef TYPE_2__ perm_set_t ;
typedef int objset_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int ,char*,int,int,int *) ;
 int FUNC_10 (char*,char,char,void*) ;

__attribute__((used)) static int
FUNC_11(objset_t *VAR_3, uint64_t VAR_4,
    char VAR_5, char VAR_6, void *VAR_7, avl_tree_t *VAR_8)
{
 zap_cursor_t VAR_9;
 zap_attribute_t VAR_10;
 perm_set_t *VAR_11;
 avl_index_t VAR_12;
 uint64_t VAR_13;
 int VAR_14;
 char VAR_15[VAR_2];

 FUNC_10(VAR_15, VAR_5, VAR_6, VAR_7);

 VAR_14 = FUNC_9(VAR_3, VAR_4, VAR_15, 8, 1, &VAR_13);
 if (VAR_14 != 0)
  return (VAR_14);

 for (FUNC_7(&VAR_9, VAR_3, VAR_13);
     FUNC_8(&VAR_9, &VAR_10) == 0;
     FUNC_5(&VAR_9)) {
  VAR_11 = FUNC_2(sizeof (perm_set_t), VAR_1);
  (void) FUNC_4(VAR_11->p_setname, VAR_10.za_name,
      sizeof (VAR_11->p_setname));
  VAR_11->p_matched = VAR_0;

  if (FUNC_0(VAR_8, VAR_11, &VAR_12) == ((void*)0)) {
   FUNC_1(VAR_8, VAR_11, VAR_12);
  } else {
   FUNC_3(VAR_11, sizeof (perm_set_t));
  }
 }
 FUNC_6(&VAR_9);
 return (0);
}
