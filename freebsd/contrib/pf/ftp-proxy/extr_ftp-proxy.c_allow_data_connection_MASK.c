
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct session {scalar_t__ cmd; int id; int port; int proxy_port; int server_ss; int orig_server_ss; int proxy_ss; int client_ss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_1 (int ,struct sockaddr*,struct sockaddr*,int ,struct sockaddr*,int,int) ;
 int FUNC_2 (int ,struct sockaddr*,struct sockaddr*,int ,struct sockaddr*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ,char*,int ,int ,...) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,struct sockaddr*,int ) ;
 scalar_t__ VAR_17 ;
 struct sockaddr* FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;

int
FUNC_13(struct session *VAR_18)
{
 struct sockaddr *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 int VAR_23 = 0;
 VAR_19 = FUNC_10(&VAR_18->client_ss);
 VAR_22 = FUNC_10(&VAR_18->server_ss);
 VAR_21 = FUNC_10(&VAR_18->proxy_ss);
 if (VAR_15)


  VAR_20 = FUNC_10(&VAR_18->orig_server_ss);
 else

  VAR_20 = FUNC_10(&VAR_18->server_ss);


 if (VAR_18->cmd == VAR_3 || VAR_18->cmd == VAR_1) {
  VAR_18->port = FUNC_6(VAR_18->cmd);
  if (VAR_18->port < VAR_9) {
   FUNC_5(VAR_6, "#%d bad port in '%s'", VAR_18->id,
       VAR_16);
   return (0);
  }
  VAR_18->proxy_port = FUNC_7();
  FUNC_5(VAR_8, "#%d passive: client to server port %d"
      " via port %d", VAR_18->id, VAR_18->port, VAR_18->proxy_port);

  if (FUNC_8(VAR_18->id) == -1)
   goto fail;
  VAR_23 = 1;

  FUNC_9(VAR_18->cmd, VAR_20, VAR_18->proxy_port);
  FUNC_5(VAR_7, "#%d proxy: %s", VAR_18->id, VAR_16);



  if (FUNC_2(VAR_18->id, VAR_19, VAR_20, VAR_18->proxy_port,
      VAR_22, VAR_18->port) == -1)
   goto fail;


  if (FUNC_1(VAR_18->id, VAR_19, VAR_22, VAR_18->port, VAR_21,
      VAR_12, VAR_11) == -1)
   goto fail;


  if (FUNC_0(VAR_18->id, VAR_10, VAR_19, VAR_22,
      VAR_18->port) == -1)
   goto fail;


  if (FUNC_0(VAR_18->id, VAR_13, VAR_21, VAR_22,
      VAR_18->port) == -1)
   goto fail;
 }


 if (VAR_18->cmd == VAR_4 || VAR_18->cmd == VAR_0) {
  FUNC_5(VAR_8, "#%d active: server to client port %d"
      " via port %d", VAR_18->id, VAR_18->port, VAR_18->proxy_port);

  if (FUNC_8(VAR_18->id) == -1)
   goto fail;
  VAR_23 = 1;



  if (FUNC_2(VAR_18->id, VAR_22, VAR_21, VAR_18->proxy_port,
      VAR_19, VAR_18->port) == -1)
   goto fail;



  if (VAR_17 && VAR_18->cmd == VAR_4) {

   if (FUNC_1(VAR_18->id, VAR_22, VAR_19, VAR_18->port,
       VAR_20, 20, 20) == -1)
    goto fail;
  } else {

   if (FUNC_1(VAR_18->id, VAR_22, VAR_19, VAR_18->port,
       VAR_20, VAR_12,
       VAR_11) == -1)
        goto fail;
  }


  if (FUNC_0(VAR_18->id, VAR_10, VAR_22, VAR_19, VAR_18->port) ==
      -1)
   goto fail;


  if (FUNC_0(VAR_18->id, VAR_13, VAR_20, VAR_19, VAR_18->port) ==
      -1)
   goto fail;
 }


 if (VAR_23 && (FUNC_3() == -1)) {
  if (VAR_14 != VAR_5)
   goto fail;

  FUNC_12(5000);
  if (FUNC_3() == -1)
   goto fail;
 }

 VAR_18->cmd = VAR_2;
 VAR_18->port = 0;

 return (1);

 fail:
 FUNC_5(VAR_6, "#%d pf operation failed: %s", VAR_18->id, FUNC_11(VAR_14));
 if (VAR_23)
  FUNC_4();
 return (0);
}
