
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sin6_len; scalar_t__ sin6_port; int sin6_addr; int sin6_family; } ;
struct TYPE_7__ {TYPE_2__ sin6; } ;
struct TYPE_9__ {int length; TYPE_1__ type; } ;
typedef TYPE_3__ isc_sockaddr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void
FUNC_2(isc_sockaddr_t *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->type.sin6.sin6_family = VAR_0;



 VAR_3->type.sin6.sin6_addr = VAR_1;
 VAR_3->type.sin6.sin6_port = 0;
 VAR_3->length = sizeof(VAR_3->type.sin6);
 FUNC_0(VAR_3, VAR_2);
}
