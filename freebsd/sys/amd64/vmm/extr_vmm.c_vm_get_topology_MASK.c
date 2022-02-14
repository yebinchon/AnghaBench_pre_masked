
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vm {int maxcpus; int threads; int cores; int sockets; } ;



void
FUNC_0(struct vm *VAR_0, uint16_t *VAR_1, uint16_t *VAR_2,
    uint16_t *VAR_3, uint16_t *VAR_4)
{
 *VAR_1 = VAR_0->sockets;
 *VAR_2 = VAR_0->cores;
 *VAR_3 = VAR_0->threads;
 *VAR_4 = VAR_0->maxcpus;
}
