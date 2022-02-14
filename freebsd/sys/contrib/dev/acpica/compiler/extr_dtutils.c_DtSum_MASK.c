
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_3__ {int Length; int Buffer; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1 (
    DT_SUBTABLE *VAR_0,
    void *VAR_1,
    void *VAR_2)
{
    UINT8 VAR_3;
    UINT8 *VAR_4 = VAR_2;


    VAR_3 = FUNC_0 (VAR_0->Buffer, VAR_0->Length);
    *VAR_4 = (UINT8) (*VAR_4 + VAR_3);
}
