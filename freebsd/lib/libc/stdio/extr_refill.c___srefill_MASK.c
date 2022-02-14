
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int _size; int * _base; } ;
struct TYPE_11__ {scalar_t__ _r; int _flags; scalar_t__ _ur; TYPE_1__ _bf; int * _p; int * _up; scalar_t__ _lbfsize; scalar_t__ _w; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*,int ) ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_8(FILE *VAR_14)
{


 if (!VAR_11)
  FUNC_4();

 FUNC_2(VAR_14, -1);

 VAR_14->_r = 0;


 if (VAR_14->_flags & VAR_2)
  return (VAR_1);


 if ((VAR_14->_flags & VAR_8) == 0) {
  if ((VAR_14->_flags & VAR_9) == 0) {
   VAR_12 = VAR_0;
   VAR_14->_flags |= VAR_3;
   return (VAR_1);
  }

  if (VAR_14->_flags & VAR_10) {
   if (FUNC_3(VAR_14))
    return (VAR_1);
   VAR_14->_flags &= ~VAR_10;
   VAR_14->_w = 0;
   VAR_14->_lbfsize = 0;
  }
  VAR_14->_flags |= VAR_8;
 } else {






  if (FUNC_1(VAR_14)) {
   FUNC_0(VAR_14);
   if ((VAR_14->_r = VAR_14->_ur) != 0) {
    VAR_14->_p = VAR_14->_up;
    return (0);
   }
  }
 }

 if (VAR_14->_bf._base == ((void*)0))
  FUNC_5(VAR_14);






 if (VAR_14->_flags & (VAR_5|VAR_7)) {

  VAR_14->_flags |= VAR_4;
  (void) FUNC_6(VAR_13);
  VAR_14->_flags &= ~VAR_4;


  if ((VAR_14->_flags & (VAR_5|VAR_10)) == (VAR_5|VAR_10))
   FUNC_3(VAR_14);
 }
 VAR_14->_p = VAR_14->_bf._base;
 VAR_14->_r = FUNC_7(VAR_14, (char *)VAR_14->_p, VAR_14->_bf._size);
 VAR_14->_flags &= ~VAR_6;
 if (VAR_14->_r <= 0) {
  if (VAR_14->_r == 0)
   VAR_14->_flags |= VAR_2;
  else {
   VAR_14->_r = 0;
   VAR_14->_flags |= VAR_3;
  }
  return (VAR_1);
 }
 return (0);
}
