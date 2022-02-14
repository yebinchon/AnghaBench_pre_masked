
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hists {int dummy; } ;
struct TYPE_8__ {int use_navkeypressed; int seek; int refresh; } ;
struct hist_browser {int has_symbols; TYPE_3__ b; struct hists* hists; } ;
struct TYPE_7__ {int * next; } ;
struct TYPE_10__ {TYPE_2__ list; } ;
struct TYPE_6__ {int * next; } ;
struct TYPE_9__ {TYPE_1__ list; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 struct hist_browser* FUNC_0 (int) ;

__attribute__((used)) static struct hist_browser *FUNC_1(struct hists *VAR_5)
{
 struct hist_browser *VAR_6 = FUNC_0(sizeof(*VAR_6));

 if (VAR_6) {
  VAR_6->hists = VAR_5;
  VAR_6->b.refresh = VAR_0;
  VAR_6->b.seek = VAR_4;
  VAR_6->b.use_navkeypressed = 1;
  if (VAR_1 == 1)
   VAR_6->has_symbols = VAR_3.list.next != ((void*)0);
  else
   VAR_6->has_symbols = VAR_2.list.next != ((void*)0);
 }

 return VAR_6;
}
