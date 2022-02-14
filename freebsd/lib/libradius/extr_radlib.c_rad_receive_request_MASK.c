
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct rad_handle {scalar_t__ type; int srv; int in_len; int* in; int num_servers; int in_pos; TYPE_4__* servers; int fd; } ;
typedef int socklen_t ;
typedef int from ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_8__ {TYPE_3__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rad_handle*,char*,...) ;
 scalar_t__ FUNC_1 (struct rad_handle*) ;
 int FUNC_2 (int ,int*,int ,int ,struct sockaddr*,int*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct rad_handle *VAR_7)
{
 struct sockaddr_in VAR_8;
 socklen_t VAR_9;
 int VAR_10;

 if (VAR_7->type != VAR_5) {
  FUNC_0(VAR_7, "denied function call");
  return (-1);
 }
 VAR_7->srv = -1;
 VAR_9 = sizeof(VAR_8);
 VAR_7->in_len = FUNC_2(VAR_7->fd, VAR_7->in,
     VAR_0, VAR_1, (struct sockaddr *)&VAR_8, &VAR_9);
 if (VAR_7->in_len == -1) {
  FUNC_0(VAR_7, "recvfrom: %s", FUNC_3(VAR_6));
  return (-1);
 }
 for (VAR_10 = 0; VAR_10 < VAR_7->num_servers; VAR_10++) {
  if (VAR_7->servers[VAR_10].addr.sin_addr.s_addr == VAR_8.sin_addr.s_addr) {
   VAR_7->servers[VAR_10].addr.sin_port = VAR_8.sin_port;
   VAR_7->srv = VAR_10;
   break;
  }
 }
 if (VAR_7->srv == -1)
  return (-2);
 if (FUNC_1(VAR_7)) {
  VAR_7->in_len = VAR_7->in[VAR_4] << 8 |
      VAR_7->in[VAR_4+1];
  VAR_7->in_pos = VAR_2;
  return (VAR_7->in[VAR_3]);
 }
 return (-3);
}
