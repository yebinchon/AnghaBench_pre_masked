
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _size; void* _base; } ;
struct TYPE_6__ {int _flags; int _file; TYPE_1__ _bf; void* _p; void* _nbuf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,size_t*,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (size_t) ;

void
FUNC_3(FILE *VAR_5)
{
 void *VAR_6;
 int VAR_7;
 size_t VAR_8;
 int VAR_9;

 if (VAR_5->_flags & VAR_2) {
  VAR_5->_bf._base = VAR_5->_p = VAR_5->_nbuf;
  VAR_5->_bf._size = 1;
  return;
 }
 VAR_7 = FUNC_0(VAR_5, &VAR_8, &VAR_9);
 if ((VAR_6 = FUNC_2(VAR_8)) == ((void*)0)) {
  VAR_5->_flags |= VAR_2;
  VAR_5->_bf._base = VAR_5->_p = VAR_5->_nbuf;
  VAR_5->_bf._size = 1;
  return;
 }
 VAR_3 = VAR_4;
 VAR_7 |= VAR_1;
 VAR_5->_bf._base = VAR_5->_p = VAR_6;
 VAR_5->_bf._size = VAR_8;
 if (VAR_9 && FUNC_1(VAR_5->_file))
  VAR_7 |= VAR_0;
 VAR_5->_flags |= VAR_7;
}
