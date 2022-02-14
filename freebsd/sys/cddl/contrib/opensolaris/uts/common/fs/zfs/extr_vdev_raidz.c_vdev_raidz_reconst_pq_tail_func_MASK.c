
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct reconst_pq_struct {int* p; int* q; int* pxy; int* qxy; int bexp; int aexp; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 struct reconst_pq_struct *VAR_3 = VAR_2;
 uint8_t *VAR_4 = VAR_0;

 for (int VAR_5 = 0; VAR_5 < VAR_1;
     VAR_5++, VAR_3->p++, VAR_3->q++, VAR_3->pxy++, VAR_3->qxy++, VAR_4++) {

  *VAR_4 = FUNC_0(*VAR_3->p ^ *VAR_3->pxy, VAR_3->aexp) ^
      FUNC_0(*VAR_3->q ^ *VAR_3->qxy, VAR_3->bexp);
 }

 return (0);
}
