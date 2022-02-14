
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int (* zfs_iter_f ) (TYPE_1__*,void*) ;
struct TYPE_8__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*,int *,int **) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,char*,int *) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

int
FUNC_11(zfs_handle_t *VAR_6, zfs_iter_f VAR_7, void *VAR_8)
{
 zfs_handle_t *VAR_9;
 nvlist_t *VAR_10 = ((void*)0);
 nvlist_t *VAR_11 = ((void*)0);
 int VAR_12;

 if ((FUNC_9(VAR_6) & (VAR_5 | VAR_4)) != 0)
  return (0);


 VAR_10 = FUNC_1();
 FUNC_0(VAR_10, FUNC_10(VAR_3));
 FUNC_0(VAR_10, FUNC_10(VAR_1));
 FUNC_0(VAR_10, FUNC_10(VAR_2));

 if ((VAR_12 = FUNC_4(VAR_6->zfs_name, VAR_10, &VAR_11)) != 0)
  goto out;

 for (nvpair_t *VAR_13 = FUNC_6(VAR_11, ((void*)0));
     VAR_13 != ((void*)0); VAR_13 = FUNC_6(VAR_11, VAR_13)) {
  char VAR_14[VAR_0];
  char *VAR_15;
  nvlist_t *VAR_16;

  VAR_15 = FUNC_7(VAR_13);
  VAR_16 = FUNC_3(VAR_13);

  (void) FUNC_8(VAR_14, sizeof (VAR_14), "%s#%s", VAR_6->zfs_name,
      VAR_15);

  VAR_9 = FUNC_5(VAR_6, VAR_14, VAR_16);
  if (VAR_9 == ((void*)0))
   continue;

  if ((VAR_12 = VAR_7(VAR_9, VAR_8)) != 0)
   goto out;
 }

out:
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);

 return (VAR_12);
}
