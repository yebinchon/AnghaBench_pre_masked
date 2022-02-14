
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ meth_data; } ;
typedef TYPE_1__ CONF ;


 unsigned char* VAR_0 ;

__attribute__((used)) static int FUNC_0(const CONF *VAR_1, char VAR_2, unsigned short VAR_3)
{
    const unsigned short * VAR_4 = (const unsigned short *) VAR_1->meth_data;
    unsigned char VAR_5 = (unsigned char)VAR_2;
    if (VAR_5 > 127) {

        return 0;
    }

    return (VAR_4[VAR_5] & VAR_3) ? 1 : 0;
}
