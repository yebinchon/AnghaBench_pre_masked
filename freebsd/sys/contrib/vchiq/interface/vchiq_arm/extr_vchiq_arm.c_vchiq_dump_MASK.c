
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ actual; scalar_t__ space; scalar_t__ offset; scalar_t__ buf; } ;
typedef TYPE_1__ DUMP_CONTEXT_T ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 int FUNC_1 (int,int) ;

void
FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2)
{
 DUMP_CONTEXT_T *VAR_3 = (DUMP_CONTEXT_T *)VAR_0;

 if (VAR_3->actual < VAR_3->space) {
  int VAR_4;
  if (VAR_3->offset > 0) {
   int VAR_5 = FUNC_1(VAR_2, (int)VAR_3->offset);
   VAR_1 += VAR_5;
   VAR_2 -= VAR_5;
   VAR_3->offset -= VAR_5;
   if (VAR_3->offset > 0)
    return;
  }
  VAR_4 = FUNC_1(VAR_2, (int)(VAR_3->space - VAR_3->actual));
  if (VAR_4 == 0)
   return;
  FUNC_0(VAR_3->buf + VAR_3->actual, VAR_1, VAR_4);
  VAR_3->actual += VAR_4;
  VAR_2 -= VAR_4;




  if ((VAR_2 == 0) && (VAR_1[VAR_4 - 1] == '\0')) {
   char VAR_6 = '\n';
   FUNC_0(VAR_3->buf + VAR_3->actual - 1, &VAR_6, 1);
  }
 }
}
