
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_9__ {scalar_t__ gateway_ports; } ;
struct TYPE_8__ {char* listen_path; char* listen_host; int connect_port; int * connect_host; int * connect_path; int listen_port; } ;
struct TYPE_7__ {char* listen_path; char* listen_host; scalar_t__ handle; int connect_port; int * connect_host; int * connect_path; int listen_port; } ;
struct TYPE_6__ {int num_local_forwards; int num_remote_forwards; scalar_t__ tun_open; scalar_t__ exit_on_forward_failure; int tun_remote; int tun_local; TYPE_2__* remote_forwards; TYPE_4__ fwd_opts; TYPE_3__* local_forwards; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ssh*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct ssh*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 char* FUNC_3 (struct ssh*,scalar_t__,int ,int ) ;
 int FUNC_4 (char*,char*,int ,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct ssh *VAR_3, char **VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1.num_local_forwards; VAR_6++) {
  FUNC_4("Local connections to %.200s:%d forwarded to remote "
      "address %.200s:%d",
      (VAR_1.local_forwards[VAR_6].listen_path != ((void*)0)) ?
      VAR_1.local_forwards[VAR_6].listen_path :
      (VAR_1.local_forwards[VAR_6].listen_host == ((void*)0)) ?
      (VAR_1.fwd_opts.gateway_ports ? "*" : "LOCALHOST") :
      VAR_1.local_forwards[VAR_6].listen_host,
      VAR_1.local_forwards[VAR_6].listen_port,
      (VAR_1.local_forwards[VAR_6].connect_path != ((void*)0)) ?
      VAR_1.local_forwards[VAR_6].connect_path :
      VAR_1.local_forwards[VAR_6].connect_host,
      VAR_1.local_forwards[VAR_6].connect_port);
  VAR_5 += FUNC_1(VAR_3,
      &VAR_1.local_forwards[VAR_6], &VAR_1.fwd_opts);
 }
 if (VAR_6 > 0 && VAR_5 != VAR_6 && VAR_1.exit_on_forward_failure)
  FUNC_6("Could not request local forwarding.");
 if (VAR_6 > 0 && VAR_5 == 0)
  FUNC_5("Could not request local forwarding.");


 for (VAR_6 = 0; VAR_6 < VAR_1.num_remote_forwards; VAR_6++) {
  FUNC_4("Remote connections from %.200s:%d forwarded to "
      "local address %.200s:%d",
      (VAR_1.remote_forwards[VAR_6].listen_path != ((void*)0)) ?
      VAR_1.remote_forwards[VAR_6].listen_path :
      (VAR_1.remote_forwards[VAR_6].listen_host == ((void*)0)) ?
      "LOCALHOST" : VAR_1.remote_forwards[VAR_6].listen_host,
      VAR_1.remote_forwards[VAR_6].listen_port,
      (VAR_1.remote_forwards[VAR_6].connect_path != ((void*)0)) ?
      VAR_1.remote_forwards[VAR_6].connect_path :
      VAR_1.remote_forwards[VAR_6].connect_host,
      VAR_1.remote_forwards[VAR_6].connect_port);
  VAR_1.remote_forwards[VAR_6].handle =
      FUNC_0(VAR_3,
      &VAR_1.remote_forwards[VAR_6]);
  if (VAR_1.remote_forwards[VAR_6].handle < 0) {
   if (VAR_1.exit_on_forward_failure)
    FUNC_6("Could not request remote forwarding.");
   else
    FUNC_7("Warning: Could not request remote "
        "forwarding.");
  } else {
   FUNC_2(
       VAR_2,
       &VAR_1.remote_forwards[VAR_6]);
  }
 }


 if (VAR_1.tun_open != VAR_0) {
  if ((*VAR_4 = FUNC_3(VAR_3,
      VAR_1.tun_open, VAR_1.tun_local,
      VAR_1.tun_remote)) == ((void*)0)) {
   if (VAR_1.exit_on_forward_failure)
    FUNC_6("Could not request tunnel forwarding.");
   else
    FUNC_5("Could not request tunnel forwarding.");
  }
 }
}
