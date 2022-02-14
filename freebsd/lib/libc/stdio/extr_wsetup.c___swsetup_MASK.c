
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ _size; int * _base; } ;
struct TYPE_8__ {int _flags; TYPE_1__ _bf; scalar_t__ _w; scalar_t__ _lbfsize; int * _p; scalar_t__ _r; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_10 ;

int
FUNC_4(FILE *VAR_11)
{

 if (!VAR_9)
  FUNC_2();




 if ((VAR_11->_flags & VAR_8) == 0) {
  if ((VAR_11->_flags & VAR_7) == 0) {
   VAR_10 = VAR_0;
   VAR_11->_flags |= VAR_3;
   return (VAR_1);
  }
  if (VAR_11->_flags & VAR_6) {

   if (FUNC_1(VAR_11))
    FUNC_0(VAR_11);
   VAR_11->_flags &= ~(VAR_6|VAR_2);
   VAR_11->_r = 0;
   VAR_11->_p = VAR_11->_bf._base;
  }
  VAR_11->_flags |= VAR_8;
 }




 if (VAR_11->_bf._base == ((void*)0))
  FUNC_3(VAR_11);
 if (VAR_11->_flags & VAR_4) {





  VAR_11->_w = 0;
  VAR_11->_lbfsize = -VAR_11->_bf._size;
 } else
  VAR_11->_w = VAR_11->_flags & VAR_5 ? 0 : VAR_11->_bf._size;
 return (0);
}
