
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_mtdtor_param {TYPE_1__* match; int family; int matchinfo; } ;
struct TYPE_5__ {TYPE_1__* match; } ;
struct TYPE_6__ {TYPE_2__ kernel; } ;
struct ipt_entry_match {int data; TYPE_3__ u; } ;
struct TYPE_4__ {int me; int (* destroy ) (struct xt_mtdtor_param*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xt_mtdtor_param*) ;

__attribute__((used)) static int
FUNC_2(struct ipt_entry_match *VAR_1, unsigned int *VAR_2)
{
 struct xt_mtdtor_param VAR_3;

 if (VAR_2 && (*VAR_2)-- == 0)
  return 1;

 VAR_3.match = VAR_1->u.kernel.match;
 VAR_3.matchinfo = VAR_1->data;
 VAR_3.family = VAR_0;
 if (VAR_3.match->destroy != ((void*)0))
  VAR_3.match->destroy(&VAR_3);
 FUNC_0(VAR_3.match->me);
 return 0;
}
