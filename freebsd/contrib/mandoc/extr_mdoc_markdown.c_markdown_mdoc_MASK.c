
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_meta {char* title; char* msec; char* vol; char* arch; char* os; char* date; TYPE_1__* first; } ;
struct TYPE_2__ {int child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char) ;

void
FUNC_3(void *VAR_4, const struct roff_meta *VAR_5)
{
 VAR_3 = VAR_0;
 FUNC_1(VAR_5->title);
 if (VAR_5->msec != ((void*)0)) {
  VAR_3 &= ~VAR_2;
  FUNC_1("(");
  FUNC_1(VAR_5->msec);
  FUNC_1(")");
 }
 FUNC_1("-");
 FUNC_1(VAR_5->vol);
 if (VAR_5->arch != ((void*)0)) {
  FUNC_1("(");
  FUNC_1(VAR_5->arch);
  FUNC_1(")");
 }
 VAR_3 |= VAR_1;

 FUNC_0(VAR_5->first->child);

 VAR_3 |= VAR_1;
 FUNC_1(VAR_5->os);
 FUNC_1("-");
 FUNC_1(VAR_5->date);
 FUNC_2('\n');
}
