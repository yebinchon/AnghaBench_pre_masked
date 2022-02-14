
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {scalar_t__ calls; int flags; int fd; int out; int in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct client*) ;

__attribute__((used)) static int
FUNC_5(struct client *VAR_2)
{
    if (VAR_2->calls != 0)
 return 0;
    if (VAR_2->flags & (VAR_0|VAR_1))
 return 0;
    FUNC_0(VAR_2->fd);
    FUNC_4(VAR_2);
    return 1;
}
