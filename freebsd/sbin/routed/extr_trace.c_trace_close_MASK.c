
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;

void
FUNC_6(int VAR_9)
{
 int VAR_10;


 FUNC_3(VAR_8);
 FUNC_3(VAR_7);

 if (VAR_5 != ((void*)0) && VAR_9) {
  if (VAR_5 != VAR_8)
   FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
  VAR_10 = FUNC_5(VAR_4, VAR_0);
  if (VAR_10 < 0)
   return;
  if (FUNC_4(VAR_2))
   (void)FUNC_1(VAR_10, VAR_2);
  if (FUNC_4(VAR_3))
   (void)FUNC_1(VAR_10, VAR_3);
  if (FUNC_4(VAR_1))
   (void)FUNC_1(VAR_10, VAR_1);
  (void)FUNC_0(VAR_10);
 }
 VAR_6.tv_sec = 0;
}
