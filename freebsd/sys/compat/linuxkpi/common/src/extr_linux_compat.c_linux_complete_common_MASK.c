
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct completion*,int ,int ,int ) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (struct completion*) ;
 int FUNC_4 (struct completion*,int ,int ,int ) ;

void
FUNC_5(struct completion *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2);
 if (VAR_3) {
  VAR_2->done = VAR_1;
  VAR_4 = FUNC_1(VAR_2, VAR_0, 0, 0);
 } else {
  if (VAR_2->done != VAR_1)
   VAR_2->done++;
  VAR_4 = FUNC_4(VAR_2, VAR_0, 0, 0);
 }
 FUNC_3(VAR_2);
 if (VAR_4)
  FUNC_0();
}
