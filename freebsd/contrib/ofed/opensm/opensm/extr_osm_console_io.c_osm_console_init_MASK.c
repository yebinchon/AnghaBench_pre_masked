
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
struct TYPE_7__ {int console_port; int console; } ;
typedef TYPE_2__ osm_subn_opt_t ;
typedef int osm_log_t ;
struct TYPE_8__ {int socket; int in_fd; int out_fd; int * out; int * in; int client_type; } ;
typedef TYPE_3__ osm_console_t ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_13 ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;

int FUNC_13(osm_subn_opt_t * VAR_16, osm_console_t * VAR_17, osm_log_t * VAR_18)
{
 VAR_17->socket = -1;
 FUNC_12(VAR_17->client_type, VAR_16->console, sizeof(VAR_17->client_type));


 if (FUNC_10(VAR_16->console, VAR_3) == 0) {
  VAR_17->in = VAR_14;
  VAR_17->out = VAR_15;
  VAR_17->in_fd = FUNC_2(VAR_14);
  VAR_17->out_fd = FUNC_2(VAR_15);

  FUNC_6(VAR_17->out);
 }

 return 0;
}
