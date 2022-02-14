
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* abd_buf; } ;
struct TYPE_8__ {TYPE_1__ abd_linear; } ;
struct TYPE_9__ {TYPE_2__ abd_u; } ;
typedef TYPE_3__ abd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

void *
FUNC_3(abd_t *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_2(VAR_0);
 return (VAR_0->abd_u.abd_linear.abd_buf);
}
