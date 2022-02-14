
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char* snapname; scalar_t__ recursive; int tag; int nvl; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct holdarg*) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_1, void *VAR_2)
{
 struct holdarg *VAR_3 = VAR_2;
 char VAR_4[VAR_0];
 int VAR_5 = 0;

 (void) FUNC_2(VAR_4, sizeof (VAR_4),
     "%s@%s", VAR_1->zfs_name, VAR_3->snapname);

 if (FUNC_1(VAR_4))
  FUNC_0(VAR_3->nvl, VAR_4, VAR_3->tag);

 if (VAR_3->recursive)
  VAR_5 = FUNC_4(VAR_1, FUNC_5, VAR_3);
 FUNC_3(VAR_1);
 return (VAR_5);
}
