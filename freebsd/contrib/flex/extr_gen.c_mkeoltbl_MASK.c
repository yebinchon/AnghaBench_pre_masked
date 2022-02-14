
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_lolen; int* td_data; int td_flags; } ;
typedef int flex_int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct yytbl_data*,int ) ;

__attribute__((used)) static struct yytbl_data *FUNC_3 (void)
{
 int VAR_5;
 flex_int8_t *VAR_6 = 0;
 struct yytbl_data *VAR_7;

 VAR_7 = (struct yytbl_data *) FUNC_1 (1, sizeof (struct yytbl_data));
 FUNC_2 (VAR_7, VAR_1);
 VAR_7->td_flags = VAR_0;
 VAR_7->td_lolen = VAR_2 + 1;
 VAR_7->td_data = VAR_6 =
  (flex_int8_t *) FUNC_1 (VAR_7->td_lolen, sizeof (flex_int8_t));

 for (VAR_5 = 1; VAR_5 <= VAR_2; VAR_5++)
  VAR_6[VAR_5] = VAR_3[VAR_5] ? 1 : 0;

 FUNC_0 (&VAR_4,
      "\t{YYTD_ID_RULE_CAN_MATCH_EOL, (void**)&yy_rule_can_match_eol, sizeof(%s)},\n",
      "flex_int32_t");
 return VAR_7;
}
