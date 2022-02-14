
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _r; scalar_t__ _p; int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (void*,void*,size_t) ;

size_t
FUNC_3(void * __restrict VAR_4, size_t VAR_5, size_t VAR_6, FILE * __restrict VAR_7)
{
 size_t VAR_8;
 char *VAR_9;
 int VAR_10;
 size_t VAR_11;




 if ((VAR_6 == 0) || (VAR_5 == 0))
  return (0);







 if (((VAR_6 | VAR_5) > 0xFFFF) &&
     (VAR_6 > VAR_1 / VAR_5)) {
  VAR_3 = VAR_0;
  VAR_7->_flags |= VAR_2;
  return (0);
 }





 VAR_8 = VAR_6 * VAR_5;
 FUNC_0(VAR_7, -1);
 if (VAR_7->_r < 0)
  VAR_7->_r = 0;
 VAR_11 = VAR_8;
 VAR_9 = VAR_4;
 while (VAR_8 > (VAR_10 = VAR_7->_r)) {
  (void)FUNC_2((void *)VAR_9, (void *)VAR_7->_p, (size_t)VAR_10);
  VAR_7->_p += VAR_10;

  VAR_9 += VAR_10;
  VAR_8 -= VAR_10;
  if (FUNC_1(VAR_7)) {

   return ((VAR_11 - VAR_8) / VAR_5);
  }
 }
 (void)FUNC_2((void *)VAR_9, (void *)VAR_7->_p, VAR_8);
 VAR_7->_r -= VAR_8;
 VAR_7->_p += VAR_8;
 return (VAR_6);
}
