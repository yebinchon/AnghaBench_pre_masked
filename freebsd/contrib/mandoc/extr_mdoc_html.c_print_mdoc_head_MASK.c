
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_meta {int title; int * arch; int * msec; } ;
struct html {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,int ,int *,...) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct html*) ;
 int FUNC_4 (struct html*,int ,char*) ;
 int FUNC_5 (struct html*,char*) ;

__attribute__((used)) static void
FUNC_6(const struct roff_meta *VAR_1, struct html *VAR_2)
{
 char *VAR_3;

 FUNC_3(VAR_2);

 if (VAR_1->arch != ((void*)0) && VAR_1->msec != ((void*)0))
  FUNC_1(&VAR_3, "%s(%s) (%s)", VAR_1->title,
      VAR_1->msec, VAR_1->arch);
 else if (VAR_1->msec != ((void*)0))
  FUNC_1(&VAR_3, "%s(%s)", VAR_1->title, VAR_1->msec);
 else if (VAR_1->arch != ((void*)0))
  FUNC_1(&VAR_3, "%s (%s)", VAR_1->title, VAR_1->arch);
 else
  VAR_3 = FUNC_2(VAR_1->title);

 FUNC_4(VAR_2, VAR_0, "");
 FUNC_5(VAR_2, VAR_3);
 FUNC_0(VAR_3);
}
