
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {char* et_name; int et_flags; int et_quality; int et_frequency; int et_min_period; int et_max_period; int et_start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int *,int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6)
{


 VAR_3.et_name = "Hyper-V";
 VAR_3.et_flags = VAR_0 | VAR_1;
 VAR_3.et_quality = 1000;
 VAR_3.et_frequency = VAR_2;
 VAR_3.et_min_period = (0x00000001ULL << 32) / VAR_2;
 VAR_3.et_max_period = (0xfffffffeULL << 32) / VAR_2;
 VAR_3.et_start = VAR_5;





 FUNC_0(100);
 FUNC_2(((void*)0), VAR_4, ((void*)0), ((void*)0));

 return (FUNC_1(&VAR_3));
}
