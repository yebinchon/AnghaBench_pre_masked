
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct TYPE_7__ {int sin_addr; } ;
struct TYPE_6__ {int sk_reuse; } ;
struct TYPE_5__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;} ;


 struct socket* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,struct in_addr*,int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int ,int ,int ,struct socket**) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,struct sockaddr*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static struct socket * FUNC_8(void)
{
 struct socket *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_2("Error during creation of socket; terminating\n");
  return FUNC_0(VAR_6);
 }


 VAR_5->sk->sk_reuse = 1;
 VAR_6 = FUNC_7();
 if (VAR_6 > 0)
  FUNC_3(VAR_5->sk, 0, VAR_6);

 VAR_6 = VAR_5->ops->bind(VAR_5, (struct sockaddr *) &VAR_4,
   sizeof(struct sockaddr));
 if (VAR_6 < 0) {
  FUNC_2("Error binding to the multicast addr\n");
  goto error;
 }


 VAR_6 = FUNC_1(VAR_5->sk,
   (struct in_addr *) &VAR_4.sin_addr,
   VAR_3);
 if (VAR_6 < 0) {
  FUNC_2("Error joining to the multicast group\n");
  goto error;
 }

 return VAR_5;

  error:
 FUNC_5(VAR_5);
 return FUNC_0(VAR_6);
}
