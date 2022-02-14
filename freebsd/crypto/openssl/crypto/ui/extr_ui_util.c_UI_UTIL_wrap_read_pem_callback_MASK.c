
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_password_cb_data {int rwflag; int * cb; } ;
typedef int pem_password_cb ;
typedef int UI_METHOD ;


 int FUNC_0 (struct pem_password_cb_data*) ;
 struct pem_password_cb_data* FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,struct pem_password_cb_data*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

UI_METHOD *FUNC_10(pem_password_cb *VAR_7, int VAR_8)
{
    struct pem_password_cb_data *VAR_9 = ((void*)0);
    UI_METHOD *VAR_10 = ((void*)0);

    if ((VAR_9 = FUNC_1(sizeof(*VAR_9))) == ((void*)0)
        || (VAR_10 = FUNC_3("PEM password callback wrapper")) == ((void*)0)
        || FUNC_7(VAR_10, VAR_4) < 0
        || FUNC_8(VAR_10, VAR_5) < 0
        || FUNC_9(VAR_10, VAR_6) < 0
        || FUNC_5(VAR_10, VAR_1) < 0
        || !FUNC_2(&VAR_0, VAR_3)
        || FUNC_6(VAR_10, VAR_2, VAR_9) < 0) {
        FUNC_4(VAR_10);
        FUNC_0(VAR_9);
        return ((void*)0);
    }
    VAR_9->rwflag = VAR_8;
    VAR_9->cb = VAR_7;

    return VAR_10;
}
