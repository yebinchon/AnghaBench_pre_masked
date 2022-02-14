
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iic_dp_aux_data {int running; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iic_dp_aux_data* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_3, bool VAR_4)
{
 struct iic_dp_aux_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = VAR_1;
 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 |= VAR_2;
 if (VAR_5->running) {
  (void)FUNC_1(VAR_3, VAR_6, 0, ((void*)0));
  VAR_5->running = 0;
 }
}
