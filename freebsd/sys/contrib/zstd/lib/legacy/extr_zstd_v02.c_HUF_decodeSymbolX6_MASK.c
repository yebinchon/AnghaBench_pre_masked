
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int nbBytes; int nbBits; } ;
typedef int HUF_DSeqX6 ;
typedef TYPE_1__ HUF_DDescX6 ;
typedef int BIT_DStream_t ;


 size_t FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*,int const*,int) ;

__attribute__((used)) static U32 FUNC_3(void* VAR_0, BIT_DStream_t* VAR_1, const HUF_DDescX6* VAR_2, const HUF_DSeqX6* VAR_3, const U32 VAR_4)
{
    const size_t VAR_5 = FUNC_0(VAR_1, VAR_4);
    FUNC_2(VAR_0, VAR_3+VAR_5, sizeof(HUF_DSeqX6));
    FUNC_1(VAR_1, VAR_2[VAR_5].nbBits);
    return VAR_2[VAR_5].nbBytes;
}
