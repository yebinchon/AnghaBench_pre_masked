
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int _index_t ;
typedef int _csid_t ;
struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ _EUCEncodingInfo ;


 int VAR_0 ;

__attribute__((used)) static __inline int

FUNC_0(_EUCEncodingInfo * __restrict VAR_1,
    wchar_t * __restrict VAR_2, _csid_t VAR_3, _index_t VAR_4)
{

 if ((VAR_3 & ~VAR_1->mask) != 0 || (VAR_4 & VAR_1->mask) != 0)
  return (VAR_0);

 *VAR_2 = (wchar_t)VAR_3 | (wchar_t)VAR_4;

 return (0);
}
