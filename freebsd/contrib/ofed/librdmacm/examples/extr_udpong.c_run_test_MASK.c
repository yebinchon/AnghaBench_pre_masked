
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_11, VAR_12;

 VAR_3.op = VAR_7;
 VAR_11 = FUNC_1(&VAR_3, VAR_0, 1000);
 if (VAR_11 != VAR_0)
  goto out;

 VAR_3.op = VAR_1 ? VAR_5 : VAR_4;
 FUNC_2(&VAR_8, ((void*)0));
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_11 = VAR_1 ? FUNC_1(&VAR_3, VAR_10, 1) :
        FUNC_0(&VAR_3, VAR_10);
  if (VAR_11 != VAR_10)
   goto out;
 }

 VAR_3.op = VAR_6;
 VAR_11 = FUNC_1(&VAR_3, VAR_0, 1);
 if (VAR_11 != VAR_0)
  goto out;

 FUNC_2(&VAR_2, ((void*)0));
 FUNC_3();
 VAR_11 = 0;

out:
 return VAR_11;
}
