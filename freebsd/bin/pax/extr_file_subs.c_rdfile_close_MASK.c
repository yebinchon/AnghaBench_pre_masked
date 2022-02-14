
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_atime; int st_mtime; } ;
struct TYPE_5__ {TYPE_1__ sb; int org_name; } ;
typedef TYPE_2__ ARCHD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;

void
FUNC_2(ARCHD *VAR_1, int *VAR_2)
{



 if (*VAR_2 < 0)
  return;

 (void)FUNC_0(*VAR_2);
 *VAR_2 = -1;
 if (!VAR_0)
  return;




 FUNC_1(VAR_1->org_name, VAR_1->sb.st_mtime, VAR_1->sb.st_atime, 1);
 return;
}
