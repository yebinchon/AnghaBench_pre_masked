
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* res_state ;
struct TYPE_7__ {TYPE_1__* ext; } ;
struct TYPE_8__ {TYPE_2__ _ext; } ;
struct TYPE_9__ {TYPE_3__ _u; } ;
struct TYPE_6__ {char const* nsuffix2; } ;



const char *
FUNC_0(res_state VAR_0) {
 if (VAR_0->_u._ext.ext)
  return (VAR_0->_u._ext.ext->nsuffix2);
 return ("ip6.int");
}
