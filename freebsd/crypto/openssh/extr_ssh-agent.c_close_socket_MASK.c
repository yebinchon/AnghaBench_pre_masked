
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int fd; int request; int output; int input; } ;
typedef TYPE_1__ SocketEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(SocketEntry *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->type == VAR_0) {
  FUNC_2("xcount %d -> %d", VAR_2, VAR_2 - 1);
  if (--VAR_2 == 0)
   VAR_4 = 1;
 }
 FUNC_1(VAR_3->fd);
 VAR_3->fd = -1;
 VAR_3->type = VAR_1;
 FUNC_3(VAR_3->input);
 FUNC_3(VAR_3->output);
 FUNC_3(VAR_3->request);
 if (VAR_4)
  FUNC_0(0);
}
