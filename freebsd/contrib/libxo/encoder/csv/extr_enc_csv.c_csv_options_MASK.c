
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,int,char*,char*) ;

__attribute__((used)) static int
FUNC_8 (xo_handle_t *VAR_7, csv_private_t *VAR_8, const char *VAR_9)
{
    ssize_t VAR_10 = FUNC_5(VAR_9);
    char *VAR_11 = FUNC_0(VAR_10 + 1);
    FUNC_3(VAR_11, VAR_9, VAR_10);
    VAR_11[VAR_10] = '\0';

    char *VAR_12, *VAR_13, *VAR_14, *VAR_15;
    for (VAR_12 = VAR_11, VAR_13 = VAR_11 + VAR_10 + 1; VAR_12 && VAR_12 < VAR_13; VAR_12 = VAR_14) {
 VAR_14 = FUNC_4(VAR_12, '+');
 if (VAR_14)
     *VAR_14++ = '\0';

 VAR_15 = FUNC_4(VAR_12, '=');
 if (VAR_15)
     *VAR_15++ = '\0';

 if (FUNC_6(VAR_12, "path")) {

     if (VAR_15 != ((void*)0) && FUNC_2(VAR_7, VAR_8, VAR_15))
    return -1;

     VAR_8->c_flags |= VAR_2;

 } else if (FUNC_6(VAR_12, "leafs")
     || FUNC_6(VAR_12, "leaf")
     || FUNC_6(VAR_12, "leaves")) {

     if (VAR_15 != ((void*)0) && FUNC_1(VAR_7, VAR_8, VAR_15))
    return -1;

 } else if (FUNC_6(VAR_12, "no-keys")) {
     VAR_8->c_flags |= VAR_4;
 } else if (FUNC_6(VAR_12, "no-header")) {
     VAR_8->c_flags |= VAR_3;
 } else if (FUNC_6(VAR_12, "value-only")) {
     VAR_8->c_flags |= VAR_6;
 } else if (FUNC_6(VAR_12, "dos")) {
     VAR_8->c_flags |= VAR_1;
 } else if (FUNC_6(VAR_12, "no-quotes")) {
     VAR_8->c_flags |= VAR_5;
 } else if (FUNC_6(VAR_12, "debug")) {
     VAR_8->c_flags |= VAR_0;
 } else {
     FUNC_7(VAR_7, -1,
         "unknown encoder option value: '%s'", VAR_12);
     return -1;
 }
    }

    return 0;
}
