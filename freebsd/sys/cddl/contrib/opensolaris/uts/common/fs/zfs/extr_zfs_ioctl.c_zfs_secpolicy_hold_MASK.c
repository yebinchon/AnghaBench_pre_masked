
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int **) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 nvpair_t *VAR_6;
 nvlist_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, "holds", &VAR_7);
 if (VAR_8 != 0)
  return (FUNC_0(VAR_0));

 for (VAR_6 = FUNC_3(VAR_7, ((void*)0)); VAR_6 != ((void*)0);
     VAR_6 = FUNC_3(VAR_7, VAR_6)) {
  char VAR_9[VAR_2];
  VAR_8 = FUNC_1(FUNC_4(VAR_6), VAR_9);
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_8 = FUNC_5(VAR_9,
      VAR_1, VAR_5);
  if (VAR_8 != 0)
   return (VAR_8);
 }
 return (0);
}
