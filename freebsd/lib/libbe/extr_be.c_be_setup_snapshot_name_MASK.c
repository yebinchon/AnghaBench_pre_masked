
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,int) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_6(libbe_handle_t *VAR_2, char *VAR_3, size_t VAR_4)
{
 time_t VAR_5;
 int VAR_6, VAR_7;

 FUNC_4(&VAR_5);
 VAR_6 = FUNC_3(VAR_3);
 VAR_6 += FUNC_2(VAR_3 + VAR_6, VAR_4 - VAR_6, "@%F-%T", FUNC_0(&VAR_5));

 if (VAR_4 - VAR_6 < 2)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  FUNC_1(VAR_3 + VAR_6, VAR_4 - VAR_6, "-%d", VAR_7);
  if (!FUNC_5(VAR_2->lzh, VAR_3, VAR_1))
   return;
 }
}
