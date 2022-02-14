
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int sin_family; } ;
union res_sockaddr_union {TYPE_8__ sin6; TYPE_8__ sin; } ;
typedef TYPE_4__* res_state ;
struct TYPE_13__ {int sin_family; } ;
struct TYPE_10__ {TYPE_1__* ext; scalar_t__ nscount; } ;
struct TYPE_11__ {TYPE_2__ _ext; } ;
struct TYPE_12__ {int nscount; TYPE_7__* nsaddr_list; TYPE_3__ _u; } ;
struct TYPE_9__ {TYPE_7__* nsaddrs; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,TYPE_8__*,size_t) ;
 int FUNC_1 (TYPE_4__*) ;

void
FUNC_2(res_state VAR_1, const union res_sockaddr_union *VAR_2, int VAR_3) {
 int VAR_4, VAR_5;
 size_t VAR_6;


 FUNC_1(VAR_1);


 VAR_1->_u._ext.nscount = 0;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3 && VAR_5 < VAR_0; VAR_4++) {
  switch (VAR_2->sin.sin_family) {
  case 129:
   VAR_6 = sizeof(VAR_2->sin);
   if (VAR_1->_u._ext.ext)
    FUNC_0(&VAR_1->_u._ext.ext->nsaddrs[VAR_5],
     &VAR_2->sin, VAR_6);
   if (VAR_6 <= sizeof(VAR_1->nsaddr_list[VAR_5]))
    FUNC_0(&VAR_1->nsaddr_list[VAR_5],
     &VAR_2->sin, VAR_6);
   else
    VAR_1->nsaddr_list[VAR_5].sin_family = 0;
   VAR_5++;
   break;
  default:
   break;
  }
  VAR_2++;
 }
 VAR_1->nscount = VAR_5;

}
