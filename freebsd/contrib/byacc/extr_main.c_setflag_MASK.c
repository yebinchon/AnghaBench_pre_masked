
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_4(int VAR_14)
{
    switch (VAR_14)
    {
    case 'B':



 FUNC_2("-B", "reconfigure with --enable-btyacc");

 break;

    case 'd':
 VAR_3 = 1;
 break;

    case 'g':
 VAR_4 = 1;
 break;

    case 'i':
 VAR_5 = 1;
 break;

    case 'l':
 VAR_6 = 1;
 break;

    case 'L':



 FUNC_2("-L", "reconfigure with --enable-btyacc");

 break;

    case 'P':
 VAR_9 = 1;
 break;

    case 'r':
 VAR_10 = 1;
 break;

    case 's':
 VAR_11 = 1;
 break;

    case 't':
 VAR_12 = 1;
 break;

    case 'v':
 VAR_13 = 1;
 break;

    case 'V':
 FUNC_1("%s - %s\n", VAR_8, VAR_1);
 FUNC_0(VAR_0);

    case 'y':


 break;

    default:
 FUNC_3();
    }
}
