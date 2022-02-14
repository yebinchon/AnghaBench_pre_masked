
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char* snapname; scalar_t__ recursive; int nvl; int tag; int error; } ;
typedef int nvlist_t ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct holdarg*) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_3, void *VAR_4)
{
 struct holdarg *VAR_5 = VAR_4;
 char VAR_6[VAR_2];
 int VAR_7 = 0;
 nvlist_t *VAR_8;

 (void) FUNC_6(VAR_6, sizeof (VAR_6),
     "%s@%s", VAR_3->zfs_name, VAR_5->snapname);

 if (FUNC_4(VAR_6, &VAR_8) != 0) {
  VAR_5->error = VAR_0;
 } else if (!FUNC_5(VAR_8, VAR_5->tag)) {
  VAR_5->error = VAR_1;
 } else {
  nvlist_t *VAR_9 = FUNC_2();
  FUNC_0(VAR_9, VAR_5->tag);
  FUNC_1(VAR_5->nvl, VAR_6, VAR_9);
  FUNC_3(VAR_9);
 }

 if (VAR_5->recursive)
  VAR_7 = FUNC_8(VAR_3, FUNC_9, VAR_5);
 FUNC_7(VAR_3);
 return (VAR_7);
}
