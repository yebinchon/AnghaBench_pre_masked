
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int dummy; } ;


 int FUNC_0 (struct ntlm_buf*) ;
 int FUNC_1 (struct ntlm_buf*,struct ntlm_buf*,struct ntlm_buf*) ;
 int FUNC_2 (void*,size_t,struct ntlm_buf*,struct ntlm_buf*) ;

int
FUNC_3(void *VAR_0, size_t VAR_1,
        struct ntlm_buf *VAR_2,
        struct ntlm_buf *VAR_3,
        struct ntlm_buf *VAR_4)
{
    struct ntlm_buf VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_5);
    if (VAR_6)
 return VAR_6;

    VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_4);
    FUNC_0(&VAR_5);

    return VAR_6;
}
