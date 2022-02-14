
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iic_dp_aux_data {int running; int address; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iic_dp_aux_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, u16 VAR_4, bool VAR_5)
{
 struct iic_dp_aux_data *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = VAR_1;
 if (VAR_5)
  VAR_7 |= VAR_0;
 else
  VAR_7 |= VAR_2;
 VAR_6->address = VAR_4;
 VAR_6->running = 1;
 VAR_8 = FUNC_1(VAR_3, VAR_7, 0, ((void*)0));
 return (VAR_8);
}
