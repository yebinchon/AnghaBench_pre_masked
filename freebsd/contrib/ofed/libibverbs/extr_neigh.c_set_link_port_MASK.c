
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_scope_id; void* sin6_port; } ;
struct TYPE_5__ {void* sin_port; } ;
struct TYPE_4__ {int sa_family; } ;
union sktaddr {TYPE_3__ s6; TYPE_2__ s4; TYPE_1__ s; } ;
typedef void* __be16 ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0(union sktaddr *VAR_1, __be16 VAR_2, int VAR_3)
{
 switch (VAR_1->s.sa_family) {
 case 129:
  VAR_1->s4.sin_port = VAR_2;
  break;
 case 128:
  VAR_1->s6.sin6_port = VAR_2;
  VAR_1->s6.sin6_scope_id = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
