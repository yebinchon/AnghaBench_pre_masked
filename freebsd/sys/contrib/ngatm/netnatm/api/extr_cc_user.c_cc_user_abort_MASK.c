
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_ie_cause {int dummy; } ;
struct ccuser {int connq; int aborted; } ;
struct ccconn {struct uni_ie_cause* cause; } ;


 int VAR_0 ;
 struct ccconn* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ccconn*) ;
 int FUNC_2 (struct ccconn*) ;
 int FUNC_3 (struct ccconn*,int ,int *) ;
 int FUNC_4 (struct ccconn*) ;
 int FUNC_5 (struct ccuser*) ;
 int FUNC_6 (struct uni_ie_cause*,int ,int) ;
 int FUNC_7 (struct ccuser*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ccuser *VAR_2, const struct uni_ie_cause *VAR_3)
{
 struct ccconn *VAR_4;
 FUNC_7(VAR_2, VAR_1);
 if (!VAR_2->aborted) {
  if ((VAR_4 = FUNC_0(&VAR_2->connq)) != ((void*)0)) {
   FUNC_6(VAR_4->cause, 0, sizeof(VAR_4->cause));
   if (VAR_3 != ((void*)0))
    VAR_4->cause[0] = *VAR_3;
   FUNC_2(VAR_4);
   FUNC_4(VAR_4);
   FUNC_3(VAR_4, VAR_0, ((void*)0));
  }
 }

 while ((VAR_4 = FUNC_0(&VAR_2->connq)) != ((void*)0)) {

  FUNC_4(VAR_4);
  FUNC_1(VAR_4);
 }

 FUNC_5(VAR_2);
}
