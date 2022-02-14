
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int escape_t ;
struct TYPE_4__ {scalar_t__ chlen; int * ch; int * inuse; } ;
typedef TYPE_1__ _HZState ;
typedef int _HZEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,int *,scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_4(_HZEncodingInfo * __restrict VAR_3,
    char * __restrict VAR_4, size_t VAR_5, _HZState * __restrict VAR_6,
    size_t * __restrict VAR_7)
{
 escape_t *VAR_8;

 if (VAR_6->chlen != 0 || VAR_6->inuse == ((void*)0))
  return (VAR_1);
 VAR_8 = FUNC_1(VAR_3);
 if (VAR_6->inuse != VAR_8) {
  if (VAR_5 < 2)
   return (VAR_0);
  VAR_5 -= 2;
  VAR_6->ch[VAR_6->chlen++] = VAR_2;
  VAR_6->ch[VAR_6->chlen++] = FUNC_0(VAR_8);
 }
 if (VAR_5 < 1)
  return (VAR_0);
 if (VAR_6->chlen > 0)
  FUNC_3(VAR_4, VAR_6->ch, VAR_6->chlen);
 *VAR_7 = VAR_6->chlen;
 FUNC_2(VAR_3, VAR_6);

 return (0);
}
