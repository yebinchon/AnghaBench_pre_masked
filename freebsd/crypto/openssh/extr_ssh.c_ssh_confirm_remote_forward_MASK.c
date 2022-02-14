
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ssh {int dummy; } ;
struct Forward {char* listen_path; char* listen_host; char* listen_port; int allocated_port; int handle; int connect_port; scalar_t__ connect_host; scalar_t__ connect_path; } ;
struct TYPE_2__ {scalar_t__ num_remote_forwards; scalar_t__ exit_on_forward_failure; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssh*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct ssh *VAR_5, int VAR_6, u_int32_t VAR_7, void *VAR_8)
{
 struct Forward *VAR_9 = (struct Forward *)VAR_8;


 FUNC_1("remote forward %s for: listen %s%s%d, connect %s:%d",
     VAR_6 == VAR_1 ? "success" : "failure",
     VAR_9->listen_path ? VAR_9->listen_path :
     VAR_9->listen_host ? VAR_9->listen_host : "",
     (VAR_9->listen_path || VAR_9->listen_host) ? ":" : "",
     VAR_9->listen_port, VAR_9->connect_path ? VAR_9->connect_path :
     VAR_9->connect_host, VAR_9->connect_port);
 if (VAR_9->listen_path == ((void*)0) && VAR_9->listen_port == 0) {
  if (VAR_6 == VAR_1) {
   VAR_9->allocated_port = FUNC_5();
   FUNC_4("Allocated port %u for remote forward to %s:%d",
       VAR_9->allocated_port,
       VAR_9->connect_host, VAR_9->connect_port);
   FUNC_0(VAR_5,
       VAR_9->handle, VAR_9->allocated_port);
  } else {
   FUNC_0(VAR_5, VAR_9->handle, -1);
  }
 }

 if (VAR_6 == VAR_0) {
  if (VAR_3.exit_on_forward_failure) {
   if (VAR_9->listen_path != ((void*)0))
    FUNC_2("Error: remote port forwarding failed "
        "for listen path %s", VAR_9->listen_path);
   else
    FUNC_2("Error: remote port forwarding failed "
        "for listen port %d", VAR_9->listen_port);
  } else {
   if (VAR_9->listen_path != ((void*)0))
    FUNC_4("Warning: remote port forwarding failed "
        "for listen path %s", VAR_9->listen_path);
   else
    FUNC_4("Warning: remote port forwarding failed "
        "for listen port %d", VAR_9->listen_port);
  }
 }
 if (++VAR_4 == VAR_3.num_remote_forwards) {
  FUNC_1("All remote forwarding requests processed");
  if (VAR_2)
   FUNC_3();
 }
}
