
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct html {int * style; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct html*,char) ;
 int FUNC_1 (struct html*) ;
 struct tag* FUNC_2 (struct html*,int ,char*,...) ;
 int FUNC_3 (struct html*,struct tag*) ;
 int FUNC_4 (struct html*,char*) ;

void
FUNC_5(struct html *VAR_3)
{
 struct tag *VAR_4;

 FUNC_2(VAR_3, VAR_1, "?", "charset", "utf-8");
 if (VAR_3->style != ((void*)0)) {
  FUNC_2(VAR_3, VAR_0, "?h??", "rel", "stylesheet",
      VAR_3->style, "type", "text/css", "media", "all");
  return;
 }





 VAR_4 = FUNC_2(VAR_3, VAR_2, "");
 FUNC_4(VAR_3, "table.head, table.foot { width: 100%; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "td.head-rtitle, td.foot-os { text-align: right; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "td.head-vol { text-align: center; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "div.Pp { margin: 1ex 0ex; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "div.Nd, div.Bf, div.Op { display: inline; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "span.Pa, span.Ad { font-style: italic; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "span.Ms { font-weight: bold; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "dl.Bl-diag ");
 FUNC_0(VAR_3, '>');
 FUNC_4(VAR_3, " dt { font-weight: bold; }");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "code.Nm, code.Fl, code.Cm, code.Ic, "
     "code.In, code.Fd, code.Fn,");
 FUNC_1(VAR_3);
 FUNC_4(VAR_3, "code.Cd { font-weight: bold; "
     "font-family: inherit; }");
 FUNC_3(VAR_3, VAR_4);
}
