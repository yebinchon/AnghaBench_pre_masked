
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*,int*) ;

int
FUNC_3(int *VAR_1)
{
 char *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_0(0xffff0, 16);
 FUNC_2(VAR_2 + 11, "%2d", &VAR_3);
 FUNC_1((vm_offset_t)VAR_2, 16);





 if (VAR_3 > 90 && VAR_3 < 99)
  *VAR_1 = VAR_0;

 return (0);
}
