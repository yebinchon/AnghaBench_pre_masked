
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,long*,int) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_2(vm_offset_t VAR_2, char *VAR_3, u_int VAR_4, long *VAR_5,
    int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0((caddr_t)VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6);
 if (VAR_7 == 0 || VAR_7 == VAR_1)
  return (VAR_7);

 *VAR_5 = 0;
 FUNC_1(VAR_3, "??", VAR_4);
 return (VAR_0);
}
