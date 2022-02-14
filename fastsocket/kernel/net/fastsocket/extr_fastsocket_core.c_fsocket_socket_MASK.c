
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_alloc {int dummy; } ;
struct socket {int type; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {int net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*) ;
 struct socket* FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct socket_alloc*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (int ,struct socket*,int ,int ) ;
 int FUNC_8 (struct socket*,int ,int ,int ,int ) ;

int FUNC_9(int VAR_9)
{
 struct socket *VAR_10;
 int VAR_11;

 int VAR_12 = 0;

 if (VAR_9 & ~(VAR_5 | VAR_6)) {
  FUNC_0(VAR_2, "Unsupported Socket Flags For Fastsocket\n");
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_3();
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_2, "Allocate New Socket failed\n");
  VAR_12 = -VAR_1;
  goto out;
 }

 VAR_10->type = VAR_7;

 VAR_12 = FUNC_7(VAR_8->nsproxy->net_ns, VAR_10, 0, 0);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, "Initialize Inet Socket failed\n");
  goto free_sock;
 }

 FUNC_6(VAR_10);

 VAR_11 = FUNC_1(VAR_10, VAR_9);
 if (VAR_11 < 0) {
  VAR_12 = VAR_11;
  FUNC_0(VAR_2, "Map Socket FD failed\n");
  goto release_sock;
 }

 VAR_12 = FUNC_8(VAR_10, VAR_4, VAR_7, VAR_3, 0);
 if (VAR_12) {
  FUNC_0(VAR_2, "security_socket_post_create failed\n");
  FUNC_4(VAR_11);
  return VAR_12;
 }

 return VAR_11;

release_sock:
 FUNC_2(VAR_10);
free_sock:
 FUNC_5((struct socket_alloc*)VAR_10);
out:
 return VAR_12;
}
