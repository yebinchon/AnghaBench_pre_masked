
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {int _called_wgetch; } ;
typedef TYPE_1__ SCREEN ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_5(WINDOW *VAR_7, char *VAR_8)
{
    SCREEN *VAR_9 = FUNC_1(VAR_7);
    int VAR_10;

    if (VAR_9 != 0) {
 {
     VAR_9->_called_wgetch = VAR_4;
     VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_3);
     VAR_9->_called_wgetch = VAR_2;
 }
    } else {
 VAR_10 = VAR_1;
    }
    return VAR_10;
}
