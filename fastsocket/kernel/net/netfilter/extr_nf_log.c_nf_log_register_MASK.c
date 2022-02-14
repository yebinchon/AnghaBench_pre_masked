
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct nf_logger {int * list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int ,struct nf_logger*) ;
 struct nf_logger* FUNC_6 (int ) ;

int FUNC_7(u_int8_t VAR_6, struct nf_logger *VAR_7)
{
 const struct nf_logger *VAR_8;
 int VAR_9;

 if (VAR_6 >= FUNC_0(VAR_4))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->list); VAR_9++)
  FUNC_1(&VAR_7->list[VAR_9]);

 FUNC_3(&VAR_3);

 if (VAR_6 == VAR_2) {
  for (VAR_9 = VAR_2; VAR_9 < VAR_1; VAR_9++)
   FUNC_2(&(VAR_7->list[VAR_9]), &(VAR_5[VAR_9]));
 } else {

  FUNC_2(&VAR_7->list[VAR_6], &VAR_5[VAR_6]);
  VAR_8 = FUNC_6(VAR_4[VAR_6]);
  if (VAR_8 == ((void*)0))
   FUNC_5(VAR_4[VAR_6], VAR_7);
 }

 FUNC_4(&VAR_3);

 return 0;
}
