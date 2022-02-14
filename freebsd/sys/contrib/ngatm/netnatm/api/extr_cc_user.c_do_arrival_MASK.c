
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccuser {int connq; scalar_t__ aborted; } ;
struct ccconn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccconn* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct ccconn*,int ,int *) ;
 int FUNC_2 (struct ccuser*,int ,int *,int ) ;
 int FUNC_3 (struct ccuser*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ccuser *VAR_3)
{
 struct ccconn *VAR_4;

 VAR_3->aborted = 0;
 if ((VAR_4 = FUNC_0(&VAR_3->connq)) != ((void*)0)) {
  FUNC_3(VAR_3, VAR_2);
  FUNC_2(VAR_3, VAR_0, ((void*)0), 0);
  FUNC_1(VAR_4, VAR_1, ((void*)0));
 }
}
