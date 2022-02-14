
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_flags; int td_lolen; int* td_data; scalar_t__ td_hilen; } ;
typedef int flex_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct yytbl_data*,int ) ;

__attribute__((used)) static struct yytbl_data *FUNC_3 (void)
{
 struct yytbl_data *VAR_6 = 0;
 flex_int32_t *VAR_7 = 0;
 flex_int32_t VAR_8;

 VAR_6 = (struct yytbl_data *) FUNC_1 (1, sizeof (struct yytbl_data));
 FUNC_2 (VAR_6, VAR_1);
 VAR_6->td_flags = VAR_0 | VAR_2;
 VAR_6->td_hilen = 0;
 VAR_6->td_lolen = VAR_4 * 2 + 1;

 VAR_6->td_data = VAR_7 =
  (flex_int32_t *) FUNC_1 (VAR_6->td_lolen, sizeof (flex_int32_t));

 for (VAR_8 = 0; VAR_8 <= VAR_4 * 2; ++VAR_8)
  VAR_7[VAR_8] = VAR_3[VAR_8];

 FUNC_0 (&VAR_5,
      "\t{YYTD_ID_START_STATE_LIST, (void**)&yy_start_state_list, sizeof(%s)},\n",
      "struct yy_trans_info*");

 return VAR_6;
}
