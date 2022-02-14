
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iic_dp_aux_data {int * port; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*,int) ;
 struct iic_dp_aux_data* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct iic_dp_aux_data *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->port = FUNC_1(VAR_1, "iicbus", -1);
 if (VAR_2->port == ((void*)0))
  return (VAR_0);
 FUNC_3(VAR_2->port);
 FUNC_0(VAR_1);
 return (0);
}
