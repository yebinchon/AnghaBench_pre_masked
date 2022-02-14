
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; } ;
struct aiocb {TYPE_1__ _aiocb_private; } ;


 int FUNC_0 (int *,long) ;

__attribute__((used)) static int
FUNC_1(struct aiocb *VAR_0, long VAR_1)
{

 return (FUNC_0(&VAR_0->_aiocb_private.error, VAR_1));
}
