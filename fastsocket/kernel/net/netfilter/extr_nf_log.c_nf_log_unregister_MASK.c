
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nf_logger {int * list; } const nf_logger ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (int ,int *) ;
 struct nf_logger const* FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(struct nf_logger *VAR_2)
{
 const struct nf_logger *VAR_3;
 int VAR_4;

 FUNC_2(&VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_3 = FUNC_5(VAR_1[VAR_4]);
  if (VAR_3 == VAR_2)
   FUNC_4(VAR_1[VAR_4], ((void*)0));
  FUNC_1(&VAR_2->list[VAR_4]);
 }
 FUNC_3(&VAR_0);

 FUNC_6();
}
