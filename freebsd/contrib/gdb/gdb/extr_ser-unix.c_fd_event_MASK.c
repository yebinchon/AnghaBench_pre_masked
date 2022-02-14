
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {scalar_t__ bufcnt; int async_context; int (* async_handler ) (struct serial*,int ) ;int buf; int bufp; int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct serial*) ;
 int FUNC_2 (struct serial*,int ) ;

__attribute__((used)) static void
FUNC_3 (int VAR_5, void *VAR_6)
{
  struct serial *VAR_7 = VAR_6;
  if (VAR_5 != 0)
    {
      VAR_7->bufcnt = VAR_3;
    }
  else if (VAR_7->bufcnt == 0)
    {



      int VAR_8;
      do
 {
   VAR_8 = FUNC_0 (VAR_7->fd, VAR_7->buf, VAR_0);
 }
      while (VAR_8 == -1 && VAR_4 == VAR_1);
      if (VAR_8 == 0)
 {
   VAR_7->bufcnt = VAR_2;
 }
      else if (VAR_8 > 0)
 {
   VAR_7->bufcnt = VAR_8;
   VAR_7->bufp = VAR_7->buf;
 }
      else
 {
   VAR_7->bufcnt = VAR_3;
 }
    }
  VAR_7->async_handler (VAR_7, VAR_7->async_context);
  FUNC_1 (VAR_7);
}
