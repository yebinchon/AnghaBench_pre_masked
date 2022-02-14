
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct vmcs {int dummy; } ;


 int FUNC_0 (struct vmcs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vmcs*) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct vmcs *VAR_4, u_long VAR_5, u_int VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_4);






 if ((VAR_7 = FUNC_2(VAR_2, VAR_5)) != 0)
  goto done;
 if ((VAR_7 = FUNC_2(VAR_3, VAR_6)) != 0)
  goto done;

 if ((VAR_7 = FUNC_2(VAR_0, VAR_5)) != 0)
  goto done;
 if ((VAR_7 = FUNC_2(VAR_1, VAR_6)) != 0)
  goto done;

 VAR_7 = 0;
done:
 FUNC_0(VAR_4);
 return (VAR_7);
}
