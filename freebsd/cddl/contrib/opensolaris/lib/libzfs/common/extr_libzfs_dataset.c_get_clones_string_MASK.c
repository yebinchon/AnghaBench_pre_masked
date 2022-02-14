
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int * FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,size_t) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 nvlist_t *VAR_3;
 nvpair_t *VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_1[0] = '\0';
 for (VAR_4 = FUNC_0(VAR_3, ((void*)0)); VAR_4 != ((void*)0);
     VAR_4 = FUNC_0(VAR_3, VAR_4)) {
  if (VAR_1[0] != '\0')
   (void) FUNC_2(VAR_1, ",", VAR_2);
  (void) FUNC_2(VAR_1, FUNC_1(VAR_4), VAR_2);
 }

 return (0);
}
