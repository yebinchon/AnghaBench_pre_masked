
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct nmreq_option {int dummy; } ;
struct nmreq_header {scalar_t__ nr_options; } ;


 struct nmreq_option** VAR_0 ;

struct nmreq_option *
FUNC_0(struct nmreq_header *VAR_1, uint16_t VAR_2)
{
 struct nmreq_option **VAR_3;

 if (!VAR_1->nr_options)
  return ((void*)0);

 VAR_3 = (struct nmreq_option **)((uintptr_t)VAR_1->nr_options) -
     (VAR_0 + 1);
 return VAR_3[VAR_2];
}
