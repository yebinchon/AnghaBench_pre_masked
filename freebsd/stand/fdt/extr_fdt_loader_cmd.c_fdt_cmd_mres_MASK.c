
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, char *VAR_3[])
{
 uint64_t VAR_4, VAR_5;
 int VAR_6, VAR_7;
 char VAR_8[80];

 FUNC_3();
 VAR_7 = FUNC_1(VAR_1);
 if (VAR_7 > 0) {
  if (FUNC_4("Reserved memory regions:\n"))
   goto out;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   FUNC_0(VAR_1, VAR_6, &VAR_4, &VAR_5);
   FUNC_5(VAR_8, "reg#%d: (start: 0x%jx, size: 0x%jx)\n",
       VAR_6, VAR_4, VAR_5);
   if (FUNC_4(VAR_8))
    goto out;
  }
 } else
  FUNC_4("No reserved memory regions\n");
out:
 FUNC_2();

 return (VAR_0);
}
