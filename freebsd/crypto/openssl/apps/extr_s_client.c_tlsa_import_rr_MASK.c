
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* uint8_t ;
struct tlsa_field {unsigned char** member_0; char* member_1; int name; scalar_t__ var; int (* parser ) (char const**,scalar_t__) ;int const member_2; } ;
typedef int ossl_ssize_t ;
typedef int SSL ;


 int FUNC_0 (int ,char*,int ,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char* const) ;
 int FUNC_3 (int *,unsigned char* const,unsigned char* const,unsigned char* const,unsigned char* const,int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_4 (char const**,scalar_t__) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_2, const char *VAR_3)
{

    static uint8_t VAR_4;
    static uint8_t VAR_5;
    static uint8_t VAR_6;
    static unsigned char *VAR_7;
    static struct tlsa_field VAR_8[] = {
        { &VAR_4, "usage", 129 },
        { &VAR_5, "selector", 129 },
        { &VAR_6, "mtype", 129 },
        { &VAR_7, "data", 128 },
        { ((void*)0), }
    };
    struct tlsa_field *VAR_9;
    int VAR_10;
    const char *VAR_11 = VAR_3;
    ossl_ssize_t VAR_12 = 0;

    for (VAR_9 = VAR_8; VAR_9->var; ++VAR_9) {

        if ((VAR_12 = VAR_9->parser(&VAR_11, VAR_9->var)) <= 0) {
            FUNC_0(VAR_0, "%s: warning: bad TLSA %s field in: %s\n",
                       VAR_1, VAR_9->name, VAR_3);
            return 0;
        }
    }

    VAR_10 = FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_12);
    FUNC_2(VAR_7);

    if (VAR_10 == 0) {
        FUNC_1(VAR_0);
        FUNC_0(VAR_0, "%s: warning: unusable TLSA rrdata: %s\n",
                   VAR_1, VAR_3);
        return 0;
    }
    if (VAR_10 < 0) {
        FUNC_1(VAR_0);
        FUNC_0(VAR_0, "%s: warning: error loading TLSA rrdata: %s\n",
                   VAR_1, VAR_3);
        return 0;
    }
    return VAR_10;
}
