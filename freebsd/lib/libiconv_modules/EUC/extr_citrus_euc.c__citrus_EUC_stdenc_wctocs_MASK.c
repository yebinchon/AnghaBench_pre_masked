
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ _index_t ;
typedef scalar_t__ _csid_t ;
typedef scalar_t__ _citrus_index_t ;
typedef scalar_t__ _citrus_csid_t ;
struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ _EUCEncodingInfo ;



__attribute__((used)) static __inline int

FUNC_0(_EUCEncodingInfo * __restrict VAR_0,
    _csid_t * __restrict VAR_1, _index_t * __restrict VAR_2, wchar_t VAR_3)
{
 wchar_t VAR_4, VAR_5;

 VAR_4 = VAR_3 & VAR_0->mask;
 VAR_5 = VAR_3 & ~VAR_4;

 *VAR_1 = (_citrus_csid_t)VAR_4;
 *VAR_2 = (_citrus_index_t)VAR_5;

 return (0);
}
