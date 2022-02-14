
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
struct macros {scalar_t__ level; char** macro; size_t offset; } ;
struct TYPE_8__ {TYPE_1__* el_read; } ;
struct TYPE_7__ {int (* read_char ) (TYPE_2__*,char*) ;int read_errno; struct macros macros; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int FUNC_0 (struct macros*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

int
FUNC_4(EditLine *VAR_1, wchar_t *VAR_2)
{
 struct macros *VAR_3 = &VAR_1->el_read->macros;
 int VAR_4;

 FUNC_2(VAR_1);
 for (;;) {
  if (VAR_3->level < 0)
   break;

  if (VAR_3->macro[0][VAR_3->offset] == '\0') {
   FUNC_0(VAR_3);
   continue;
  }

  *VAR_2 = VAR_3->macro[0][VAR_3->offset++];

  if (VAR_3->macro[0][VAR_3->offset] == '\0') {

   FUNC_0(VAR_3);
  }

  return 1;
 }

 if (FUNC_3(VAR_1) < 0)
  return 0;

 VAR_4 = (*VAR_1->el_read->read_char)(VAR_1, VAR_2);






 if (VAR_4 < 0)
  VAR_1->el_read->read_errno = VAR_0;

 return VAR_4;
}
