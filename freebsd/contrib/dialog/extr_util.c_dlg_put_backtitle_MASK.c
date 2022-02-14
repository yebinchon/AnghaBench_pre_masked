
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_2__ {int * backtitle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;

void
FUNC_7(void)
{
    int VAR_6;

    if (VAR_3.backtitle != ((void*)0)) {
 chtype VAR_7 = VAR_1;
 int VAR_8 = FUNC_2(VAR_3.backtitle);

 FUNC_0(VAR_5, VAR_4);
 (void) FUNC_5(VAR_5, 0, 1);
 FUNC_3(VAR_5, VAR_3.backtitle, VAR_2 - 2, &VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_2 - VAR_8; VAR_6++)
     (void) FUNC_4(VAR_5, ' ');
 (void) FUNC_5(VAR_5, 1, 1);
 for (VAR_6 = 0; VAR_6 < VAR_2 - 2; VAR_6++)
     (void) FUNC_4(VAR_5, FUNC_1(VAR_0));
    }

    (void) FUNC_6(VAR_5);
}
