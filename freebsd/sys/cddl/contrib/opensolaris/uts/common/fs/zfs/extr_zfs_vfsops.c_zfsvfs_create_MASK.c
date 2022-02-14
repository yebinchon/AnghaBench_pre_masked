
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfsvfs_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char const*,int ,int ,int *,int **) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int **,int *,int *) ;

int
FUNC_7(const char *VAR_5, zfsvfs_t **VAR_6)
{
 objset_t *VAR_7;
 zfsvfs_t *VAR_8;
 int VAR_9;
 if (FUNC_5(VAR_5) >= VAR_4)
  return (FUNC_0(VAR_2));

 VAR_8 = FUNC_4(sizeof (zfsvfs_t), VAR_3);






 VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_0, VAR_8, &VAR_7);
 if (VAR_9 != 0) {
  FUNC_3(VAR_8, sizeof (zfsvfs_t));
  return (VAR_9);
 }

 VAR_9 = FUNC_6(VAR_6, VAR_8, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1(VAR_7, VAR_8);
 }
 return (VAR_9);
}
