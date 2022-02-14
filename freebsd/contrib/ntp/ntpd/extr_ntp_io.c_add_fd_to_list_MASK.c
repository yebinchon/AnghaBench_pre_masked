
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int fd; } ;
typedef TYPE_1__ vsock_t ;
typedef enum desc_type { ____Placeholder_desc_type } desc_type ;
typedef int SOCKET ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(
 SOCKET VAR_2,
 enum desc_type VAR_3
 )
{
 vsock_t *VAR_4 = FUNC_1(sizeof(*VAR_4));

 VAR_4->fd = VAR_2;
 VAR_4->type = VAR_3;

 FUNC_0(VAR_0, VAR_4, VAR_1);
 FUNC_2(VAR_2, 0);
}
