
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,void*,size_t,size_t*) ;

int FUNC_2(SSL *VAR_2, void *VAR_3, int VAR_4)
{
    int VAR_5;
    size_t VAR_6;

    if (VAR_4 < 0) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    VAR_5 = FUNC_1(VAR_2, VAR_3, (size_t)VAR_4, &VAR_6);





    if (VAR_5 > 0)
        VAR_5 = (int)VAR_6;

    return VAR_5;
}
