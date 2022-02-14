
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_14(char *VAR_2, nvlist_t *VAR_3, nvlist_t **VAR_4)
{
 zfs_cmd_t *VAR_5;
 nvpair_t *VAR_6, *VAR_7;
 nvlist_t *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_3 == ((void*)0))
  return (0);

 FUNC_1(FUNC_5(&VAR_8, VAR_1, VAR_0) == 0);

 VAR_5 = FUNC_2(sizeof (zfs_cmd_t), VAR_0);
 (void) FUNC_11(VAR_5->zc_name, VAR_2);
 VAR_6 = FUNC_7(VAR_3, ((void*)0));
 while (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_7(VAR_3, VAR_6);

  (void) FUNC_11(VAR_5->zc_value, FUNC_9(VAR_6));
  if ((VAR_9 = FUNC_12(VAR_2, VAR_6, FUNC_0())) != 0 ||
      (VAR_9 = FUNC_13(VAR_5, ((void*)0), FUNC_0())) != 0) {
   FUNC_1(FUNC_8(VAR_3, VAR_6) == 0);
   FUNC_1(FUNC_4(VAR_8,
       VAR_5->zc_value, VAR_9) == 0);
  }
  VAR_6 = VAR_7;
 }
 FUNC_3(VAR_5, sizeof (zfs_cmd_t));

 if ((VAR_6 = FUNC_7(VAR_8, ((void*)0))) == ((void*)0)) {
  FUNC_6(VAR_8);
  VAR_8 = ((void*)0);
 } else {
  FUNC_1(FUNC_10(VAR_6, &VAR_10) == 0);
 }

 if (VAR_4 == ((void*)0))
  FUNC_6(VAR_8);
 else
  *VAR_4 = VAR_8;

 return (VAR_10);
}
