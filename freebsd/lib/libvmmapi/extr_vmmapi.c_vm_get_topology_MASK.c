
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmctx {int fd; } ;
struct vm_cpu_topology {int maxcpus; int threads; int cores; int sockets; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_cpu_topology*,int) ;
 int FUNC_1 (int ,int ,struct vm_cpu_topology*) ;

int
FUNC_2(struct vmctx *VAR_1,
    uint16_t *VAR_2, uint16_t *VAR_3, uint16_t *VAR_4, uint16_t *VAR_5)
{
 struct vm_cpu_topology VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, sizeof (struct vm_cpu_topology));
 VAR_7 = FUNC_1(VAR_1->fd, VAR_0, &VAR_6);
 if (VAR_7 == 0) {
  *VAR_2 = VAR_6.sockets;
  *VAR_3 = VAR_6.cores;
  *VAR_4 = VAR_6.threads;
  *VAR_5 = VAR_6.maxcpus;
 }
 return (VAR_7);
}
