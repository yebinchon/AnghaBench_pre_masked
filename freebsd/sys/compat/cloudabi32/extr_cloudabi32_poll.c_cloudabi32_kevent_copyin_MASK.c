
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sub ;
struct kevent {int flags; int fflags; int ident; int filter; scalar_t__ data; int udata; } ;
struct cloudabi32_kevent_args {int in; } ;
typedef scalar_t__ cloudabi_timestamp_t ;
struct TYPE_8__ {int fd; } ;
struct TYPE_7__ {int fd; } ;
struct TYPE_6__ {int flags; scalar_t__ timeout; int clock_id; int identifier; } ;
struct TYPE_9__ {int type; TYPE_3__ proc_terminate; TYPE_2__ fd_readwrite; TYPE_1__ clock; int userdata; } ;
typedef TYPE_4__ cloudabi32_subscription_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 int VAR_11 ;
 int FUNC_3 (struct kevent*,int ,int) ;

__attribute__((used)) static int
FUNC_4(void *VAR_12, struct kevent *VAR_13, int VAR_14)
{
 cloudabi32_subscription_t VAR_15;
 struct cloudabi32_kevent_args *VAR_16;
 cloudabi_timestamp_t VAR_17;
 int VAR_18;

 VAR_16 = VAR_12;
 while (VAR_14-- > 0) {

  VAR_18 = FUNC_2(VAR_16->in++, &VAR_15, sizeof(VAR_15));
  if (VAR_18 != 0)
   return (VAR_18);

  FUNC_3(VAR_13, 0, sizeof(*VAR_13));
  VAR_13->udata = FUNC_0(VAR_15.userdata);
  switch (VAR_15.type) {
  case 131:
   VAR_13->filter = VAR_3;
   VAR_13->ident = VAR_15.clock.identifier;
   VAR_13->fflags = VAR_10;
   if ((VAR_15.clock.flags &
       VAR_0) != 0 &&
       VAR_15.clock.timeout > 0) {

    VAR_18 = FUNC_1(VAR_11,
        VAR_15.clock.clock_id, &VAR_17);
    if (VAR_18 != 0)
     return (VAR_18);
    VAR_17 = VAR_17 > VAR_15.clock.timeout ? 0 :
        VAR_15.clock.timeout - VAR_17;
   } else {

    VAR_17 = VAR_15.clock.timeout;
   }
   VAR_13->data = VAR_17 > VAR_7 ? VAR_7 : VAR_17;
   break;
  case 130:
   VAR_13->filter = VAR_2;
   VAR_13->ident = VAR_15.fd_readwrite.fd;
   VAR_13->fflags = VAR_9;
   break;
  case 129:
   VAR_13->filter = VAR_4;
   VAR_13->ident = VAR_15.fd_readwrite.fd;
   break;
  case 128:
   VAR_13->filter = VAR_1;
   VAR_13->ident = VAR_15.proc_terminate.fd;
   VAR_13->fflags = VAR_8;
   break;
  }
  VAR_13->flags = VAR_5 | VAR_6;
  ++VAR_13;
 }
 return (0);
}
