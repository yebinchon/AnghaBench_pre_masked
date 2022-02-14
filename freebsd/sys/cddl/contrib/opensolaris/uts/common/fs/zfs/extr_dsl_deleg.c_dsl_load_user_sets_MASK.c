
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int gid_t ;
typedef int cred_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,char,int *,int *) ;

__attribute__((used)) static void
FUNC_5(objset_t *VAR_3, uint64_t VAR_4, avl_tree_t *VAR_5,
    char VAR_6, cred_t *VAR_7)
{
 const gid_t *VAR_8;
 int VAR_9, VAR_10;
 uint64_t VAR_11;

 VAR_11 = FUNC_3(VAR_7);
 (void) FUNC_4(VAR_3, VAR_4,
     VAR_2, VAR_6, &VAR_11, VAR_5);

 VAR_11 = FUNC_0(VAR_7);
 (void) FUNC_4(VAR_3, VAR_4,
     VAR_1, VAR_6, &VAR_11, VAR_5);

 (void) FUNC_4(VAR_3, VAR_4,
     VAR_0, VAR_6, ((void*)0), VAR_5);

 VAR_9 = FUNC_2(VAR_7);
 VAR_8 = FUNC_1(VAR_7);
 for (VAR_10 = 0; VAR_10 != VAR_9; VAR_10++) {
  VAR_11 = VAR_8[VAR_10];
  (void) FUNC_4(VAR_3, VAR_4,
      VAR_1, VAR_6, &VAR_11, VAR_5);
 }
}
