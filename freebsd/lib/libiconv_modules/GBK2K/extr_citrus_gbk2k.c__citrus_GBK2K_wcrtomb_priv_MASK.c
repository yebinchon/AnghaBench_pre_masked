
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {size_t chlen; int ch; } ;
typedef TYPE_1__ _GBK2KState ;
struct TYPE_6__ {int mb_cur_max; } ;
typedef TYPE_2__ _GBK2KEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_7(_GBK2KEncodingInfo * __restrict VAR_3,
    char * __restrict VAR_4, size_t VAR_5, wchar_t VAR_6, _GBK2KState * __restrict VAR_7,
    size_t * __restrict VAR_8)
{
 size_t VAR_9;
 int VAR_10;

 if (VAR_7->chlen != 0) {
  VAR_10 = VAR_2;
  goto err;
 }

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_5 < VAR_9) {
  VAR_10 = VAR_0;
  goto err;
 }

 switch (VAR_9) {
 case 1:
  if (!FUNC_3(FUNC_0(VAR_6 ))) {
   VAR_10 = VAR_1;
   goto err;
  }
  break;
 case 2:
  if (!FUNC_2 (FUNC_0(VAR_6 >> 8)) ||
      !FUNC_5 (FUNC_0(VAR_6))) {
   VAR_10 = VAR_1;
   goto err;
  }
  break;
 case 4:
  if (VAR_3->mb_cur_max != 4 ||
      !FUNC_2 (FUNC_0(VAR_6 >> 24)) ||
      !FUNC_4 (FUNC_0(VAR_6 >> 16)) ||
      !FUNC_2 (FUNC_0(VAR_6 >> 8)) ||
      !FUNC_4 (FUNC_0(VAR_6))) {
   VAR_10 = VAR_1;
   goto err;
  }
  break;
 }

 FUNC_6(VAR_4, VAR_7->ch, VAR_7->chlen);
 *VAR_8 = VAR_7->chlen;

 VAR_7->chlen = 0;

 return (0);

err:
 *VAR_8 = (size_t)-1;
 return (VAR_10);
}
