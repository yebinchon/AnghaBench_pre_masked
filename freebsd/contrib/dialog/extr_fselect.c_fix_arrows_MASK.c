
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ win; scalar_t__ mousex; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int,int,int,int ) ;

__attribute__((used)) static void
FUNC_4(LIST * VAR_5)
{
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;

    if (VAR_5->win != 0) {
 FUNC_2(VAR_5->win, VAR_7, VAR_6);
 VAR_8 = VAR_7 - 1;
 VAR_9 = FUNC_0(VAR_5->win);
 VAR_10 = VAR_7 + FUNC_1(VAR_5->win);

 FUNC_3(VAR_8, VAR_6, VAR_9,
         ((VAR_5->mousex == VAR_4)
   ? VAR_3
   : VAR_2));
 FUNC_3(VAR_10, VAR_6, VAR_9,
         ((VAR_5->mousex == VAR_4)
   ? VAR_0
   : VAR_1));
    }
}
