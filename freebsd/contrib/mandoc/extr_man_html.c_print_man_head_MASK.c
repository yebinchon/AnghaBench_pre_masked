
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_meta {int msec; int title; } ;
struct html {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,int ,int ) ;
 int FUNC_2 (struct html*) ;
 int FUNC_3 (struct html*,int ,char*) ;
 int FUNC_4 (struct html*,char*) ;

__attribute__((used)) static void
FUNC_5(const struct roff_meta *VAR_1, struct html *VAR_2)
{
 char *VAR_3;

 FUNC_2(VAR_2);
 FUNC_1(&VAR_3, "%s(%s)", VAR_1->title, VAR_1->msec);
 FUNC_3(VAR_2, VAR_0, "");
 FUNC_4(VAR_2, VAR_3);
 FUNC_0(VAR_3);
}
