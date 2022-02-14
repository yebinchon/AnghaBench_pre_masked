
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {struct socket_call* data; } ;
struct socket_call {struct client* c; TYPE_1__ in; scalar_t__ cred; } ;
struct client {int flags; int calls; } ;
typedef scalar_t__ heim_sipc_call ;
struct TYPE_5__ {int length; int * data; } ;
typedef TYPE_2__ heim_idata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct socket_call*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct client*) ;
 int FUNC_5 (struct client*,int *,int) ;

__attribute__((used)) static void
FUNC_6(heim_sipc_call VAR_4, int VAR_5, heim_idata *VAR_6)
{
    struct socket_call *VAR_7 = (struct socket_call *)VAR_4;
    struct client *VAR_8 = VAR_7->c;


    if (VAR_8 == ((void*)0))
 FUNC_0();

    if ((VAR_8->flags & VAR_2) == 0) {
 uint32_t VAR_9;


 VAR_9 = FUNC_3(VAR_6->length);
 FUNC_5(VAR_8, &VAR_9, sizeof(VAR_9));


 if (VAR_8->flags & VAR_1) {
     VAR_9 = FUNC_3(VAR_5);
     FUNC_5(VAR_8, &VAR_9, sizeof(VAR_9));
 }


 FUNC_5(VAR_8, VAR_6->data, VAR_6->length);


 if (VAR_8->flags & VAR_0) {
     VAR_8->flags |= VAR_2;
     VAR_8->flags &= ~VAR_3;
 }
    }

    VAR_8->calls--;
    if (VAR_7->cred)
 FUNC_2(VAR_7->cred);
    FUNC_1(VAR_7->in.data);
    VAR_7->c = ((void*)0);
    FUNC_1(VAR_7);

    FUNC_4(VAR_8);
}
