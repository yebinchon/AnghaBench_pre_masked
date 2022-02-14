
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extension_error; int * biodebug; int * servername; } ;
typedef TYPE_1__ tlsextctx ;
typedef int SSL ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (char const*,int *) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_4, int *VAR_5, void *VAR_6)
{
    tlsextctx *VAR_7 = (tlsextctx *) VAR_6;
    const char *VAR_8 = FUNC_1(VAR_4, VAR_2);

    if (VAR_8 != ((void*)0) && VAR_7->biodebug != ((void*)0)) {
        const char *VAR_9 = VAR_8;
        unsigned char VAR_10;

        FUNC_0(VAR_7->biodebug, "Hostname in TLS extension: \"");
        while ((VAR_10 = *VAR_9++) != 0)
            FUNC_0(VAR_7->biodebug,
                       FUNC_3(VAR_10) && FUNC_4(VAR_10) ? "%c" : "\\x%02x", VAR_10);
        FUNC_0(VAR_7->biodebug, "\"\n");
    }

    if (VAR_7->servername == ((void*)0))
        return VAR_0;

    if (VAR_8 != ((void*)0)) {
        if (FUNC_5(VAR_8, VAR_7->servername))
            return VAR_7->extension_error;
        if (VAR_3 != ((void*)0)) {
            FUNC_0(VAR_7->biodebug, "Switching server context.\n");
            FUNC_2(VAR_4, VAR_3);
        }
    }
    return VAR_1;
}
