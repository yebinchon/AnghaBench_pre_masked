
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_data ;
struct socket {struct sock* sk; } ;
struct sockaddr_iucv {int siucv_user_id; int siucv_name; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct iucv_sock {int * path; int msglimit; int src_name; } ;
struct TYPE_2__ {int (* path_connect ) (int *,int *,int ,int *,unsigned char*,struct sock*) ;} ;


 int FUNC_0 (unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned char*,int ) ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct iucv_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (unsigned char*,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_6 (int *,int *,int ,int *,unsigned char*,struct sock*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_9, struct sockaddr *VAR_10)
{
 struct sockaddr_iucv *VAR_11 = (struct sockaddr_iucv *) VAR_10;
 struct sock *VAR_12 = VAR_9->sk;
 struct iucv_sock *VAR_13 = FUNC_4(VAR_12);
 unsigned char VAR_14[16];
 int VAR_15;

 FUNC_1(VAR_14, VAR_11->siucv_name);
 FUNC_5(VAR_14, VAR_13->src_name);
 FUNC_0(VAR_14, sizeof(VAR_14));


 VAR_13->path = FUNC_2(VAR_13->msglimit,
         VAR_6, VAR_5);
 if (!VAR_13->path) {
  VAR_15 = -VAR_4;
  goto done;
 }
 VAR_15 = VAR_8->path_connect(VAR_13->path, &VAR_7,
        VAR_11->siucv_user_id, ((void*)0), VAR_14,
        VAR_12);
 if (VAR_15) {
  FUNC_3(VAR_13->path);
  VAR_13->path = ((void*)0);
  switch (VAR_15) {
  case 0x0b:
   VAR_15 = -VAR_3;
   break;
  case 0x0d:
  case 0x0e:
   VAR_15 = -VAR_1;
   break;
  case 0x0f:
   VAR_15 = -VAR_0;
   break;
  default:
   VAR_15 = -VAR_2;
   break;
  }
 }
done:
 return VAR_15;
}
