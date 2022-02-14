
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xo_handle_t ;
typedef int ssize_t ;
struct TYPE_5__ {int c_flags; } ;
typedef TYPE_1__ csv_private_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,char*,char*) ;
 int FUNC_2 (int *,TYPE_1__*,char*,int ) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6 (xo_handle_t *VAR_1, csv_private_t *VAR_2, const char *VAR_3)
{
    char *VAR_4, *VAR_5, *VAR_6;
    ssize_t VAR_7 = FUNC_5(VAR_3);
    char *VAR_8 = FUNC_0(VAR_7 + 1);

    FUNC_3(VAR_8, VAR_3, VAR_7 + 1);

    for (VAR_4 = VAR_8, VAR_5 = VAR_8 + VAR_7; VAR_4 && VAR_4 < VAR_5; VAR_4 = VAR_6) {
 VAR_6 = FUNC_4(VAR_4, '.');
 if (VAR_6)
     *VAR_6++ = '\0';

 if (*VAR_4 == '\0')
     continue;

 FUNC_1(VAR_1, VAR_2, "adding leaf: [%s]\n", VAR_4);
 FUNC_2(VAR_1, VAR_2, VAR_4, 0);
    }




    VAR_2->c_flags |= VAR_0;

    return 0;
}
