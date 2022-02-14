
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int opts; int fd_flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rsocket*,int ,int ) ;
 int FUNC_1 (int *,struct rsocket*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct rsocket*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct rsocket *VAR_7)
{
 if (VAR_7->opts & VAR_1)
  FUNC_1(&VAR_6, VAR_7, VAR_2);

 if (VAR_7->fd_flags & VAR_0)
  FUNC_2(VAR_7, 0);

 VAR_7->state &= ~(VAR_4 | VAR_5);
 FUNC_0(VAR_7, 0, VAR_3);

 if (VAR_7->fd_flags & VAR_0)
  FUNC_2(VAR_7, VAR_7->fd_flags);
}
