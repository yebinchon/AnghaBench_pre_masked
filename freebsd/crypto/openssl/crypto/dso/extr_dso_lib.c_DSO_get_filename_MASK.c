
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* filename; } ;
typedef TYPE_1__ DSO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

const char *FUNC_1(DSO *VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    return VAR_2->filename;
}
