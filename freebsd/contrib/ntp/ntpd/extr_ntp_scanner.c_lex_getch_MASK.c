
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ ncol; int nline; } ;
struct FILE_INFO {int backch; TYPE_1__ curpos; TYPE_1__ bakpos; scalar_t__ fpi; scalar_t__ force_eof; } ;
struct TYPE_4__ {char* buffer; size_t pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(
 struct FILE_INFO *VAR_4
 )
{
 int VAR_5;

 if (((void*)0) == VAR_4 || VAR_4->force_eof)
  return VAR_0;

 if (VAR_0 != VAR_4->backch) {
  VAR_5 = VAR_4->backch;
  VAR_4->backch = VAR_0;
  if (VAR_4->fpi)
   VAR_2 += VAR_5;
  VAR_4->curpos.ncol++;
 } else if (VAR_4->fpi) {

  while ((VAR_5 = FUNC_0(VAR_4->fpi)) != VAR_0 && VAR_5 > VAR_1)
   VAR_4->curpos.ncol++;
  if (VAR_0 != VAR_5) {
   VAR_2 += VAR_5;
   VAR_4->curpos.ncol++;
  }
 } else {

  const char * VAR_6;
  VAR_6 = &VAR_3.buffer[VAR_3.pos];
  while ((VAR_5 = (u_char)*VAR_6) > VAR_1) {
   VAR_6++;
   VAR_4->curpos.ncol++;
  }
  if ('\0' != VAR_5) {
   VAR_6++;
   VAR_4->curpos.ncol++;
  } else {
   VAR_5 = VAR_0;
  }
  VAR_3.pos = (int)(VAR_6 - VAR_3.buffer);
 }





 if (VAR_0 == VAR_5 && VAR_4->curpos.ncol != 0)
  VAR_5 = '\n';


 if (VAR_5 == '\n') {
  VAR_4->bakpos = VAR_4->curpos;
  VAR_4->curpos.nline++;
  VAR_4->curpos.ncol = 0;
 }

 return VAR_5;
}
