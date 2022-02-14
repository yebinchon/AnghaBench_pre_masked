
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_option {scalar_t__ nro_status; scalar_t__ nro_next; } ;
struct nmreq_header {scalar_t__ nr_options; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nmreq_header *VAR_1)
{
 struct nmreq_option *VAR_2;




 for (VAR_2 = (struct nmreq_option *)(uintptr_t)VAR_1->nr_options; VAR_2;
      VAR_2 = (struct nmreq_option *)(uintptr_t)VAR_2->nro_next)
  if (VAR_2->nro_status == VAR_0)
   return VAR_0;

 return 0;
}
