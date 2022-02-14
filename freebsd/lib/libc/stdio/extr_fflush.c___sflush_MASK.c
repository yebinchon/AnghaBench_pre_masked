
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* _base; int _size; } ;
struct TYPE_6__ {int _flags; unsigned char* _p; int _w; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

int
FUNC_2(FILE *VAR_5)
{
 unsigned char *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = VAR_5->_flags;
 if ((VAR_8 & VAR_4) == 0)
  return (0);

 if ((VAR_6 = VAR_5->_bf._base) == ((void*)0))
  return (0);

 VAR_7 = VAR_5->_p - VAR_6;





 VAR_5->_p = VAR_6;
 VAR_5->_w = VAR_8 & (VAR_2|VAR_3) ? 0 : VAR_5->_bf._size;

 for (; VAR_7 > 0; VAR_7 -= VAR_8, VAR_6 += VAR_8) {
  VAR_8 = FUNC_0(VAR_5, (char *)VAR_6, VAR_7);
  if (VAR_8 <= 0) {

   if (VAR_6 > VAR_5->_p) {

    FUNC_1(VAR_5->_p, VAR_6, VAR_7);
    VAR_5->_p += VAR_7;
    if ((VAR_5->_flags & (VAR_2 | VAR_3)) == 0)
     VAR_5->_w -= VAR_7;
   }
   VAR_5->_flags |= VAR_1;
   return (VAR_0);
  }
 }
 return (0);
}
