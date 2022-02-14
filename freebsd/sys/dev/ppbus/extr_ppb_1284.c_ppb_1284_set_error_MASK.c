
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int error; scalar_t__ state; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct ppb_data *VAR_5 = FUNC_0(VAR_2);


 if ((VAR_5->error == VAR_1) &&
   (VAR_5->state != VAR_0)) {
  VAR_5->error = VAR_3;
  VAR_5->state = VAR_0;
 }






 return (0);
}
