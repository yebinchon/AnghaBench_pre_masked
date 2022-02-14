
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kevent {int filter; int flags; int data; scalar_t__ udata; } ;
struct cloudabi64_kevent_args {int out; } ;
typedef int ev ;
struct TYPE_7__ {int exitcode; int signal; } ;
struct TYPE_6__ {int flags; int nbytes; } ;
struct TYPE_8__ {uintptr_t userdata; int error; TYPE_2__ proc_terminate; TYPE_1__ fd_readwrite; int type; } ;
typedef TYPE_3__ cloudabi_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_7(void *VAR_7, struct kevent *VAR_8, int VAR_9)
{
 cloudabi_event_t VAR_10;
 struct cloudabi64_kevent_args *VAR_11;
 int VAR_12;

 VAR_11 = VAR_7;
 while (VAR_9-- > 0) {

  FUNC_6(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.userdata = (uintptr_t)VAR_8->udata;
  switch (VAR_8->filter) {
  case 129:
   VAR_10.type = VAR_0;
   break;
  case 130:
   VAR_10.type = VAR_1;
   break;
  case 128:
   VAR_10.type = VAR_2;
   break;
  case 131:
   VAR_10.type = VAR_3;
   break;
  }

  if ((VAR_8->flags & VAR_6) == 0) {

   switch (VAR_8->filter) {
   case 130:
   case 128:
    VAR_10.fd_readwrite.nbytes = VAR_8->data;
    if ((VAR_8->flags & VAR_5) != 0) {
     VAR_10.fd_readwrite.flags |=
         VAR_4;
    }
    break;
   case 131:
    if (FUNC_1(VAR_8->data)) {

     VAR_10.proc_terminate.signal =
        FUNC_4(FUNC_2(VAR_8->data));
     VAR_10.proc_terminate.exitcode = 0;
    } else {

     VAR_10.proc_terminate.signal = 0;
     VAR_10.proc_terminate.exitcode =
         FUNC_0(VAR_8->data);
    }
    break;
   }
  } else {

   VAR_10.error = FUNC_3(VAR_8->data);
  }
  ++VAR_8;


  VAR_12 = FUNC_5(&VAR_10, VAR_11->out++, sizeof(VAR_10));
  if (VAR_12 != 0)
   return (VAR_12);
 }
 return (0);
}
