
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_calls {int (* getsockname ) (int,int *,int*) ;int (* socket ) (int,int ,int ) ;int (* close ) (int) ;} ;
struct sockaddr_in6 {int dummy; } ;
typedef int socklen_t ;
typedef enum fd_type { ____Placeholder_fd_type } fd_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,struct socket_calls*,struct socket_calls*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int,int,int ) ;
 struct socket_calls VAR_5 ;
 struct socket_calls VAR_6 ;
 int FUNC_3 (int,int *,int*) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_7, enum fd_type VAR_8)
{
 socklen_t VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 struct socket_calls *VAR_14, *VAR_15;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_8 == VAR_4) {
  VAR_15 = &VAR_6;
  VAR_14 = &VAR_5;
 } else {
  VAR_15 = &VAR_5;
  VAR_14 = &VAR_6;
 }

 VAR_13 = VAR_14->getsockname(VAR_10, ((void*)0), &VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_12 = (VAR_9 == sizeof(struct sockaddr_in6)) ? VAR_1 : VAR_0;
 VAR_11 = VAR_15->socket(VAR_12, VAR_2, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_13 = FUNC_0(VAR_11, VAR_10, VAR_15, VAR_14);
 if (VAR_13)
  goto err;

 FUNC_2(VAR_7, VAR_11, VAR_8, VAR_3);
 return VAR_11;

err:
 VAR_15->close(VAR_11);
 return VAR_13;
}
