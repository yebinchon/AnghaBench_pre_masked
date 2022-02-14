
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct certificate_copy_options {int out_pass_string; int in_pass_strings; } ;
typedef int * hx509_lock ;
typedef int hx509_certs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int ,int ,int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int,int,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int **) ;
 int FUNC_9 (int *,int *) ;

int
FUNC_10(struct certificate_copy_options *VAR_2, int VAR_3, char **VAR_4)
{
    hx509_certs VAR_5;
    hx509_lock VAR_6, VAR_7 = ((void*)0);
    int VAR_8;

    FUNC_8(VAR_1, &VAR_6);
    FUNC_9(VAR_6, &VAR_2->in_pass_strings);

    if (VAR_2->out_pass_string) {
 FUNC_8(VAR_1, &VAR_7);
 VAR_8 = FUNC_6(VAR_7, VAR_2->out_pass_string);
 if (VAR_8)
     FUNC_0(1, "hx509_lock_command_string: %s: %d",
   VAR_2->out_pass_string, VAR_8);
    }

    VAR_8 = FUNC_3(VAR_1, VAR_4[VAR_3 - 1],
      VAR_0, VAR_6, &VAR_5);
    if (VAR_8)
 FUNC_5(VAR_1, 1, VAR_8, "hx509_certs_init");

    while(VAR_3-- > 1) {
 int VAR_9;
 VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_4[0]);
 if (VAR_9)
     FUNC_5(VAR_1, 1, VAR_9, "hx509_certs_append");
 VAR_4++;
    }

    VAR_8 = FUNC_4(VAR_1, VAR_5, 0, VAR_7);
 if (VAR_8)
     FUNC_5(VAR_1, 1, VAR_8, "hx509_certs_store");

    FUNC_2(&VAR_5);
    FUNC_7(VAR_6);
    FUNC_7(VAR_7);

    return 0;
}
