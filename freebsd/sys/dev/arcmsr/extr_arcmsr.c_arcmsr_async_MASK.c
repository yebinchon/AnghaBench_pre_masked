
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct AdapterControlBlock {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (struct cam_path*) ;
 int FUNC_2 (struct cam_path*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u_int32_t VAR_3, struct cam_path *VAR_4, void *VAR_5)
{
 struct AdapterControlBlock *VAR_6;
 u_int8_t VAR_7, VAR_8;
 struct cam_sim *VAR_9;

 VAR_9 = (struct cam_sim *) VAR_2;
 VAR_6 =(struct AdapterControlBlock *) FUNC_0(VAR_9);
 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_2(VAR_4);
  VAR_8 = FUNC_1(VAR_4);
  if((VAR_7 > VAR_0) || (VAR_8 > VAR_1)) {
   break;
  }

  break;
 default:
  break;
 }
}
