
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ xb_curp; scalar_t__ xb_bufp; } ;
struct TYPE_7__ {int xo_opaque; int (* xo_write ) (int ,scalar_t__) ;TYPE_2__ xo_data; } ;
typedef TYPE_1__ xo_handle_t ;
typedef TYPE_2__ xo_buffer_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_4 (xo_handle_t *VAR_1)
{
    ssize_t VAR_2 = 0;
    xo_buffer_t *VAR_3 = &VAR_1->xo_data;

    if (VAR_3->xb_curp != VAR_3->xb_bufp) {
 FUNC_3(VAR_3, "", 1);
 FUNC_2(VAR_1);
 if (VAR_1->xo_write)
     VAR_2 = VAR_1->xo_write(VAR_1->xo_opaque, VAR_3->xb_bufp);
 VAR_3->xb_curp = VAR_3->xb_bufp;
    }


    FUNC_0(VAR_1, VAR_0);

    return VAR_2;
}
