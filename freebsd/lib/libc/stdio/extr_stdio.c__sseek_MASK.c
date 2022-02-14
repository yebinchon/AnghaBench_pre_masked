
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ fpos_t ;
struct TYPE_6__ {int _base; } ;
struct TYPE_7__ {scalar_t__ (* _seek ) (int ,scalar_t__,int) ;int _flags; scalar_t__ _offset; scalar_t__ _r; TYPE_1__ _bf; int _p; int _cookie; } ;
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
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;

fpos_t
FUNC_3(FILE *VAR_9, fpos_t VAR_10, int VAR_11)
{
 fpos_t VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = VAR_8;
 VAR_8 = 0;
 VAR_12 = (*VAR_9->_seek)(VAR_9->_cookie, VAR_10, VAR_11);
 VAR_14 = VAR_8;
 if (VAR_8 == 0)
  VAR_8 = VAR_13;





 if (VAR_12 < 0) {
  if (VAR_14 == 0) {
   if (VAR_10 != 0 || VAR_11 != VAR_2) {
    if (FUNC_1(VAR_9))
     FUNC_0(VAR_9);
    VAR_9->_p = VAR_9->_bf._base;
    VAR_9->_r = 0;
    VAR_9->_flags &= ~VAR_4;
   }
   VAR_9->_flags |= VAR_5;
   VAR_8 = VAR_0;
  } else if (VAR_14 == VAR_1)
   VAR_9->_flags &= ~VAR_3;
  VAR_9->_flags &= ~VAR_6;
  VAR_12 = -1;
 } else if (VAR_9->_flags & VAR_7) {
  VAR_9->_flags |= VAR_6;
  VAR_9->_offset = VAR_12;
 }
 return (VAR_12);
}
