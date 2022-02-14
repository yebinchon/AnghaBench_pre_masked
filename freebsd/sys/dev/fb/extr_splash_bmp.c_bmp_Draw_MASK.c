
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ va_type; scalar_t__ va_crtc_addr; scalar_t__ va_window; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;
struct TYPE_9__ {int sdepth; int height; int * index; int palette; int * data; scalar_t__ bank; TYPE_1__* adp; int * vidmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int) ;
 TYPE_5__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_7(video_adapter_t *VAR_6)
{
    int VAR_7;




    if (VAR_5.data == ((void*)0)) {
 return(1);
    }


    VAR_5.vidmem = (u_char *)VAR_6->va_window;
    VAR_5.adp = VAR_6;
    FUNC_4(VAR_6);
    FUNC_6(VAR_6, 0);
    VAR_5.bank = 0;


    VAR_5.index = VAR_5.data;


    FUNC_5(VAR_6, (u_char *)&VAR_5.palette);
    for (VAR_7 = 0; (VAR_7 < VAR_5.height) && VAR_5.index; VAR_7++) {
 FUNC_0(&VAR_5, VAR_7);
    }
    return(0);
}
