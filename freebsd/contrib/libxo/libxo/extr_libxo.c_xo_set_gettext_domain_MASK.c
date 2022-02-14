
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* xb_curp; char* xb_bufp; } ;
struct TYPE_8__ {TYPE_1__ xo_data; int * xo_gt_domain; } ;
typedef TYPE_2__ xo_handle_t ;
struct TYPE_9__ {char* xfi_format; scalar_t__ xfi_flen; } ;
typedef TYPE_3__ xo_field_info_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (TYPE_2__*,int *,char const*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (xo_handle_t *VAR_0, xo_field_info_t *VAR_1,
         const char *VAR_2, ssize_t VAR_3)
{
    const char *VAR_4 = VAR_1->xfi_format;
    ssize_t VAR_5 = VAR_1->xfi_flen;


    if (VAR_0->xo_gt_domain) {
 FUNC_1(VAR_0->xo_gt_domain);
 VAR_0->xo_gt_domain = ((void*)0);
    }


    if (VAR_3 == 0 && VAR_5 == 0)
 return;

    ssize_t VAR_6 = -1;
    if (VAR_3 == 0 && VAR_5 != 0) {

 VAR_6 = VAR_0->xo_data.xb_curp - VAR_0->xo_data.xb_bufp;
 FUNC_0(VAR_0, ((void*)0), VAR_4, VAR_5, 0);

 ssize_t VAR_7 = VAR_0->xo_data.xb_curp - VAR_0->xo_data.xb_bufp;
 VAR_3 = VAR_7 - VAR_6;
 VAR_2 = VAR_0->xo_data.xb_bufp + VAR_6;
    }

    VAR_0->xo_gt_domain = FUNC_2(VAR_2, VAR_3);


    if (VAR_6 >= 0)
 VAR_0->xo_data.xb_curp = VAR_0->xo_data.xb_bufp + VAR_6;
}
