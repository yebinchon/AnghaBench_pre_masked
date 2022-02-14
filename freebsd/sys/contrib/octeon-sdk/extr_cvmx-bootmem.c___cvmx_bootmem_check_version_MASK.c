
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULL ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
    int VAR_3;




    VAR_3 = FUNC_0(VAR_3);
    if ((VAR_3 > 3) || (VAR_2 && VAR_3 != VAR_2))
    {
        FUNC_1("ERROR: Incompatible bootmem descriptor version: %d.%d at addr: 0x%llx\n",
            VAR_3, (int)FUNC_0(VAR_1),
            (ULL)VAR_0);
        return -1;
    }
    else
        return 0;
}
