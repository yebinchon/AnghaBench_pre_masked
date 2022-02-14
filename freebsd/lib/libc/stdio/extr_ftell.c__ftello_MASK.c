
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fpos_t ;
struct TYPE_6__ {int * _base; } ;
struct TYPE_7__ {int _flags; int _flags2; int _offset; scalar_t__ _ur; scalar_t__ _r; TYPE_1__ _bf; int * _p; int * _seek; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int VAR_12 ;

int
FUNC_2(FILE *VAR_13, fpos_t *VAR_14)
{
 fpos_t VAR_15;
 size_t VAR_16;

 if (VAR_13->_seek == ((void*)0)) {
  VAR_12 = VAR_2;
  return (1);
 }





 if (!(VAR_13->_flags & VAR_10) && (VAR_13->_flags & VAR_11) &&
     VAR_13->_p != ((void*)0) && VAR_13->_p - VAR_13->_bf._base > 0 &&
     ((VAR_13->_flags & VAR_7) || (VAR_13->_flags2 & VAR_6))) {
  VAR_15 = FUNC_1(VAR_13, (fpos_t)0, VAR_5);
  if (VAR_15 == -1)
   return (1);
 } else if (VAR_13->_flags & VAR_9)
  VAR_15 = VAR_13->_offset;
 else {
  VAR_15 = FUNC_1(VAR_13, (fpos_t)0, VAR_4);
  if (VAR_15 == -1)
   return (1);
 }
 if (VAR_13->_flags & VAR_10) {





  if ((VAR_15 -= (FUNC_0(VAR_13) ? VAR_13->_ur : VAR_13->_r)) < 0) {
   VAR_13->_flags |= VAR_8;
   VAR_12 = VAR_0;
   return (1);
  }
  if (FUNC_0(VAR_13))
   VAR_15 -= VAR_13->_r;
 } else if ((VAR_13->_flags & VAR_11) && VAR_13->_p != ((void*)0) &&
     (VAR_16 = VAR_13->_p - VAR_13->_bf._base) > 0) {





  if (VAR_15 > VAR_3 - VAR_16) {
   VAR_12 = VAR_1;
   return (1);
  }
  VAR_15 += VAR_16;
 }
 *VAR_14 = VAR_15;
 return (0);
}
