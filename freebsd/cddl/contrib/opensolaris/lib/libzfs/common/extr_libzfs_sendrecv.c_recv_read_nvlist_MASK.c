
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int **,int ) ;
 int FUNC_3 (int *,int,char*,int,int ,int *) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(libzfs_handle_t *VAR_3, int VAR_4, int VAR_5, nvlist_t **VAR_6,
    boolean_t VAR_7, zio_cksum_t *VAR_8)
{
 char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_3, VAR_5);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_9, VAR_5, VAR_7, VAR_8);
 if (VAR_10 != 0) {
  FUNC_1(VAR_9);
  return (VAR_10);
 }

 VAR_10 = FUNC_2(VAR_9, VAR_5, VAR_6, 0);
 FUNC_1(VAR_9);
 if (VAR_10 != 0) {
  FUNC_5(VAR_3, FUNC_0(VAR_2, "invalid "
      "stream (malformed nvlist)"));
  return (VAR_0);
 }
 return (0);
}
