
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ _flags; scalar_t__ _close; int _file; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_4 ;

int
FUNC_3(FILE *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 != ((void*)0))
  *VAR_6 = -1;

 if (VAR_5->_flags == 0) {
  VAR_4 = VAR_0;
  return (VAR_1);
 }

 FUNC_0(VAR_5);
 VAR_7 = 0;
 if (VAR_5->_close != VAR_3) {
  VAR_7 = VAR_1;
  VAR_4 = VAR_2;
 } else if (VAR_5->_file < 0) {
  VAR_7 = VAR_1;
  VAR_4 = VAR_0;
 }
 if (VAR_7 == VAR_1) {
  VAR_8 = VAR_4;
  (void)FUNC_2(VAR_5, 1);
  VAR_4 = VAR_8;
 } else {
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_5->_file;
  VAR_7 = FUNC_2(VAR_5, 0);
 }
 FUNC_1();

 return (VAR_7);
}
