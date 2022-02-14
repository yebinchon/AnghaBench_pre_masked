
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yytbl_data {int td_flags; int td_lolen; int* td_data; scalar_t__ td_hilen; } ;
typedef int flex_int32_t ;
struct TYPE_2__ {int dfaacc_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct yytbl_data*,int ) ;

__attribute__((used)) static struct yytbl_data *FUNC_5 (void)
{
 int VAR_18;
 struct yytbl_data *VAR_19 = 0;
 flex_int32_t *VAR_20 = 0, VAR_21 = 0;
 int VAR_22 = VAR_13 + 1;

 FUNC_0 (&VAR_17,
      "\t{YYTD_ID_TRANSITION, (void**)&yy_transition, sizeof(%s)},\n",
      ((VAR_16 + VAR_14 + 1) >= VAR_2
       || VAR_12) ? "flex_int32_t" : "flex_int16_t");

 VAR_19 = (struct yytbl_data *) FUNC_1 (1, sizeof (struct yytbl_data));
 FUNC_4 (VAR_19, VAR_4);
 VAR_19->td_flags = VAR_3 | VAR_5;
 VAR_19->td_hilen = 0;
 VAR_19->td_lolen = VAR_16 + VAR_14 + 1;

 VAR_19->td_data = VAR_20 =
  (flex_int32_t *) FUNC_1 (VAR_19->td_lolen * 2, sizeof (flex_int32_t));
 while (VAR_16 + 2 >= VAR_9)
  FUNC_2 ();

 while (VAR_11 + 1 >= VAR_8)
  FUNC_3 ();

 VAR_6[VAR_11 + 1] = VAR_16 + 2;
 VAR_15[VAR_16 + 1] = VAR_22;
 VAR_7[VAR_16 + 1] = VAR_14 + 1;
 VAR_7[VAR_16 + 2] = 1;


 VAR_15[VAR_16 + 2] = 0;




 for (VAR_18 = 0; VAR_18 <= VAR_11; ++VAR_18) {
  int VAR_23 = VAR_10[VAR_18].dfaacc_state;
  int VAR_24 = VAR_6[VAR_18];

  VAR_7[VAR_24] = VAR_1;
  VAR_7[VAR_24 - 1] = VAR_0;
  VAR_15[VAR_24 - 1] = VAR_23;
 }

 for (VAR_18 = 0; VAR_18 <= VAR_16; ++VAR_18) {
  if (VAR_7[VAR_18] == VAR_1) {
   VAR_20[VAR_21++] = 0;
   VAR_20[VAR_21++] = VAR_6[VAR_11 + 1] - VAR_18;
  }

  else if (VAR_7[VAR_18] == VAR_0) {
   VAR_20[VAR_21++] = 0;
   VAR_20[VAR_21++] = VAR_15[VAR_18];
  }

  else if (VAR_7[VAR_18] > VAR_14 || VAR_7[VAR_18] == 0) {
   VAR_20[VAR_21++] = 0;
   VAR_20[VAR_21++] = 0;
  }
  else {

   VAR_20[VAR_21++] = VAR_7[VAR_18];
   VAR_20[VAR_21++] = VAR_6[VAR_15[VAR_18]] - (VAR_18 - VAR_7[VAR_18]);
  }
 }



 VAR_20[VAR_21++] = VAR_7[VAR_16 + 1];
 VAR_20[VAR_21++] = VAR_15[VAR_16 + 1];

 VAR_20[VAR_21++] = VAR_7[VAR_16 + 2];
 VAR_20[VAR_21++] = VAR_15[VAR_16 + 2];

 return VAR_19;
}
