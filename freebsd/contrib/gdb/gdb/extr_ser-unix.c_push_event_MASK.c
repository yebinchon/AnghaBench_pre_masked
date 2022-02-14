
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {int async_context; int (* async_handler ) (struct serial*,int ) ;int async_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct serial*) ;
 int FUNC_1 (struct serial*,int ) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_1)
{
  struct serial *VAR_2 = VAR_1;
  VAR_2->async_state = VAR_0;
  VAR_2->async_handler (VAR_2, VAR_2->async_context);

  FUNC_0 (VAR_2);
}
