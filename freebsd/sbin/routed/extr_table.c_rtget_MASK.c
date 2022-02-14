
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rt_entry {scalar_t__ rt_dst; scalar_t__ rt_mask; } ;
typedef scalar_t__ naddr ;
struct TYPE_14__ {scalar_t__ (* rnh_lookup ) (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_13__ {TYPE_2__ sin_addr; } ;
struct TYPE_10__ {scalar_t__ s_addr; } ;
struct TYPE_12__ {TYPE_1__ sin_addr; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;

struct rt_entry *
FUNC_3(naddr VAR_3, naddr VAR_4)
{
 struct rt_entry *VAR_5;

 VAR_0.sin_addr.s_addr = VAR_3;
 VAR_1.sin_addr.s_addr = FUNC_0(VAR_4);
 FUNC_1(&VAR_1);
 VAR_5 = (struct rt_entry *)VAR_2->rnh_lookup(&VAR_0,&VAR_1,VAR_2);
 if (!VAR_5
     || VAR_5->rt_dst != VAR_3
     || VAR_5->rt_mask != VAR_4)
  return 0;

 return VAR_5;
}
