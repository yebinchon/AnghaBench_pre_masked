
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rt_entry {int dummy; } ;
typedef int naddr ;
struct TYPE_8__ {scalar_t__ (* rnh_matchaddr ) (TYPE_2__*,TYPE_3__*) ;} ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;


 TYPE_2__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*) ;

struct rt_entry *
FUNC_1(naddr VAR_2)
{
 VAR_0.sin_addr.s_addr = VAR_2;
 return (struct rt_entry *)VAR_1->rnh_matchaddr(&VAR_0, VAR_1);
}
