
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dev; int flags; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_2 (struct adapter*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int ,struct adapter*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct adapter*) ;

void
FUNC_7(struct adapter *VAR_6, bool VAR_7)
{

 FUNC_6(VAR_6);
 FUNC_5(VAR_1, "%s: encountered fatal error, adapter stopped.\n",
     FUNC_4(VAR_6->dev));
 if (VAR_7) {
  FUNC_2(VAR_6);
  VAR_6->flags |= VAR_0;
 } else {
  FUNC_0(VAR_6);
  VAR_6->flags |= VAR_0;
  FUNC_1(VAR_6);
 }

 if (VAR_5) {
  FUNC_5(VAR_1, "%s: panic on fatal error after 30s",
      FUNC_4(VAR_6->dev));
  FUNC_3(&VAR_3, VAR_4 * 30, VAR_2, VAR_6);
 }
}
