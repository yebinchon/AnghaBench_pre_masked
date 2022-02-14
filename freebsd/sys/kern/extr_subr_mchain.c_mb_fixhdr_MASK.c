
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbchain {TYPE_2__* mb_top; } ;
struct TYPE_3__ {int len; } ;
struct TYPE_4__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (TYPE_2__*) ;

int
FUNC_1(struct mbchain *VAR_0)
{
 return (VAR_0->mb_top->m_pkthdr.len = FUNC_0(VAR_0->mb_top));
}
