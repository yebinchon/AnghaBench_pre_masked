
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {int xoc_effects; } ;
struct TYPE_23__ {TYPE_3__ xo_colors; } ;
typedef TYPE_1__ xo_handle_t ;
struct TYPE_24__ {char* xfi_format; int xfi_flen; } ;
typedef TYPE_2__ xo_field_info_t ;
typedef TYPE_3__ xo_colors_t ;
struct TYPE_26__ {int xb_bufp; } ;
typedef TYPE_4__ xo_buffer_t ;
typedef int ssize_t ;


 int VAR_0 ;






 int FUNC_0 (TYPE_4__*,char const*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_4__*,char const*,int,int ) ;
 int const FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11 (xo_handle_t *VAR_1, xo_field_info_t *VAR_2,
    const char *VAR_3, ssize_t VAR_4)
{
    const char *VAR_5 = VAR_2->xfi_format;
    ssize_t VAR_6 = VAR_2->xfi_flen;

    xo_buffer_t VAR_7;


    if (VAR_4 != 0 && FUNC_10(VAR_1))
 return;

    FUNC_2(&VAR_7);

    if (VAR_4)
 FUNC_0(&VAR_7, VAR_3, VAR_4);
    else if (VAR_6)
 FUNC_8(VAR_1, &VAR_7, VAR_5, VAR_6, 0);
    else
 FUNC_0(&VAR_7, "reset", 6);

    if (FUNC_3(VAR_1)) {
 switch (FUNC_9(VAR_1)) {
 case 129:
 case 132:
     FUNC_0(&VAR_7, "", 1);

     xo_colors_t VAR_8 = VAR_1->xo_colors;
     FUNC_6(VAR_1, &VAR_8, VAR_7.xb_bufp);
     FUNC_7(VAR_1, &VAR_8);

     if (FUNC_9(VAR_1) == 129) {
  FUNC_5(VAR_1, &VAR_8);
  VAR_8.xoc_effects &= ~VAR_0;

     } else {





  VAR_8.xoc_effects &= ~VAR_0;
  FUNC_4(VAR_1, &VAR_8);
     }

     VAR_1->xo_colors = VAR_8;
     break;

 case 128:
 case 131:
 case 130:
 case 133:




     break;
 }
    }

    FUNC_1(&VAR_7);
}
