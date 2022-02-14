
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,unsigned char const*,int,int,int) ;
 int FUNC_1 (int *,char const*,int,int) ;
 int FUNC_2 (int *,char*,int,char*) ;




 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_3(BIO *VAR_1, const unsigned char *VAR_2, int VAR_3,
                             unsigned long VAR_4, int VAR_5, int VAR_6)
{
    switch (VAR_4 & VAR_0) {

    case 131:
        return 0;

    case 129:
        if (VAR_6)
            FUNC_2(VAR_1, "%*s<Parse Error>", VAR_5, "");
        else
            FUNC_2(VAR_1, "%*s<Not Supported>", VAR_5, "");
        return 1;

    case 128:
        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, -1);
    case 130:
        return FUNC_1(VAR_1, (const char *)VAR_2, VAR_3, VAR_5);

    default:
        return 1;
    }
}
