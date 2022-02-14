
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filters; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct filter_info*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static struct filter_info* FUNC_3(struct rar5* VAR_0) {
 struct filter_info* VAR_1 =
  (struct filter_info*) FUNC_0(1, sizeof(struct filter_info));

 if(!VAR_1) {
  return ((void*)0);
 }

 FUNC_2(&VAR_0->cstate.filters, FUNC_1(VAR_1));
 return VAR_1;
}
