
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_flags; int td_data; int td_lolen; int td_hilen; int td_id; } ;
typedef int flex_int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct yytbl_data*) ;
 int FUNC_8 (struct yytbl_data*) ;
 int FUNC_9 (struct yytbl_data*,int) ;
 int FUNC_10 (struct yytbl_data*,int ) ;
 int FUNC_11 (struct yytbl_data*,int,int) ;

void FUNC_12 (struct yytbl_data *VAR_0)
{
 flex_int32_t VAR_1, VAR_2, VAR_3;
 struct yytbl_data VAR_4;

 FUNC_10 (&VAR_4, VAR_0->td_id);
 VAR_4.td_hilen = VAR_0->td_hilen;
 VAR_4.td_lolen = VAR_0->td_lolen;
 VAR_4.td_flags = VAR_0->td_flags;

 VAR_2 = FUNC_7 (VAR_0);


 if (VAR_2 == (int) FUNC_2 (VAR_0->td_flags))

  return;

 if (VAR_2 > (int) FUNC_2 (VAR_0->td_flags)) {
  FUNC_5 (FUNC_3("detected negative compression"));
  return;
 }

 VAR_3 = FUNC_8 (VAR_0);
 VAR_4.td_data = FUNC_4 (VAR_3, VAR_2);
 VAR_4.td_flags =
  FUNC_1 (VAR_4.td_flags) | FUNC_0 (VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
  flex_int32_t VAR_5;

  VAR_5 = FUNC_9 (VAR_0, VAR_1);
  FUNC_11 (&VAR_4, VAR_1, VAR_5);
 }



 FUNC_6 (VAR_0->td_data);
 *VAR_0 = VAR_4;
}
