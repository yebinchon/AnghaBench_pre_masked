
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_4__ {int xe_handler; } ;
typedef TYPE_1__ xo_encoder_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (char const*) ;
 int FUNC_6 (int *,int ,char const*,char const*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10 (xo_handle_t *VAR_2, const char *VAR_3)
{
    FUNC_7();

    const char *VAR_4 = FUNC_2(VAR_3, ':');
    if (VAR_4) {

 size_t VAR_5 = FUNC_3(VAR_3);
 char *VAR_6 = FUNC_0(VAR_5 + 1);
 FUNC_1(VAR_6, VAR_3, VAR_5);
 VAR_6[VAR_5] = '\0';

 char *VAR_7 = VAR_6 + (VAR_4 - VAR_3);
 *VAR_7++ = '\0';

 VAR_4 = VAR_7;
 VAR_3 = VAR_6;
    }


    if (FUNC_2(VAR_3, '/') != ((void*)0) || FUNC_2(VAR_3, ':') != ((void*)0)) {
 FUNC_8(VAR_2, "invalid encoder name: %s", VAR_3);
 return -1;
    }






    xo_encoder_node_t *VAR_8 = FUNC_5(VAR_3);
    if (VAR_8 == ((void*)0)) {
 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8 == ((void*)0)) {
     FUNC_8(VAR_2, "encoder not founde: %s", VAR_3);
     return -1;
 }
    }

    FUNC_9(VAR_2, VAR_8->xe_handler);

    int VAR_9 = FUNC_6(VAR_2, VAR_0, VAR_3, ((void*)0), 0);
    if (VAR_9 == 0 && VAR_4 != ((void*)0)) {
 VAR_9 = FUNC_6(VAR_2, VAR_1, VAR_3, VAR_4, 0);
    }

    return VAR_9;
}
