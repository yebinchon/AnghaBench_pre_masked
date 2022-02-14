
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int _size; int _base; } ;
struct TYPE_9__ {int _flags; TYPE_1__ _bf; int _w; scalar_t__ _r; int _p; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_4(FILE *VAR_6)
{
 int VAR_7;
 FUNC_0(VAR_6);
 if (!VAR_6->_flags) {
  VAR_5 = VAR_0;
  VAR_7 = VAR_1;
 } else {
  if (FUNC_3(VAR_6))
   FUNC_1(VAR_6);
  VAR_6->_p = VAR_6->_bf._base;
  VAR_6->_r = 0;
  VAR_6->_w = VAR_6->_flags & (VAR_2|VAR_3|VAR_4) ? 0 : VAR_6->_bf._size;
  VAR_7 = 0;
 }
 FUNC_2(VAR_6);
 return (VAR_7);
}
