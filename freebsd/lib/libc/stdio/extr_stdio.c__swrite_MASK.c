
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fpos_t ;
struct TYPE_4__ {int _flags; int (* _write ) (int ,char const*,int) ;int _flags2; int _offset; int _cookie; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,char const*,int) ;

int
FUNC_2(FILE *VAR_7, char const *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 if (VAR_7->_flags & VAR_3) {
  VAR_11 = VAR_6;
  if (FUNC_0(VAR_7, (fpos_t)0, VAR_1) == -1 &&
      (VAR_7->_flags & VAR_5))
   return (-1);
  VAR_6 = VAR_11;
 }
 VAR_10 = (*VAR_7->_write)(VAR_7->_cookie, VAR_8, VAR_9);

 if (VAR_10 >= 0) {
  if ((VAR_7->_flags & VAR_4) && !(VAR_7->_flags2 & VAR_2) &&
      VAR_7->_offset <= VAR_0 - VAR_10)
   VAR_7->_offset += VAR_10;
  else
   VAR_7->_flags &= ~VAR_4;

 } else if (VAR_10 < 0)
  VAR_7->_flags &= ~VAR_4;
 return (VAR_10);
}
