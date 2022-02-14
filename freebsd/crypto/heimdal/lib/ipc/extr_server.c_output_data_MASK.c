
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {size_t olen; int flags; int * outmsg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_1, const void *VAR_2, size_t VAR_3)
{
    if (VAR_1->olen + VAR_3 < VAR_1->olen)
 FUNC_0();
    VAR_1->outmsg = FUNC_1(VAR_1->outmsg, VAR_1->olen + VAR_3);
    FUNC_2(&VAR_1->outmsg[VAR_1->olen], VAR_2, VAR_3);
    VAR_1->olen += VAR_3;
    VAR_1->flags |= VAR_0;
}
