
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{

 VAR_2 = VAR_0;
 FUNC_4(&VAR_4);
 while (VAR_2 == VAR_0) {
  for (;;) {
   struct bio *VAR_6;

   VAR_6 = FUNC_0(&VAR_3);
   if (VAR_6 == ((void*)0))
    break;
   FUNC_5(&VAR_4);
   FUNC_1(VAR_6);
   FUNC_4(&VAR_4);
  }
  if (VAR_2 != VAR_0)
   break;
  FUNC_3(&VAR_2, &VAR_4, VAR_1,
      "gkt:wait", 0);
 }
 FUNC_5(&VAR_4);
 FUNC_6(&VAR_2);
 FUNC_2(0);
}
