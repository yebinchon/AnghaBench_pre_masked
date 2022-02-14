
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;



 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,char*) ;

int
FUNC_11(libzfs_handle_t *VAR_3, nvlist_t *VAR_4, boolean_t VAR_5)
{
 int VAR_6;
 nvlist_t *VAR_7 = ((void*)0);

 VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_7);

 if (VAR_6 == 0) {
  FUNC_4(VAR_7);
  return (0);
 }

 if (FUNC_3(VAR_7)) {
  char VAR_8[1024];
  (void) FUNC_7(VAR_8, sizeof (VAR_8),
      FUNC_0(VAR_1, "cannot destroy snapshots"));

  VAR_6 = FUNC_10(VAR_3, VAR_6, VAR_8);
 }
 for (nvpair_t *VAR_9 = FUNC_5(VAR_7, ((void*)0));
     VAR_9 != ((void*)0); VAR_9 = FUNC_5(VAR_7, VAR_9)) {
  char VAR_10[1024];
  (void) FUNC_7(VAR_10, sizeof (VAR_10),
      FUNC_0(VAR_1, "cannot destroy snapshot %s"),
      FUNC_6(VAR_9));

  switch (FUNC_1(VAR_9)) {
  case 128:
   FUNC_9(VAR_3,
       FUNC_0(VAR_1, "snapshot is cloned"));
   VAR_6 = FUNC_8(VAR_3, VAR_0, VAR_10);
   break;
  default:
   VAR_6 = FUNC_10(VAR_3, VAR_2, VAR_10);
   break;
  }
 }

 FUNC_4(VAR_7);
 return (VAR_6);
}
