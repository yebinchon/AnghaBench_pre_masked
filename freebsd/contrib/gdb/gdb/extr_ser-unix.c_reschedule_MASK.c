
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int async_state; int fd; int bufcnt; } ;




 int FUNC_0 (int ,int ,struct serial*) ;
 int FUNC_1 (int ,int ,struct serial*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct serial*) ;
 scalar_t__ FUNC_6 (struct serial*) ;

__attribute__((used)) static void
FUNC_7 (struct serial *VAR_3)
{
  if (FUNC_6 (VAR_3))
    {
      int VAR_4;
      switch (VAR_3->async_state)
 {
 case 129:
   if (VAR_3->bufcnt == 0)
     VAR_4 = 129;
   else
     {
       FUNC_2 (VAR_3->fd);
       VAR_4 = FUNC_1 (0, VAR_2, VAR_3);
     }
   break;
 case 128:
   if (VAR_3->bufcnt == 0)
     {
       FUNC_0 (VAR_3->fd, VAR_0, VAR_3);
       VAR_4 = 129;
     }
   else
     {
       VAR_4 = FUNC_1 (0, VAR_2, VAR_3);
     }
   break;
 default:
   if (VAR_3->bufcnt == 0)
     {
       FUNC_3 (VAR_3->async_state);
       FUNC_0 (VAR_3->fd, VAR_0, VAR_3);
       VAR_4 = 129;
     }
   else
     VAR_4 = VAR_3->async_state;
   break;
 }
      if (FUNC_5 (VAR_3))
 {
   switch (VAR_4)
     {
     case 129:
       if (VAR_3->async_state != 129)
  FUNC_4 (VAR_1, "[fd%d->fd-scheduled]\n",
        VAR_3->fd);
       break;
     default:
       if (VAR_3->async_state == 129)
  FUNC_4 (VAR_1, "[fd%d->timer-scheduled]\n",
        VAR_3->fd);
       break;
     }
 }
      VAR_3->async_state = VAR_4;
    }
}
