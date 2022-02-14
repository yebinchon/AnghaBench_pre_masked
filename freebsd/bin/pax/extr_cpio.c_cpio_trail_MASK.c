
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ st_size; } ;
struct TYPE_5__ {TYPE_1__ sb; int name; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(ARCHD *VAR_1)
{



 if ((FUNC_0(VAR_1->name, VAR_0) == 0) && (VAR_1->sb.st_size == 0))
  return(0);
 return(-1);
}
