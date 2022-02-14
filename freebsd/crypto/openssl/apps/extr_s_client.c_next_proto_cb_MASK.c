
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int data; int status; } ;
typedef TYPE_1__ tlsextnextprotoctx ;
typedef int SSL ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,...) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char**,unsigned char*,unsigned char const*,unsigned int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(SSL *VAR_3, unsigned char **VAR_4, unsigned char *VAR_5,
                         const unsigned char *VAR_6, unsigned int VAR_7,
                         void *VAR_8)
{
    tlsextnextprotoctx *VAR_9 = VAR_8;

    if (!VAR_2) {

        unsigned VAR_10;
        FUNC_0(VAR_1, "Protocols advertised by server: ");
        for (VAR_10 = 0; VAR_10 < VAR_7;) {
            if (VAR_10)
                FUNC_1(VAR_1, ", ", 2);
            FUNC_1(VAR_1, &VAR_6[VAR_10 + 1], VAR_6[VAR_10]);
            VAR_10 += VAR_6[VAR_10] + 1;
        }
        FUNC_1(VAR_1, "\n", 1);
    }

    VAR_9->status =
        FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9->data, VAR_9->len);
    return VAR_0;
}
