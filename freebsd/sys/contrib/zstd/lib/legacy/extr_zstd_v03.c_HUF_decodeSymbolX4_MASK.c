
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int length; int nbBits; } ;
typedef TYPE_1__ HUF_DEltX4 ;
typedef int BIT_DStream_t ;


 size_t FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,TYPE_1__ const*,int) ;

__attribute__((used)) static U32 FUNC_3(void* VAR_0, BIT_DStream_t* VAR_1, const HUF_DEltX4* VAR_2, const U32 VAR_3)
{
    const size_t VAR_4 = FUNC_0(VAR_1, VAR_3);
    FUNC_2(VAR_0, VAR_2+VAR_4, 2);
    FUNC_1(VAR_1, VAR_2[VAR_4].nbBits);
    return VAR_2[VAR_4].length;
}
