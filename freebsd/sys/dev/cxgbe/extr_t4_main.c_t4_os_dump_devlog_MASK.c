
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct adapter*,struct sbuf*,int ) ;
 int FUNC_5 (struct sbuf*) ;
 struct sbuf* FUNC_6 (struct sbuf*,int *,int,int ) ;

void
FUNC_7(struct adapter *VAR_3)
{
 int VAR_4;
 struct sbuf VAR_5;

 if (FUNC_6(&VAR_5, ((void*)0), 4096, VAR_2) != &VAR_5)
  return;
 VAR_4 = FUNC_4(VAR_3, &VAR_5, VAR_1);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_5(&VAR_5);
  if (VAR_4 == 0) {
   FUNC_1(VAR_0, "%s: device log follows.\n%s",
        FUNC_0(VAR_3->dev), FUNC_2(&VAR_5));
  }
 }
 FUNC_3(&VAR_5);
}
