
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int sin_len; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct TYPE_10__ {TYPE_2__ sin; } ;
struct TYPE_11__ {int length; TYPE_3__ type; } ;
typedef TYPE_4__ isc_sockaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

void
FUNC_2(isc_sockaddr_t *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->type.sin.sin_family = VAR_0;



 VAR_3->type.sin.sin_addr.s_addr = VAR_1;
 VAR_3->type.sin.sin_port = 0;
 VAR_3->length = sizeof(VAR_3->type.sin);
 FUNC_0(VAR_3, VAR_2);
}
