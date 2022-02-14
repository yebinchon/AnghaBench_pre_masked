
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggd_connection {int c_sendfd; int c_recvfd; } ;



__attribute__((used)) static int
FUNC_0(struct ggd_connection *VAR_0)
{

 return (VAR_0->c_sendfd != -1 && VAR_0->c_recvfd != -1);
}
