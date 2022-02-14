
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* ops; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct p9_trans_fd {int * conn; } ;
struct p9_fd_opts {int port; } ;
struct p9_client {scalar_t__ trans; } ;
struct TYPE_4__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct p9_trans_fd*) ;
 int * FUNC_6 (struct p9_client*) ;
 int FUNC_7 (struct p9_client*,struct socket*) ;
 int FUNC_8 (char*,struct p9_fd_opts*) ;
 int FUNC_9 (int ,int ,int ,struct socket**) ;
 int FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*,struct sockaddr*,int,int ) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static int
FUNC_13(struct p9_client *VAR_7, const char *VAR_8, char *VAR_9)
{
 int VAR_10;
 struct socket *VAR_11;
 struct sockaddr_in VAR_12;
 struct p9_fd_opts VAR_13;
 struct p9_trans_fd *VAR_14 = ((void*)0);

 VAR_10 = FUNC_8(VAR_9, &VAR_13);
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_12(VAR_8) < 0)
  return -VAR_1;

 VAR_11 = ((void*)0);

 VAR_12.sin_family = VAR_0;
 VAR_12.sin_addr.s_addr = FUNC_4(VAR_8);
 VAR_12.sin_port = FUNC_3(VAR_13.port);
 FUNC_9(VAR_5, VAR_6, VAR_3, &VAR_11);

 if (!VAR_11) {
  FUNC_1(VAR_4, "p9_trans_tcp: problem creating socket\n");
  VAR_10 = -VAR_2;
  goto error;
 }

 VAR_10 = VAR_11->ops->connect(VAR_11,
        (struct sockaddr *)&VAR_12,
        sizeof(struct sockaddr_in), 0);
 if (VAR_10 < 0) {
  FUNC_1(VAR_4,
   "p9_trans_tcp: problem connecting socket to %s\n",
   VAR_8);
  goto error;
 }

 VAR_10 = FUNC_7(VAR_7, VAR_11);
 if (VAR_10 < 0)
  goto error;

 VAR_14 = (struct p9_trans_fd *) VAR_7->trans;
 VAR_14->conn = FUNC_6(VAR_7);
 if (FUNC_0(VAR_14->conn)) {
  VAR_10 = FUNC_2(VAR_14->conn);
  VAR_14->conn = ((void*)0);
  goto error;
 }

 return 0;

error:
 if (VAR_11)
  FUNC_10(VAR_11);

 FUNC_5(VAR_14);

 return VAR_10;
}
