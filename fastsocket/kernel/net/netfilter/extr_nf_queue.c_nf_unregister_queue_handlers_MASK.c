
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct nf_queue_handler {int dummy; } ;


 size_t FUNC_0 (struct nf_queue_handler const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nf_queue_handler const** VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct nf_queue_handler const*,int *) ;
 int FUNC_4 () ;

void FUNC_5(const struct nf_queue_handler *VAR_2)
{
 u_int8_t VAR_3;

 FUNC_1(&VAR_1);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   FUNC_3(VAR_0[VAR_3], ((void*)0));
 }
 FUNC_2(&VAR_1);

 FUNC_4();
}
