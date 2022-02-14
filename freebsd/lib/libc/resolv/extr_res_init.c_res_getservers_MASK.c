
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int sin_family; } ;
union res_sockaddr_union {TYPE_7__ sin; TYPE_7__ sin6; } ;
typedef int u_int16_t ;
typedef TYPE_5__* res_state ;
struct TYPE_9__ {int sin_family; } ;
struct TYPE_15__ {int sin_family; TYPE_1__ sin; } ;
struct TYPE_11__ {TYPE_2__* ext; } ;
struct TYPE_12__ {TYPE_3__ _ext; } ;
struct TYPE_13__ {int nscount; TYPE_8__* nsaddr_list; TYPE_4__ _u; } ;
struct TYPE_10__ {TYPE_8__* nsaddrs; } ;




 int FUNC_0 (TYPE_7__*,TYPE_8__*,size_t) ;

int
FUNC_1(res_state VAR_0, union res_sockaddr_union *VAR_1, int VAR_2) {
 int VAR_3;
 size_t VAR_4;
 u_int16_t VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0->nscount && VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0->_u._ext.ext)
   VAR_5 = VAR_0->_u._ext.ext->nsaddrs[VAR_3].sin.sin_family;
  else
   VAR_5 = VAR_0->nsaddr_list[VAR_3].sin_family;

  switch (VAR_5) {
  case 129:
   VAR_4 = sizeof(VAR_1->sin);
   if (VAR_0->_u._ext.ext)
    FUNC_0(&VAR_1->sin,
           &VAR_0->_u._ext.ext->nsaddrs[VAR_3],
           VAR_4);
   else
    FUNC_0(&VAR_1->sin, &VAR_0->nsaddr_list[VAR_3],
           VAR_4);
   break;
  default:
   VAR_1->sin.sin_family = 0;
   break;
  }
  VAR_1++;
 }
 return (VAR_0->nscount);
}
