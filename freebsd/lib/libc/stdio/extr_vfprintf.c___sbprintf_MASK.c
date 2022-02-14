
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int va_list ;
typedef int locale_t ;
typedef int buf ;
struct TYPE_8__ {unsigned char* _base; int _size; } ;
struct TYPE_9__ {int _flags; unsigned char* _p; int _w; scalar_t__ _lbfsize; TYPE_1__ _bf; int _mbstate; int _orientation; int _write; int _cookie; int _file; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_5, locale_t VAR_6, const char *VAR_7, va_list VAR_8)
{
 int VAR_9;
 FILE VAR_10 = VAR_2;
 unsigned char VAR_11[VAR_0];


 if (FUNC_2(VAR_5) != 0)
  return (VAR_1);


 VAR_10._flags = VAR_5->_flags & ~VAR_4;
 VAR_10._file = VAR_5->_file;
 VAR_10._cookie = VAR_5->_cookie;
 VAR_10._write = VAR_5->_write;
 VAR_10._orientation = VAR_5->_orientation;
 VAR_10._mbstate = VAR_5->_mbstate;


 VAR_10._bf._base = VAR_10._p = VAR_11;
 VAR_10._bf._size = VAR_10._w = sizeof(VAR_11);
 VAR_10._lbfsize = 0;


 VAR_9 = FUNC_1(&VAR_10, VAR_6, VAR_7, VAR_8);
 if (VAR_9 >= 0 && FUNC_0(&VAR_10))
  VAR_9 = VAR_1;
 if (VAR_10._flags & VAR_3)
  VAR_5->_flags |= VAR_3;
 return (VAR_9);
}
