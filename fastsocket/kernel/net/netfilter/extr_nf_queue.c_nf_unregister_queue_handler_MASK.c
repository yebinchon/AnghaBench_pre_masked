
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct nf_queue_handler {int dummy; } ;


 size_t FUNC_0 (struct nf_queue_handler const**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nf_queue_handler const** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nf_queue_handler const*,int *) ;
 int FUNC_4 () ;

int FUNC_5(u_int8_t VAR_3, const struct nf_queue_handler *VAR_4)
{
 if (VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_2);
 if (VAR_1[VAR_3] && VAR_1[VAR_3] != VAR_4) {
  FUNC_2(&VAR_2);
  return -VAR_0;
 }

 FUNC_3(VAR_1[VAR_3], ((void*)0));
 FUNC_2(&VAR_2);

 FUNC_4();

 return 0;
}
