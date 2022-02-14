
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct aiocb {TYPE_1__ _aiocb_private; } ;


 long FUNC_0 (int *) ;

__attribute__((used)) static long
FUNC_1(struct aiocb *VAR_0)
{

 return (FUNC_0(&VAR_0->_aiocb_private.status));
}
