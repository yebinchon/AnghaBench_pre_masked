
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int * VAR_0 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(
    UINT8 VAR_1,
    UINT32 VAR_2)
{
    if (VAR_1 <= 13)
    {
        FUNC_0 ("0x%2.2X /* %s */, ", VAR_1,
            VAR_0[VAR_1]);
    }
    else
    {
        FUNC_0 ("0x%2.2X, /* Vendor Defined */ ", VAR_1);
    }



    FUNC_0 ("0x%4.4X,\n", VAR_2);
}
