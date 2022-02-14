
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {size_t olen; int flags; int * outmsg; int fd; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 size_t FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_2)
{
    ssize_t VAR_3;

    VAR_3 = FUNC_2(VAR_2->fd, VAR_2->outmsg, VAR_2->olen);
    if (VAR_3 <= 0) {
 VAR_2->flags |= VAR_0;
 VAR_2->flags &= ~(VAR_1);
    } else if (VAR_2->olen != (size_t)VAR_3) {
 FUNC_1(&VAR_2->outmsg[0], &VAR_2->outmsg[VAR_3], VAR_2->olen - VAR_3);
 VAR_2->olen -= VAR_3;
    } else {
 VAR_2->olen = 0;
 FUNC_0(VAR_2->outmsg);
 VAR_2->outmsg = ((void*)0);
 VAR_2->flags &= ~(VAR_1);
    }
}
