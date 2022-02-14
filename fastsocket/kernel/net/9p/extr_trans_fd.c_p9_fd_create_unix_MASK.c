
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct p9_trans_fd {int * conn; } ;
struct p9_client {scalar_t__ trans; } ;
struct TYPE_2__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct p9_trans_fd*) ;
 int * FUNC_4 (struct p9_client*) ;
 int FUNC_5 (struct p9_client*,struct socket*) ;
 int FUNC_6 (int ,int ,int ,struct socket**) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int ,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (struct socket*,struct sockaddr*,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct p9_client *VAR_5, const char *VAR_6, char *VAR_7)
{
 int VAR_8;
 struct socket *VAR_9;
 struct sockaddr_un VAR_10;
 struct p9_trans_fd *VAR_11 = ((void*)0);

 VAR_9 = ((void*)0);

 if (FUNC_9(VAR_6) > VAR_4) {
  FUNC_1(VAR_1, "p9_trans_unix: address too long: %s\n",
   VAR_6);
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_10.sun_family = VAR_2;
 FUNC_8(VAR_10.sun_path, VAR_6);
 FUNC_6(VAR_2, VAR_3, 0, &VAR_9);
 VAR_8 = VAR_9->ops->connect(VAR_9, (struct sockaddr *)&VAR_10,
   sizeof(struct sockaddr_un) - 1, 0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_1,
   "p9_trans_unix: problem connecting socket: %s: %d\n",
   VAR_6, VAR_8);
  goto error;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_9);
 if (VAR_8 < 0)
  goto error;

 VAR_11 = (struct p9_trans_fd *) VAR_5->trans;
 VAR_11->conn = FUNC_4(VAR_5);
 if (FUNC_0(VAR_11->conn)) {
  VAR_8 = FUNC_2(VAR_11->conn);
  VAR_11->conn = ((void*)0);
  goto error;
 }

 return 0;

error:
 if (VAR_9)
  FUNC_7(VAR_9);

 FUNC_3(VAR_11);
 return VAR_8;
}
