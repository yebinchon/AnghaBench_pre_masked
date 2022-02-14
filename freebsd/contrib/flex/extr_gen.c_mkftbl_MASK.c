
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yytbl_data {int td_lolen; int* td_data; scalar_t__ td_hilen; int td_flags; } ;
typedef int flex_int32_t ;
struct TYPE_2__ {int dfaacc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int ,char*,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct yytbl_data*,int ) ;

struct yytbl_data *FUNC_5 (void)
{
 int VAR_10;
 int VAR_11 = VAR_6 + 1;
 struct yytbl_data *VAR_12;
 flex_int32_t *VAR_13 = 0;

 VAR_12 = (struct yytbl_data *) FUNC_2 (1, sizeof (struct yytbl_data));
 FUNC_4 (VAR_12, VAR_1);
 VAR_12->td_flags |= VAR_0;
 VAR_12->td_hilen = 0;
 VAR_12->td_lolen = VAR_4 + 1;

 VAR_12->td_data = VAR_13 =
  (flex_int32_t *) FUNC_2 (VAR_12->td_lolen, sizeof (flex_int32_t));

 VAR_2[VAR_3].dfaacc_state = VAR_11;

 for (VAR_10 = 1; VAR_10 <= VAR_4; ++VAR_10) {
  int VAR_14 = VAR_2[VAR_10].dfaacc_state;

  VAR_13[VAR_10] = VAR_14;

  if (VAR_8 && VAR_14)
   FUNC_3 (VAR_7, FUNC_0("state # %d accepts: [%d]\n"),
     VAR_10, VAR_14);
 }

 FUNC_1 (&VAR_9,
      "\t{YYTD_ID_ACCEPT, (void**)&yy_accept, sizeof(%s)},\n",
      VAR_5 ? "flex_int32_t" : "flex_int16_t");
 return VAR_12;
}
