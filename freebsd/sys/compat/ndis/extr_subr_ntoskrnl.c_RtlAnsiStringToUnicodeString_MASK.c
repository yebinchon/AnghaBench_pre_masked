
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int us_len; int us_maxlen; int * us_buf; } ;
typedef TYPE_1__ unicode_string ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int as_len; int as_buf; } ;
typedef TYPE_2__ ansi_string ;


 int * FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;

uint32_t
FUNC_3(unicode_string *VAR_5, ansi_string *VAR_6,
 uint8_t VAR_7)
{
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_2);

 if (VAR_7 == VAR_4) {
  VAR_5->us_buf = FUNC_0(VAR_0,
      VAR_6->as_len * 2, 0);
  if (VAR_5->us_buf == ((void*)0))
   return (VAR_1);
  VAR_5->us_len = VAR_5->us_maxlen = FUNC_2(VAR_6->as_buf) * 2;
 } else {
  VAR_5->us_len = VAR_6->as_len * 2;
  if (VAR_5->us_maxlen < VAR_5->us_len)
   VAR_5->us_len = VAR_5->us_maxlen;
 }

 FUNC_1(VAR_6->as_buf, VAR_5->us_buf,
     VAR_5->us_len / 2);

 return (VAR_3);
}
