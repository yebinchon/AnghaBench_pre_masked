
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* _read ) (int ,char*,int) ;int _flags; int _offset; int _cookie; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

int
FUNC_1(FILE *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = (*VAR_2->_read)(VAR_2->_cookie, VAR_3, VAR_4);
 if (VAR_5 > 0) {
  if (VAR_2->_flags & VAR_1) {
   if (VAR_2->_offset <= VAR_0 - VAR_5)
    VAR_2->_offset += VAR_5;
   else
    VAR_2->_flags &= ~VAR_1;
  }
 } else if (VAR_5 < 0)
  VAR_2->_flags &= ~VAR_1;
 return (VAR_5);
}
