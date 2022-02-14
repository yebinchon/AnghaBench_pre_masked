
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strpush {char const* prevstring; int prevnleft; struct alias* ap; int prevlleft; struct strpush* prev; } ;
struct alias {int flag; } ;
struct TYPE_2__ {struct strpush basestrpush; struct strpush* strpush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strpush* FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;

void
FUNC_1(const char *VAR_7, int VAR_8, struct alias *VAR_9)
{
 struct strpush *VAR_10;

 VAR_1;

 if (VAR_3->strpush) {
  VAR_10 = FUNC_0(sizeof (struct strpush));
  VAR_10->prev = VAR_3->strpush;
  VAR_3->strpush = VAR_10;
 } else
  VAR_10 = VAR_3->strpush = &(VAR_3->basestrpush);
 VAR_10->prevstring = VAR_5;
 VAR_10->prevnleft = VAR_6;
 VAR_10->prevlleft = VAR_4;
 VAR_10->ap = VAR_9;
 if (VAR_9)
  VAR_9->flag |= VAR_0;
 VAR_5 = VAR_7;
 VAR_6 = VAR_8;
 VAR_2;
}
