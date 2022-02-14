
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct roff_meta {char* vol; int msec; int title; } ;
struct html {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,int ,int ) ;
 struct tag* FUNC_3 (struct html*,int ,char*,...) ;
 int FUNC_4 (struct html*,struct tag*) ;
 int FUNC_5 (struct html*,struct tag*) ;
 int FUNC_6 (struct html*,char*) ;

__attribute__((used)) static void
FUNC_7(const struct roff_meta *VAR_3, struct html *VAR_4)
{
 struct tag *VAR_5, *VAR_6;
 char *VAR_7;

 FUNC_0(VAR_3->title);
 FUNC_0(VAR_3->msec);
 FUNC_2(&VAR_7, "%s(%s)", VAR_3->title, VAR_3->msec);

 VAR_5 = FUNC_3(VAR_4, VAR_0, "c", "head");
 VAR_6 = FUNC_3(VAR_4, VAR_2, "");

 FUNC_3(VAR_4, VAR_1, "c", "head-ltitle");
 FUNC_6(VAR_4, VAR_7);
 FUNC_4(VAR_4, VAR_6);

 FUNC_3(VAR_4, VAR_1, "c", "head-vol");
 if (VAR_3->vol != ((void*)0))
  FUNC_6(VAR_4, VAR_3->vol);
 FUNC_4(VAR_4, VAR_6);

 FUNC_3(VAR_4, VAR_1, "c", "head-rtitle");
 FUNC_6(VAR_4, VAR_7);
 FUNC_5(VAR_4, VAR_5);
 FUNC_1(VAR_7);
}
