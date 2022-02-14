
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_cookie; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int,int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(pmap_t VAR_6)
{
 int VAR_7;

 FUNC_5(&VAR_4);







 if (FUNC_1(VAR_6->pm_cookie) == VAR_1)
  goto out;

 FUNC_3(VAR_3, VAR_2, VAR_5, &VAR_7);
 if (VAR_7 == -1) {
  FUNC_3(VAR_3, VAR_0, VAR_2,
      &VAR_7);
  if (VAR_7 == -1) {
   FUNC_7();
   FUNC_3(VAR_3, VAR_0,
       VAR_5, &VAR_7);
   FUNC_2(VAR_7 != -1, ("ASID allocation failure"));
  }
 }
 FUNC_4(VAR_3, VAR_7);
 VAR_2 = VAR_7 + 1;
 VAR_6->pm_cookie = FUNC_0(VAR_7, VAR_1);
out:
 FUNC_6(&VAR_4);
}
