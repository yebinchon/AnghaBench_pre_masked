
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_port; } ;
union socket_addr {TYPE_1__ sin; int sa; } ;
struct sockaddr {int sa_family; } ;
struct rsocket {int udp_sock; } ;
typedef int socklen_t ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 int FUNC_2 (int,int *,int*) ;
 int FUNC_3 (union socket_addr*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rsocket *VAR_1,
      const struct sockaddr *VAR_2, socklen_t VAR_3,
      union socket_addr *VAR_4, socklen_t *VAR_5)
{
 int VAR_6, VAR_7;
 __be16 VAR_8;

 *VAR_5 = sizeof(*VAR_4);
 VAR_7 = FUNC_2(VAR_1->udp_sock, &VAR_4->sa, VAR_5);
 if (VAR_7 || !FUNC_3(VAR_4))
  return VAR_7;

 VAR_8 = VAR_4->sin.sin_port;
 VAR_6 = FUNC_4(VAR_2->sa_family, VAR_0, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3);
 if (VAR_7)
  goto out;

 *VAR_5 = sizeof(*VAR_4);
 VAR_7 = FUNC_2(VAR_6, &VAR_4->sa, VAR_5);
 VAR_4->sin.sin_port = VAR_8;
out:
 FUNC_0(VAR_6);
 return VAR_7;
}
