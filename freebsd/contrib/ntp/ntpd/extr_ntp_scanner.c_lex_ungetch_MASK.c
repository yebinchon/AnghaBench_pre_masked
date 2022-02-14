
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int ncol; } ;
struct FILE_INFO {int backch; TYPE_1__ curpos; TYPE_1__ bakpos; scalar_t__ fpi; scalar_t__ force_eof; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(
 int VAR_2,
 struct FILE_INFO *VAR_3
 )
{

 if (((void*)0) == VAR_3 || VAR_3->force_eof)
  return VAR_0;
 if (VAR_0 != VAR_3->backch || VAR_0 == VAR_2)
  return VAR_0;


 VAR_3->backch = (u_char)VAR_2;
 if (VAR_3->fpi)
  VAR_1 -= VAR_3->backch;


 if (VAR_3->backch == '\n') {
     VAR_3->curpos = VAR_3->bakpos;
     VAR_3->bakpos.ncol = -1;
 }
 VAR_3->curpos.ncol--;
 return VAR_3->backch;
}
