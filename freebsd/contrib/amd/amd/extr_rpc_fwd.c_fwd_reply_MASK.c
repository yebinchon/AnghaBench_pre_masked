
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
typedef int u_int ;
struct TYPE_9__ {char* buf; int maxlen; int len; } ;
struct TYPE_8__ {char* buf; int len; int maxlen; } ;
struct TYPE_7__ {char* buf; int maxlen; int len; } ;
struct t_unitdata {TYPE_3__ udata; TYPE_2__ opt; TYPE_1__ addr; } ;
struct sockaddr_in {scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int src_addr ;
struct TYPE_10__ {int rf_ptr; int rf_sin; int (* rf_fwd ) (int ,int,struct sockaddr_in*,int *,int ,int ) ;int rf_oldid; } ;
typedef TYPE_4__ rpc_forward ;
typedef int RECVFROM_FROMLEN_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_7 (int ,int,struct sockaddr_in*,int *,int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int ,struct t_unitdata*,int*) ;
 int FUNC_9 (int ,int *) ;

void
FUNC_10(void)
{
  int VAR_12;
  u_int VAR_13[VAR_3 / sizeof(u_int) + 1];
  u_int *VAR_14;
  u_int VAR_15;
  int VAR_16;
  rpc_forward *VAR_17;
  struct sockaddr_in VAR_18;
  RECVFROM_FROMLEN_TYPE VAR_19;
  VAR_12 = VAR_3;




again:
  VAR_19 = sizeof(VAR_18);
  VAR_16 = FUNC_6(VAR_10,
  (char *) VAR_13,
  VAR_12,
  0,
  (struct sockaddr *) &VAR_18,
  &VAR_19);






  if (VAR_16 < 0 || VAR_19 != sizeof(VAR_18) ||
      VAR_18.sin_family != VAR_0) {
    if (VAR_16 < 0 && VAR_9 == VAR_1)
      goto again;
    FUNC_5(VAR_7, "Error reading RPC reply: %m");
    goto out;
  }




  if ((int) VAR_8 >= (int) VAR_2)
    goto out;




  VAR_14 = (u_int *) VAR_13;
  VAR_15 = FUNC_4(*VAR_14);

  switch (VAR_15 & VAR_4) {
  case 129:
    FUNC_0("Receiving PORTMAP reply %#x", VAR_15);
    break;
  case 131:
    FUNC_0("Receiving MOUNTD reply %#x", VAR_15);
    break;
  case 130:
    FUNC_0("Receiving NFS ping %#x", VAR_15);
    break;
  case 128:
    FUNC_0("Receiving WebNFS lookup %#x", VAR_15);
    break;
  default:
    FUNC_0("UNKNOWN RPC XID %#x", VAR_15);
    break;
  }

  VAR_17 = FUNC_2(VAR_15);
  if (!VAR_17) {
    FUNC_0("Can't forward reply id %#x", VAR_15);
    goto out;
  }

  if (VAR_17->rf_fwd) {




    *VAR_14 = FUNC_3(VAR_17->rf_oldid);




    (*VAR_17->rf_fwd) ((voidp) VAR_13, VAR_16, &VAR_18, &VAR_17->rf_sin, VAR_17->rf_ptr, VAR_6);
  }




  FUNC_1(VAR_17);

out:;
}
