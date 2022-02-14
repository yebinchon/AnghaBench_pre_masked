
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_12__ {char* xb_curp; char* xb_bufp; } ;
struct TYPE_11__ {TYPE_2__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_buffer_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (TYPE_1__*,char*) ;
 char* FUNC_8 (TYPE_1__*,char*,char*,int) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int,int *,char*,int,int ,int,int) ;

__attribute__((used)) static ssize_t
FUNC_11 (xo_handle_t *VAR_3, xo_xff_flags_t VAR_4,
     ssize_t VAR_5, ssize_t VAR_6, int VAR_7)
{
    xo_buffer_t *VAR_8 = &VAR_3->xo_data;

    if (!FUNC_5(VAR_8, 1))
 return VAR_6;

    VAR_8->xb_curp[0] = '\0';

    char *VAR_9 = VAR_8->xb_bufp + VAR_5;
    ssize_t VAR_10 = VAR_8->xb_curp - VAR_9;
    const char *VAR_11 = ((void*)0);





    if (VAR_4 & VAR_1) {
 int VAR_12 = FUNC_4(VAR_8, VAR_5);
 char *VAR_13 = FUNC_1(VAR_9, (int) ',', VAR_10);
 if (VAR_13 == ((void*)0)) {
     FUNC_9(VAR_3, "no comma in plural gettext field: '%s'", VAR_9);
     return VAR_6;
 }

 if (VAR_13 == VAR_9) {
     FUNC_9(VAR_3, "nothing before comma in plural gettext "
         "field: '%s'", VAR_9);
     return VAR_6;
 }

 if (VAR_13 == VAR_8->xb_curp) {
     FUNC_9(VAR_3, "nothing after comma in plural gettext "
         "field: '%s'", VAR_9);
     return VAR_6;
 }

 *VAR_13++ = '\0';
 if (VAR_4 & VAR_0) {
     VAR_11 = FUNC_8(VAR_3, VAR_9, VAR_13, VAR_12);
 } else {

     VAR_11 = (VAR_12 == 1) ? VAR_9 : VAR_13;
 }





 if (VAR_11 == VAR_9) {
     VAR_8->xb_curp = VAR_13 - 1;




     if (VAR_7 == VAR_2)
  return FUNC_6(VAR_9, VAR_8->xb_curp - VAR_9);
 }

    } else {

 VAR_11 = FUNC_7(VAR_3, VAR_9);

 if (VAR_11 == VAR_9) {

     if (VAR_7 == VAR_2)
  return VAR_6;
 }
    }





    ssize_t VAR_14 = FUNC_3(VAR_11);
    char *VAR_15 = FUNC_0(VAR_14 + 1);
    FUNC_2(VAR_15, VAR_11, VAR_14 + 1);

    VAR_8->xb_curp = VAR_8->xb_bufp + VAR_5;
    return FUNC_10(VAR_3, VAR_8, VAR_4, ((void*)0), VAR_15, VAR_14, 0,
       VAR_7, VAR_2);
}
