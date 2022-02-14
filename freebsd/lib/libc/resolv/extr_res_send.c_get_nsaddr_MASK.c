
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef TYPE_3__* res_state ;
struct TYPE_10__ {TYPE_1__* ext; } ;
struct TYPE_9__ {TYPE_2__* nsaddr_list; } ;
struct TYPE_8__ {int sin_family; } ;
struct TYPE_7__ {int * nsaddrs; } ;


 TYPE_5__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static struct sockaddr *
FUNC_1(res_state VAR_0, size_t VAR_1)
{

 if (!VAR_0->nsaddr_list[VAR_1].sin_family && FUNC_0(VAR_0).ext) {





  return (struct sockaddr *)(void *)&FUNC_0(VAR_0).ext->nsaddrs[VAR_1];
 } else {





  return (struct sockaddr *)(void *)&VAR_0->nsaddr_list[VAR_1];
 }
}
