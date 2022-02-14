
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_pass_data {int data; int prompt_info; int ui_method; } ;


 char* FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    struct pem_pass_data *VAR_4 = VAR_3;
    char *VAR_5 = FUNC_0(VAR_4->ui_method, VAR_0, VAR_1,
                               VAR_4->prompt_info, VAR_4->data);

    return VAR_5 == ((void*)0) ? 0 : FUNC_1(VAR_5);
}
