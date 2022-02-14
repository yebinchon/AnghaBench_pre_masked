
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* listen ) (int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 if (FUNC_0(VAR_5, &VAR_7) == VAR_3) {
  VAR_8 = FUNC_3(VAR_7, VAR_6);
 } else {
  VAR_8 = VAR_4.listen(VAR_7, VAR_6);
  if (!VAR_8 && FUNC_1(VAR_5) == VAR_0)
   FUNC_2(VAR_5, VAR_7, VAR_2, VAR_1);
 }
 return VAR_8;
}
