
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_forward_alloc; struct proto* sk_prot; } ;
struct proto {scalar_t__* sysctl_mem; scalar_t__* memory_pressure; int memory_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct sock *VAR_2)
{
 struct proto *VAR_3 = VAR_2->sk_prot;

 FUNC_1(VAR_2->sk_forward_alloc >> VAR_1,
     VAR_3->memory_allocated);
 VAR_2->sk_forward_alloc &= VAR_0 - 1;

 if (VAR_3->memory_pressure && *VAR_3->memory_pressure &&
     (FUNC_0(VAR_3->memory_allocated) < VAR_3->sysctl_mem[0]))
  *VAR_3->memory_pressure = 0;
}
