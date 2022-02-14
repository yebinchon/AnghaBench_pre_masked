
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct local_zone {int data; } ;
struct local_data {int * rrsets; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int **,size_t*) ;
 scalar_t__ FUNC_2 (struct local_data*) ;
 struct local_data* FUNC_3 (struct local_zone*,int *,size_t,int) ;
 int FUNC_4 (int *,struct local_data*) ;

__attribute__((used)) static void
FUNC_5(struct local_zone* VAR_0, struct local_data* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, int VAR_4)
{
 while(VAR_1 && VAR_1->rrsets == ((void*)0) && FUNC_2(VAR_1)) {


  (void)FUNC_4(&VAR_0->data, VAR_1);


  if(FUNC_0(VAR_2))
   return;
  FUNC_1(&VAR_2, &VAR_3);
  VAR_4--;
  VAR_1 = FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4);
 }
}
