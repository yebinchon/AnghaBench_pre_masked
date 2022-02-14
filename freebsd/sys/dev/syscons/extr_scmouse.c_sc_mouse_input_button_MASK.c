
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char mouse_pos; char xsize; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_0, int VAR_1)
{
 char VAR_2[6] = "\x1B[M";

 VAR_2[3] = ' ' + VAR_1;
 VAR_2[4] = '!' + VAR_0->mouse_pos % VAR_0->xsize;
 VAR_2[5] = '!' + VAR_0->mouse_pos / VAR_0->xsize;
 FUNC_0(VAR_0, VAR_2, sizeof VAR_2, 1);
}
