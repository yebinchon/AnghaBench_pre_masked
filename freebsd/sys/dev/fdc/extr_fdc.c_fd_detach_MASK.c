
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_data {int toffhandle; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct fd_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct fd_data*,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct fd_data*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct fd_data *VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 FUNC_3(VAR_3, VAR_6, VAR_1, ((void*)0));
 while (FUNC_2(VAR_5) == VAR_0)
  FUNC_4(VAR_6, VAR_2, "fdd", VAR_4/10);
 FUNC_0(&VAR_6->toffhandle);

 return (0);
}
