
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct nf_queue_handler {int dummy; } ;


 size_t FUNC_0 (struct nf_queue_handler const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nf_queue_handler const** VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nf_queue_handler const*,struct nf_queue_handler const*) ;

int FUNC_4(u_int8_t VAR_5, const struct nf_queue_handler *VAR_6)
{
 int VAR_7;

 if (VAR_5 >= FUNC_0(VAR_3))
  return -VAR_2;

 FUNC_1(&VAR_4);
 if (VAR_3[VAR_5] == VAR_6)
  VAR_7 = -VAR_1;
 else if (VAR_3[VAR_5])
  VAR_7 = -VAR_0;
 else {
  FUNC_3(VAR_3[VAR_5], VAR_6);
  VAR_7 = 0;
 }
 FUNC_2(&VAR_4);

 return VAR_7;
}
