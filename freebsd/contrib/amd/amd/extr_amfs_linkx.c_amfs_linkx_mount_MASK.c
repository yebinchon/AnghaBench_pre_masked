
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_5__ {char* mf_mount; } ;
typedef TYPE_1__ mntfs ;
struct TYPE_6__ {char* am_link; } ;
typedef TYPE_2__ am_node ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_1(am_node *VAR_1, mntfs *VAR_2)
{



  struct stat VAR_3;
  char *VAR_4;

  if (VAR_1->am_link)
    VAR_4 = VAR_1->am_link;
  else
    VAR_4 = VAR_2->mf_mount;






  if (FUNC_0(VAR_4, &VAR_3) < 0)
    return VAR_0;

  return 0;
}
