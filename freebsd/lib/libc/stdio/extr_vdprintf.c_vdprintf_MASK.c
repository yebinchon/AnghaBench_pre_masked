
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
typedef int buf ;
struct TYPE_6__ {unsigned char* _base; int _size; } ;
struct TYPE_7__ {unsigned char* _p; int _w; int _file; TYPE_1__ _bf; int _write; struct TYPE_7__* _cookie; int _flags; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ,char const*,int ) ;
 int VAR_7 ;

int
FUNC_3(int VAR_8, const char * __restrict VAR_9, va_list VAR_10)
{
 FILE VAR_11 = VAR_3;
 unsigned char VAR_12[VAR_0];
 int VAR_13;

 if (VAR_8 > VAR_4) {
  VAR_7 = VAR_1;
  return (VAR_2);
 }

 VAR_11._p = VAR_12;
 VAR_11._w = sizeof(VAR_12);
 VAR_11._flags = VAR_5;
 VAR_11._file = VAR_8;
 VAR_11._cookie = &VAR_11;
 VAR_11._write = VAR_6;
 VAR_11._bf._base = VAR_12;
 VAR_11._bf._size = sizeof(VAR_12);

 if ((VAR_13 = FUNC_2(&VAR_11, FUNC_1(), VAR_9, VAR_10)) < 0)
  return (VAR_13);

 return (FUNC_0(&VAR_11) ? VAR_2 : VAR_13);
}
