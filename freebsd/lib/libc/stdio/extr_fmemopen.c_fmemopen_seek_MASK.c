
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmemopen_cookie {int size; int off; int len; } ;
typedef int fpos_t ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static fpos_t
FUNC_0(void *VAR_2, fpos_t VAR_3, int VAR_4)
{
 struct fmemopen_cookie *VAR_5 = VAR_2;


 switch (VAR_4) {
 case 128:
  if (VAR_3 > VAR_5->size) {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_5->off = VAR_3;
  break;

 case 130:
  if (VAR_5->off + VAR_3 > VAR_5->size) {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_5->off += VAR_3;
  break;

 case 129:
  if (VAR_3 > 0 || -VAR_3 > VAR_5->len) {
   VAR_1 = VAR_0;
   return (-1);
  }
  VAR_5->off = VAR_5->len + VAR_3;
  break;

 default:
  VAR_1 = VAR_0;
  return (-1);
 }

 return (VAR_5->off);
}
