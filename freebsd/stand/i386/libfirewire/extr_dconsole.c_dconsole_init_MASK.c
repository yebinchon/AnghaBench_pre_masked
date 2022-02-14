
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dcons_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 int FUNC_1 (struct dcons_buf*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_5)
{
    char VAR_6[16], *VAR_7;
    int VAR_8;

    if (VAR_3 && VAR_5 == 0)
 return 0;
    VAR_3 = 1;

    VAR_8 = VAR_0;
    VAR_7 = (char *)FUNC_3((vm_offset_t)&VAR_1[0]);
    VAR_2 = FUNC_0(VAR_7);
    FUNC_5(VAR_6, "0x%08x", VAR_2);
    FUNC_4("dcons.addr", VAR_6, 1);

    FUNC_1((struct dcons_buf *)VAR_7, VAR_8, VAR_4);
    FUNC_5(VAR_6, "%d", VAR_8);
    FUNC_4("dcons.size", VAR_6, 1);
    FUNC_2();
    return(0);
}
