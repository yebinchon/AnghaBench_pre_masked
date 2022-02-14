
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {int (* encode ) (int ,char*,int ,scalar_t__,void**) ;} ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int,char**) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ,scalar_t__,void**) ;
 int FUNC_6 (char**,char const*,int ) ;
 int FUNC_7 (int *,char const*,int ) ;

int
FUNC_8(FILE *VAR_7, const char *VAR_8, va_list VAR_9)
{
    char *VAR_10;
    void *VAR_11;
    int VAR_12;
    if(!VAR_6)
 return FUNC_7(VAR_7, VAR_8, VAR_9);

    if (FUNC_6(&VAR_10, VAR_8, VAR_9) == -1) {
 FUNC_3("Failed to allocate command.\n");
 return -1;
    }
    VAR_12 = (*VAR_2->encode)(VAR_0, VAR_10, FUNC_4(VAR_10), VAR_1, &VAR_11);
    FUNC_2(VAR_10);
    if(VAR_12 < 0) {
 FUNC_3("Failed to encode command.\n");
 return -1;
    }
    if(FUNC_0(VAR_11, VAR_12, &VAR_10) < 0){
 FUNC_2(VAR_11);
 FUNC_3("Out of memory base64-encoding.\n");
 return -1;
    }
    FUNC_2(VAR_11);
    if(VAR_1 == VAR_5)
 FUNC_1(VAR_7, "MIC %s", VAR_10);
    else if(VAR_1 == VAR_4)
 FUNC_1(VAR_7, "ENC %s", VAR_10);
    else if(VAR_1 == VAR_3)
 FUNC_1(VAR_7, "CONF %s", VAR_10);

    FUNC_2(VAR_10);
    return 0;
}
