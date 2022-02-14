
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct vm {scalar_t__ maxcpus; scalar_t__ threads; scalar_t__ cores; scalar_t__ sockets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct vm *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
    uint16_t VAR_5, uint16_t VAR_6)
{
 if (VAR_6 != 0)
  return (VAR_0);
 if ((VAR_3 * VAR_4 * VAR_5) > VAR_2->maxcpus)
  return (VAR_0);

 VAR_2->sockets = VAR_3;
 VAR_2->cores = VAR_4;
 VAR_2->threads = VAR_5;
 VAR_2->maxcpus = VAR_1;
 return(0);
}
