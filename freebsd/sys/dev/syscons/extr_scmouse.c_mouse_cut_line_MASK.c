
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; scalar_t__ xsize; int mouse_pos; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(scr_stat *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_3->status & VAR_1) {
 VAR_5 = FUNC_1(VAR_3->mouse_pos, VAR_3->xsize);
 FUNC_0(VAR_3, VAR_5, VAR_5 + VAR_3->xsize - 1);
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_2[VAR_4 - 1] == '\r')
     VAR_2[VAR_4 - 1] = '\0';
 VAR_3->status |= VAR_0;
    }
}
