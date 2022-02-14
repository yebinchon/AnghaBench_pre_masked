
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

BOOLEAN
FUNC_2 (
    UINT8 VAR_1,
    UINT16 VAR_2)
{
    BOOLEAN VAR_3;




    VAR_3 = FUNC_0 (VAR_1, VAR_2);
    VAR_3 |= FUNC_1 (VAR_1, VAR_2);

    return (VAR_0 || VAR_3);
}
