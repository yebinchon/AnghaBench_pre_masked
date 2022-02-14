
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef TYPE_1__* cap_user_header_t ;
typedef int __u32 ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(cap_user_header_t VAR_5, unsigned *VAR_6)
{
 __u32 VAR_7;

 if (FUNC_0(VAR_7, &VAR_5->version))
  return -VAR_0;

 switch (VAR_7) {
 case 130:
  FUNC_3();
  *VAR_6 = VAR_3;
  break;
 case 129:
  FUNC_2();



 case 128:
  *VAR_6 = VAR_4;
  break;
 default:
  if (FUNC_1((u32)VAR_2, &VAR_5->version))
   return -VAR_0;
  return -VAR_1;
 }

 return 0;
}
