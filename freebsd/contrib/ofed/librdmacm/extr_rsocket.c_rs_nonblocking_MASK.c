
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int fd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rsocket *VAR_2, int VAR_3)
{
 return (VAR_2->fd_flags & VAR_1) || (VAR_3 & VAR_0);
}
