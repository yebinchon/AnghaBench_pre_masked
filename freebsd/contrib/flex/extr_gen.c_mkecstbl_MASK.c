
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yytbl_data {int td_lolen; int * td_data; scalar_t__ td_hilen; int td_flags; } ;
typedef int flex_int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct yytbl_data*,int ) ;

__attribute__((used)) static struct yytbl_data *FUNC_4 (void)
{
 int VAR_5;
 struct yytbl_data *VAR_6 = 0;
 flex_int32_t *VAR_7 = 0;

 VAR_6 = (struct yytbl_data *) FUNC_2 (1, sizeof (struct yytbl_data));
 FUNC_3 (VAR_6, VAR_1);
 VAR_6->td_flags |= VAR_0;
 VAR_6->td_hilen = 0;
 VAR_6->td_lolen = VAR_2;

 VAR_6->td_data = VAR_7 =
  (flex_int32_t *) FUNC_2 (VAR_6->td_lolen, sizeof (flex_int32_t));

 for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
  VAR_3[VAR_5] = FUNC_0 (VAR_3[VAR_5]);
  VAR_7[VAR_5] = VAR_3[VAR_5];
 }

 FUNC_1 (&VAR_4,
      "\t{YYTD_ID_EC, (void**)&yy_ec, sizeof(%s)},\n",
      "flex_int32_t");

 return VAR_6;
}
