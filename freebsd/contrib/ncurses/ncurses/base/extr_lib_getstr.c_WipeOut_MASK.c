
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_7__ {int _cury; int _curx; } ;
typedef TYPE_1__ WINDOW ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static char *
FUNC_4(WINDOW *VAR_0, int VAR_1, int VAR_2, char *VAR_3, char *VAR_4, int VAR_5)
{
    if (VAR_4 > VAR_3) {
 *--VAR_4 = '\0';
 if (VAR_5) {
     int VAR_6 = VAR_0->_cury;
     int VAR_7 = VAR_0->_curx;

     FUNC_3(VAR_0, VAR_1, VAR_2);
     FUNC_2(VAR_0, VAR_3);
     FUNC_0(VAR_0, VAR_1, VAR_2);
     while (VAR_0->_cury < VAR_6
     || (VAR_0->_cury == VAR_6 && VAR_0->_curx < VAR_7))
  FUNC_1(VAR_0, (chtype) ' ');

     FUNC_3(VAR_0, VAR_1, VAR_2);
 }
    }
    return VAR_4;
}
