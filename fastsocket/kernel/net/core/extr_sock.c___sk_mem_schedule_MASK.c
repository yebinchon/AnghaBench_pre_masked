
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_forward_alloc; scalar_t__ sk_type; scalar_t__ sk_wmem_queued; scalar_t__ sk_sndbuf; int sk_rmem_alloc; int sk_wmem_alloc; struct proto* sk_prot; } ;
struct proto {int* sysctl_mem; scalar_t__* sysctl_rmem; scalar_t__* sysctl_wmem; int memory_allocated; int sockets_allocated; scalar_t__* memory_pressure; int (* enter_memory_pressure ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct proto*,int) ;

int FUNC_8(struct sock *VAR_4, int VAR_5, int VAR_6)
{
 struct proto *VAR_7 = VAR_4->sk_prot;
 int VAR_8 = FUNC_4(VAR_5);
 int VAR_9;

 VAR_4->sk_forward_alloc += VAR_8 * VAR_0;
 VAR_9 = FUNC_0(VAR_8, VAR_7->memory_allocated);


 if (VAR_9 <= VAR_7->sysctl_mem[0]) {
  if (VAR_7->memory_pressure && *VAR_7->memory_pressure)
   *VAR_7->memory_pressure = 0;
  return 1;
 }


 if (VAR_9 > VAR_7->sysctl_mem[1])
  if (VAR_7->enter_memory_pressure)
   VAR_7->enter_memory_pressure(VAR_4);


 if (VAR_9 > VAR_7->sysctl_mem[2])
  goto suppress_allocation;


 if (VAR_6 == VAR_1) {
  if (FUNC_1(&VAR_4->sk_rmem_alloc) < VAR_7->sysctl_rmem[0])
   return 1;
 } else {
  if (VAR_4->sk_type == VAR_3) {
   if (VAR_4->sk_wmem_queued < VAR_7->sysctl_wmem[0])
    return 1;
  } else if (FUNC_1(&VAR_4->sk_wmem_alloc) <
      VAR_7->sysctl_wmem[0])
    return 1;
 }

 if (VAR_7->memory_pressure) {
  int VAR_10;

  if (!*VAR_7->memory_pressure)
   return 1;
  VAR_10 = FUNC_3(VAR_7->sockets_allocated);
  if (VAR_7->sysctl_mem[2] > VAR_10 *
      FUNC_4(VAR_4->sk_wmem_queued +
     FUNC_1(&VAR_4->sk_rmem_alloc) +
     VAR_4->sk_forward_alloc))
   return 1;
 }

suppress_allocation:

 if (VAR_6 == VAR_2 && VAR_4->sk_type == VAR_3) {
  FUNC_5(VAR_4);




  if (VAR_4->sk_wmem_queued + VAR_5 >= VAR_4->sk_sndbuf)
   return 1;
 }

 FUNC_7(VAR_4, VAR_7, VAR_9);


 VAR_4->sk_forward_alloc -= VAR_8 * VAR_0;
 FUNC_2(VAR_8, VAR_7->memory_allocated);
 return 0;
}
