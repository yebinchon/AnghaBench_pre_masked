
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_options {scalar_t__ verbose_flag; scalar_t__ v5_flag; scalar_t__ tokens_flag; int hidden_flag; int flags_flag; int cache_string; scalar_t__ all_content_flag; scalar_t__ list_all_flag; scalar_t__ s_flag; scalar_t__ test_flag; scalar_t__ n_flag; scalar_t__ a_flag; } ;
typedef int krb5_error_code ;
typedef int krb5_ccache ;
typedef int krb5_cc_cache_cursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int,int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int,int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

int
FUNC_11(struct klist_options *VAR_1, int VAR_2, char **VAR_3)
{
    krb5_error_code VAR_4;
    int VAR_5 = 0;

    int VAR_6 =
 VAR_1->verbose_flag ||
 VAR_1->a_flag ||
 VAR_1->n_flag;
    int VAR_7 =
 VAR_1->test_flag ||
 VAR_1->s_flag;

    if (VAR_1->list_all_flag) {
 VAR_5 = FUNC_9(VAR_0);
 return VAR_5;
    }

    if (VAR_1->v5_flag) {
 krb5_ccache VAR_8;

 if (VAR_1->all_content_flag) {
     krb5_cc_cache_cursor VAR_9;

     VAR_4 = FUNC_4(VAR_0, ((void*)0), &VAR_9);
     if (VAR_4)
  FUNC_8(VAR_0, 1, VAR_4, "krb5_cc_cache_get_first");


     while (FUNC_5(VAR_0, VAR_9, &VAR_8) == 0) {
  VAR_5 |= FUNC_1(VAR_0, VAR_8, VAR_7,
       VAR_6, VAR_1->flags_flag,
       VAR_1->hidden_flag);
  FUNC_10("\n\n");
     }
     FUNC_3(VAR_0, VAR_9);

 } else {
     if(VAR_1->cache_string) {
  VAR_4 = FUNC_7(VAR_0, VAR_1->cache_string, &VAR_8);
  if (VAR_4)
      FUNC_8(VAR_0, 1, VAR_4, "%s", VAR_1->cache_string);
     } else {
  VAR_4 = FUNC_6(VAR_0, &VAR_8);
  if (VAR_4)
      FUNC_8(VAR_0, 1, VAR_4, "krb5_cc_resolve");
     }
     VAR_5 = FUNC_1(VAR_0, VAR_8, VAR_7,
         VAR_6, VAR_1->flags_flag,
         VAR_1->hidden_flag);
 }
    }

    if (!VAR_7) {

 if (VAR_1->tokens_flag && FUNC_2()) {
     if (VAR_1->v5_flag)
  FUNC_10("\n");
     FUNC_0(VAR_1->verbose_flag);
 }

    }

    return VAR_5;
}
