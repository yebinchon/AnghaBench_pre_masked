
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int voidp ;
typedef int u_int ;
struct TYPE_12__ {char* buf; int maxlen; int len; } ;
struct TYPE_11__ {char* buf; scalar_t__ len; scalar_t__ maxlen; } ;
struct TYPE_10__ {char* buf; int maxlen; int len; } ;
struct t_unitdata {TYPE_4__ udata; TYPE_3__ opt; TYPE_2__ addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_13__ {int rf_xid; int rf_ptr; struct sockaddr_in rf_sin; int * rf_fwd; int rf_oldid; } ;
typedef TYPE_5__ rpc_forward ;
typedef int opaque_t ;
typedef int fwd_fun ;
typedef int dq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;




 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,...) ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ,int) ;
 scalar_t__ FUNC_12 (int ,char*,int,int ,struct sockaddr*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int ,struct t_unitdata*) ;

int
FUNC_14(int VAR_10, char *VAR_11, int VAR_12, struct sockaddr_in *VAR_13, struct sockaddr_in *VAR_14, opaque_t VAR_15, fwd_fun *VAR_16)
{
  rpc_forward *VAR_17;
  u_int *VAR_18;
  int VAR_19;




  if ((int) VAR_6 >= (int) VAR_3)
    return VAR_2;
  switch (VAR_10 & VAR_4) {
  case 129:
    FUNC_2("Sending PORTMAP request %#x", VAR_10);
    break;
  case 131:
    FUNC_2("Sending MOUNTD request %#x", VAR_10);
    break;
  case 130:
    FUNC_2("Sending NFS ping %#x", VAR_10);
    break;
  case 128:
    FUNC_2("Sending WebNFS lookup %#x", VAR_10);
    break;
  default:
    FUNC_2("UNKNOWN RPC XID %#x", VAR_10);
    break;
  }

  if (VAR_10 & ~VAR_4) {
    VAR_17 = FUNC_5(VAR_10);
    if (VAR_17) {
      FUNC_2("Discarding earlier rpc fwd handle");
      FUNC_4(VAR_17);
    }
  } else {
    FUNC_2("Allocating a new xid...");
    VAR_10 = FUNC_0(VAR_10, FUNC_1());
  }

  VAR_17 = FUNC_3();
  if (!VAR_17)
    return VAR_1;

  VAR_19 = 0;

  VAR_18 = (u_int *) VAR_11;




  VAR_17->rf_oldid = FUNC_9(*VAR_18);




  VAR_17->rf_xid = VAR_10;
  *VAR_18 = FUNC_6(VAR_10);
  if (!VAR_13) {
    VAR_19 = VAR_0;
    goto out;
  }
  if (FUNC_12(VAR_8, (char *) VAR_11, VAR_12, 0,
      (struct sockaddr *) VAR_13, sizeof(*VAR_13)) < 0)
    VAR_19 = VAR_7;





out:
  VAR_17->rf_fwd = VAR_16;
  if (VAR_14)
    VAR_17->rf_sin = *VAR_14;
  else
    FUNC_8((voidp) &VAR_17->rf_sin, 0, sizeof(VAR_17->rf_sin));
  VAR_17->rf_ptr = VAR_15;

  return VAR_19;
}
