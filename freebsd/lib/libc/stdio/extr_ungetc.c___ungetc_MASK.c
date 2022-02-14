
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int _size; int* _base; } ;
struct TYPE_8__ {int* _base; } ;
struct TYPE_10__ {int _flags; int _r; int* _p; int _ur; int* _up; int* _ubuf; TYPE_2__ _ub; TYPE_1__ _bf; scalar_t__ _lbfsize; scalar_t__ _w; } ;
typedef TYPE_3__ FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

int
FUNC_3(int VAR_5, FILE *VAR_6)
{

 if (VAR_5 == VAR_0)
  return (VAR_0);
 if ((VAR_6->_flags & VAR_2) == 0) {




  if ((VAR_6->_flags & VAR_3) == 0)
   return (VAR_0);
  if (VAR_6->_flags & VAR_4) {
   if (FUNC_1(VAR_6))
    return (VAR_0);
   VAR_6->_flags &= ~VAR_4;
   VAR_6->_w = 0;
   VAR_6->_lbfsize = 0;
  }
  VAR_6->_flags |= VAR_2;
 }
 VAR_5 = (unsigned char)VAR_5;





 if (FUNC_0(VAR_6)) {
  if (VAR_6->_r >= VAR_6->_ub._size && FUNC_2(VAR_6))
   return (VAR_0);
  *--VAR_6->_p = VAR_5;
  VAR_6->_r++;
  return (VAR_5);
 }
 VAR_6->_flags &= ~VAR_1;






 if (VAR_6->_bf._base != ((void*)0) && VAR_6->_p > VAR_6->_bf._base &&
     VAR_6->_p[-1] == VAR_5) {
  VAR_6->_p--;
  VAR_6->_r++;
  return (VAR_5);
 }





 VAR_6->_ur = VAR_6->_r;
 VAR_6->_up = VAR_6->_p;
 VAR_6->_ub._base = VAR_6->_ubuf;
 VAR_6->_ub._size = sizeof(VAR_6->_ubuf);
 VAR_6->_ubuf[sizeof(VAR_6->_ubuf) - 1] = VAR_5;
 VAR_6->_p = &VAR_6->_ubuf[sizeof(VAR_6->_ubuf) - 1];
 VAR_6->_r = 1;
 return (VAR_5);
}
