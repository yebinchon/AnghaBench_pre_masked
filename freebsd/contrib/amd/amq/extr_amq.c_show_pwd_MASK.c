
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {char* mt_directory; struct TYPE_3__* mt_child; struct TYPE_3__* mt_next; int mt_mountpoint; } ;
typedef TYPE_1__ amq_mount_tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(amq_mount_tree *VAR_1, char *VAR_2, size_t VAR_3, int *VAR_4)
{
  int VAR_5;

  while (VAR_1) {
    VAR_5 = FUNC_2(VAR_1->mt_mountpoint);
    if (FUNC_0(VAR_2, VAR_1->mt_mountpoint, VAR_5) &&
 !FUNC_1(VAR_1->mt_directory, VAR_1->mt_mountpoint)) {
      char VAR_6[VAR_0+1];
      FUNC_4(VAR_6, VAR_1->mt_directory, sizeof(VAR_6));
      FUNC_3(VAR_6, &VAR_2[VAR_5], sizeof(VAR_6));
      FUNC_4(VAR_2, VAR_6, VAR_3);
      *VAR_4 = 1;
    }
    FUNC_5(VAR_1->mt_next, VAR_2, VAR_3, VAR_4);
    VAR_1 = VAR_1->mt_child;
  }
}
