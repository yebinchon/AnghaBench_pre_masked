
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ security; } ;
struct msg_queue {TYPE_1__ q_perm; } ;



__attribute__((used)) static char *FUNC_0(struct msg_queue *VAR_0)
{
 return (char *)VAR_0->q_perm.security;
}
