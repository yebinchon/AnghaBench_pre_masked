
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ SSL_CIPHER ;


 TYPE_1__ const* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

const SSL_CIPHER *FUNC_1(uint32_t VAR_6)
{
    SSL_CIPHER VAR_7;
    const SSL_CIPHER *VAR_8;

    VAR_7.id = VAR_6;
    VAR_8 = FUNC_0(&VAR_7, VAR_5, VAR_2);
    if (VAR_8 != ((void*)0))
        return VAR_8;
    VAR_8 = FUNC_0(&VAR_7, VAR_3, VAR_0);
    if (VAR_8 != ((void*)0))
        return VAR_8;
    return FUNC_0(&VAR_7, VAR_4, VAR_1);
}
