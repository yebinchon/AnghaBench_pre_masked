
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ udp_sock; scalar_t__ epfd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_1, int VAR_2)
{
 VAR_1->udp_sock = FUNC_1(VAR_2, VAR_0, 0);
 if (VAR_1->udp_sock < 0)
  return VAR_1->udp_sock;

 VAR_1->epfd = FUNC_0(2);
 if (VAR_1->epfd < 0)
  return VAR_1->epfd;

 return 0;
}
