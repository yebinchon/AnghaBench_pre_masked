
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int async_state; int fd; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct serial*) ;
 scalar_t__ FUNC_4 (struct serial*) ;

void
FUNC_5 (struct serial *VAR_1,
  int VAR_2)
{
  if (VAR_2)
    {

      VAR_1->async_state = 128;
      if (FUNC_4 (VAR_1))
 FUNC_2 (VAR_0, "[fd%d->asynchronous]\n",
       VAR_1->fd);
      FUNC_3 (VAR_1);
    }
  else
    {
      if (FUNC_4 (VAR_1))
 FUNC_2 (VAR_0, "[fd%d->synchronous]\n",
       VAR_1->fd);

      switch (VAR_1->async_state)
 {
 case 129:
   FUNC_0 (VAR_1->fd);
   break;
 case 128:
   break;
 default:
   FUNC_1 (VAR_1->async_state);
   break;
 }
    }
}
