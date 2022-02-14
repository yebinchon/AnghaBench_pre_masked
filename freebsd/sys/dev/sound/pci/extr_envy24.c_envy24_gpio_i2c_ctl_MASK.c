
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct envy24_delta_ak4524_codec {TYPE_1__* parent; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
        u_int32_t VAR_5 = 0;
        struct envy24_delta_ak4524_codec *VAR_6 = VAR_2;



        VAR_5 = FUNC_1(VAR_6->parent);
        VAR_5 &= ~(VAR_1 | VAR_0);
        if (VAR_3) VAR_5 += VAR_0;
        if (VAR_4) VAR_5 += VAR_1;
        FUNC_2(VAR_6->parent, VAR_5);
        return;
}
