
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int _index_t ;
typedef int _csid_t ;
struct TYPE_3__ {int mb_cur_max; } ;
typedef TYPE_1__ _GBK2KEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline int

FUNC_0(_GBK2KEncodingInfo * __restrict VAR_2,
    wchar_t * __restrict VAR_3, _csid_t VAR_4, _index_t VAR_5)
{

 switch (VAR_4) {
 case 0:

  *VAR_3 = (wchar_t)VAR_5;
  break;
 case 1:

  *VAR_3 = (wchar_t)VAR_5 | 0x8080U;
  break;
 case 2:

  *VAR_3 = (wchar_t)VAR_5;
  break;
 case 3:

  if (VAR_2->mb_cur_max != 4)
   return (VAR_1);
  *VAR_3 = (wchar_t)VAR_5;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
