
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* equal_fn ) (unsigned char*,int,unsigned char*,size_t,unsigned int) ;
struct TYPE_4__ {unsigned char* data; int length; int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (unsigned char**,TYPE_1__ const*) ;
 int FUNC_1 (unsigned char*) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const ASN1_STRING *VAR_1, int VAR_2, equal_fn VAR_3,
                           unsigned int VAR_4, const char *VAR_5, size_t VAR_6,
                           char **VAR_7)
{
    int VAR_8 = 0;

    if (!VAR_1->data || !VAR_1->length)
        return 0;
    if (VAR_2 > 0) {
        if (VAR_2 != VAR_1->type)
            return 0;
        if (VAR_2 == VAR_0)
            VAR_8 = VAR_3(VAR_1->data, VAR_1->length, (unsigned char *)VAR_5, VAR_6, VAR_4);
        else if (VAR_1->length == (int)VAR_6 && !FUNC_3(VAR_1->data, VAR_5, VAR_6))
            VAR_8 = 1;
        if (VAR_8 > 0 && VAR_7)
            *VAR_7 = FUNC_2((char *)VAR_1->data, VAR_1->length);
    } else {
        int VAR_9;
        unsigned char *VAR_10;
        VAR_9 = FUNC_0(&VAR_10, VAR_1);
        if (VAR_9 < 0) {




            return -1;
        }
        VAR_8 = VAR_3(VAR_10, VAR_9, (unsigned char *)VAR_5, VAR_6, VAR_4);
        if (VAR_8 > 0 && VAR_7)
            *VAR_7 = FUNC_2((char *)VAR_10, VAR_9);
        FUNC_1(VAR_10);
    }
    return VAR_8;
}
