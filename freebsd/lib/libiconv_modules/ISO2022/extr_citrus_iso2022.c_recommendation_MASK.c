
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* recommendsize; scalar_t__ maxcharset; TYPE_2__** recommend; } ;
typedef TYPE_1__ _ISO2022EncodingInfo ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ final; scalar_t__ interm; } ;
typedef TYPE_2__ _ISO2022Charset ;







__attribute__((used)) static int
FUNC_0(_ISO2022EncodingInfo * __restrict VAR_0,
    _ISO2022Charset * __restrict VAR_1)
{
 _ISO2022Charset *VAR_2;
 size_t VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_2 = VAR_0->recommend[VAR_4];
  for (VAR_3 = 0; VAR_3 < VAR_0->recommendsize[VAR_4]; VAR_3++) {
   if (VAR_1->type != VAR_2[VAR_3].type)
    continue;
   if (VAR_1->final != VAR_2[VAR_3].final)
    continue;
   if (VAR_1->interm != VAR_2[VAR_3].interm)
    continue;

   return (VAR_4);
  }
 }


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_2 = VAR_0->recommend[VAR_4];
  for (VAR_3 = 0; VAR_3 < VAR_0->recommendsize[VAR_4]; VAR_3++) {
   if (VAR_1->type != VAR_2[VAR_3].type)
    continue;
   if (VAR_1->final && (VAR_1->final != VAR_2[VAR_3].final))
    continue;
   if (VAR_1->interm && (VAR_1->interm != VAR_2[VAR_3].interm))
    continue;

   return (VAR_4);
  }
 }


 if (VAR_0->maxcharset == 0) {
  return (0);
 } else {
  switch (VAR_1->type) {
  case 131:
  case 130:
   return (0);
  case 129:
  case 128:
   return (1);
  }
 }
 return (0);
}
