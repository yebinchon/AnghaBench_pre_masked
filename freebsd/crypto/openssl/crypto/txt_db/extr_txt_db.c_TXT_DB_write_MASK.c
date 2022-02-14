
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* data; } ;
struct TYPE_7__ {long num_fields; int data; } ;
typedef TYPE_1__ TXT_DB ;
typedef TYPE_2__ BUF_MEM ;
typedef int BIO ;


 long FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 () ;
 long FUNC_4 (int ) ;
 char** FUNC_5 (int ,long) ;
 scalar_t__ FUNC_6 (char*) ;

long FUNC_7(BIO *VAR_0, TXT_DB *VAR_1)
{
    long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = 0;
    char *VAR_8, **VAR_9, *VAR_10;
    BUF_MEM *VAR_11 = ((void*)0);
    long VAR_12 = -1;

    if ((VAR_11 = FUNC_3()) == ((void*)0))
        goto err;
    VAR_4 = FUNC_4(VAR_1->data);
    VAR_5 = VAR_1->num_fields;
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        VAR_9 = FUNC_5(VAR_1->data, VAR_2);

        VAR_6 = 0;
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
            if (VAR_9[VAR_3] != ((void*)0))
                VAR_6 += FUNC_6(VAR_9[VAR_3]);
        }
        if (!FUNC_2(VAR_11, (int)(VAR_6 * 2 + VAR_5)))
            goto err;

        VAR_8 = VAR_11->data;
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
            VAR_10 = VAR_9[VAR_3];
            if (VAR_10 != ((void*)0))
                for (;;) {
                    if (*VAR_10 == '\0')
                        break;
                    if (*VAR_10 == '\t')
                        *(VAR_8++) = '\\';
                    *(VAR_8++) = *(VAR_10++);
                }
            *(VAR_8++) = '\t';
        }
        VAR_8[-1] = '\n';
        VAR_3 = VAR_8 - VAR_11->data;
        if (FUNC_0(VAR_0, VAR_11->data, (int)VAR_3) != VAR_3)
            goto err;
        VAR_7 += VAR_3;
    }
    VAR_12 = VAR_7;
 err:
    FUNC_1(VAR_11);
    return VAR_12;
}
