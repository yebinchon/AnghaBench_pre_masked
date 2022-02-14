
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ifi_type; } ;
struct TYPE_4__ {TYPE_1__ ifmd_data; } ;
struct mibif {int * xnotify; TYPE_2__ mib; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mibif*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct mibif *VAR_2)
{
 if (!VAR_1 || VAR_2->mib.ifmd_data.ifi_type != VAR_0 ||
     VAR_2->xnotify != ((void*)0))
  return (0);

 FUNC_0(VAR_2);
 return (1);
}
