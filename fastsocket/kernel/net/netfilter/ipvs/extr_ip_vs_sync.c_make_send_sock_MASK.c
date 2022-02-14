
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; int sk; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 struct socket* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct socket*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int ,int ,struct socket**) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,struct sockaddr*,int,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static struct socket * FUNC_11(void)
{
 struct socket *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_2("Error during creation of socket; terminating\n");
  return FUNC_0(VAR_6);
 }

 VAR_6 = FUNC_3(VAR_5->sk, VAR_3);
 if (VAR_6 < 0) {
  FUNC_2("Error setting outbound mcast interface\n");
  goto error;
 }

 FUNC_4(VAR_5->sk, 0);
 FUNC_5(VAR_5->sk, 1);
 VAR_6 = FUNC_10();
 if (VAR_6 > 0)
  FUNC_6(VAR_5->sk, 1, VAR_6);

 VAR_6 = FUNC_1(VAR_5, VAR_3);
 if (VAR_6 < 0) {
  FUNC_2("Error binding address of the mcast interface\n");
  goto error;
 }

 VAR_6 = VAR_5->ops->connect(VAR_5, (struct sockaddr *) &VAR_4,
   sizeof(struct sockaddr), 0);
 if (VAR_6 < 0) {
  FUNC_2("Error connecting to the multicast addr\n");
  goto error;
 }

 return VAR_5;

  error:
 FUNC_8(VAR_5);
 return FUNC_0(VAR_6);
}
