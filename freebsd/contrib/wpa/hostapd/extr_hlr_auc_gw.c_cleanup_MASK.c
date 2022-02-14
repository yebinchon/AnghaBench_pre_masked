
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct milenage_parameters {struct milenage_parameters* next; } ;
struct gsm_triplet {struct gsm_triplet* next; } ;


 int FUNC_0 (scalar_t__) ;
 struct milenage_parameters* VAR_0 ;
 struct milenage_parameters* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct milenage_parameters*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct gsm_triplet *VAR_8, *VAR_9;
 struct milenage_parameters *VAR_10, *VAR_11;

 if (VAR_7 && VAR_2 && VAR_6)
  FUNC_4(VAR_2);

 VAR_8 = VAR_0;
 while (VAR_8) {
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->next;
  FUNC_1(VAR_9);
 }

 VAR_10 = VAR_1;
 while (VAR_10) {
  VAR_11 = VAR_10;
  VAR_10 = VAR_10->next;
  FUNC_1(VAR_11);
 }

 if (VAR_3 >= 0)
  FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_3(VAR_4);







}
