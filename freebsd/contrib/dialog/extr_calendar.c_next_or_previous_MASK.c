
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(int VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    switch (VAR_1) {
    case 128:
 VAR_3 = VAR_2 ? -VAR_0 : -1;
 break;
    case 130:
 VAR_3 = -1;
 break;
    case 131:
 VAR_3 = VAR_2 ? VAR_0 : 1;
 break;
    case 129:
 VAR_3 = 1;
 break;
    default:
 FUNC_0();
 break;
    }
    return VAR_3;
}
