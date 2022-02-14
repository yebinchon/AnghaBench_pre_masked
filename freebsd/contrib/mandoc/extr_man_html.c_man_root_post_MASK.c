
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int dummy; } ;
struct roff_meta {int * os; int * date; } ;
struct html {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tag* FUNC_0 (struct html*,int ,char*,...) ;
 int FUNC_1 (struct html*,struct tag*) ;
 int FUNC_2 (struct html*,struct tag*) ;
 int FUNC_3 (struct html*,int *) ;

__attribute__((used)) static void
FUNC_4(const struct roff_meta *VAR_3, struct html *VAR_4)
{
 struct tag *VAR_5, *VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_0, "c", "foot");
 VAR_6 = FUNC_0(VAR_4, VAR_2, "");

 FUNC_0(VAR_4, VAR_1, "c", "foot-date");
 FUNC_3(VAR_4, VAR_3->date);
 FUNC_1(VAR_4, VAR_6);

 FUNC_0(VAR_4, VAR_1, "c", "foot-os");
 if (VAR_3->os != ((void*)0))
  FUNC_3(VAR_4, VAR_3->os);
 FUNC_2(VAR_4, VAR_5);
}
