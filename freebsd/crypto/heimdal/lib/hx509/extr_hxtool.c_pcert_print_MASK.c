
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_s {int verbose; scalar_t__ counter; } ;
struct print_options {scalar_t__ info_flag; scalar_t__ never_fail_flag; int pass_strings; int content_flag; } ;
typedef int hx509_lock ;
typedef int hx509_certs ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,struct print_s*) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_1 ;
 int FUNC_8 (char*,int) ;

int
FUNC_9(struct print_options *VAR_2, int VAR_3, char **VAR_4)
{
    hx509_certs VAR_5;
    hx509_lock VAR_6;
    struct print_s VAR_7;

    VAR_7.counter = 0;
    VAR_7.verbose = VAR_2->content_flag;

    FUNC_6(VAR_0, &VAR_6);
    FUNC_7(VAR_6, &VAR_2->pass_strings);

    while(VAR_3--) {
 int VAR_8;
 VAR_8 = FUNC_2(VAR_0, VAR_4[0], 0, VAR_6, &VAR_5);
 if (VAR_8) {
     if (VAR_2->never_fail_flag) {
  FUNC_8("ignoreing failure: %d\n", VAR_8);
  continue;
     }
     FUNC_4(VAR_0, 1, VAR_8, "hx509_certs_init");
 }
 if (VAR_2->info_flag)
     FUNC_1(VAR_0, VAR_5, ((void*)0), ((void*)0));
 FUNC_3(VAR_0, VAR_5, VAR_1, &VAR_7);
 FUNC_0(&VAR_5);
 VAR_4++;
    }

    FUNC_5(VAR_6);

    return 0;
}
