
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_2; int member_1; } ;
struct TYPE_4__ {int cParams; TYPE_2__ fParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef TYPE_2__ ZSTD_frameParameters ;
typedef int ZSTD_compressionParameters ;


 size_t FUNC_0 (int ,void*,size_t,void const*,size_t,int *,int ,TYPE_1__) ;
 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_1(const void* VAR_1, size_t VAR_2,
                    void* VAR_3, size_t VAR_4,
                    void* VAR_5)
{
    ZSTD_parameters VAR_6;
    ZSTD_frameParameters VAR_7 = { 1 , 0, 0 };
    VAR_6.fParams = VAR_7;
    VAR_6.cParams = *(ZSTD_compressionParameters*)VAR_5;
    return FUNC_0 (VAR_0, VAR_3, VAR_4, VAR_1, VAR_2, ((void*)0) ,0, VAR_6);

}
