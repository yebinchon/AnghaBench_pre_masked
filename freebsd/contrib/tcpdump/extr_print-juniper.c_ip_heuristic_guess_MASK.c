
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int *,int const*,int ) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
                   register const u_char *VAR_1, u_int VAR_2)
{
    switch(VAR_1[0]) {
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
     FUNC_1(VAR_0, VAR_1, VAR_2);
     break;
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
        FUNC_0(VAR_0, VAR_1, VAR_2);
        break;
    default:
        return 0;
        break;
    }
    return 1;
}
