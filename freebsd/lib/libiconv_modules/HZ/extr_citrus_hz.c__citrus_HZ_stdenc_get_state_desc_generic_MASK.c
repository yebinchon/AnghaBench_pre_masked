
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chlen; scalar_t__* ch; int * inuse; } ;
typedef TYPE_1__ _HZState ;
typedef int _HZEncodingInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline int
FUNC_1(_HZEncodingInfo * __restrict VAR_6,
    _HZState * __restrict VAR_7, int * __restrict VAR_8)
{

 if (VAR_7->chlen < 0 || VAR_7->inuse == ((void*)0))
  return (VAR_0);
 *VAR_8 = (VAR_7->chlen == 0)
     ? ((VAR_7->inuse == FUNC_0(VAR_6))
         ? VAR_4
         : VAR_5)
     : ((VAR_7->ch[0] == VAR_1)
         ? VAR_3
         : VAR_2);

 return (0);
}
