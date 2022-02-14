
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, int VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 8:
  FUNC_1(VAR_0, "0%o", VAR_1);
  break;
 case 10:
  FUNC_1(VAR_0, "%d", VAR_1);
  break;
 case 16:
  FUNC_1(VAR_0, "0x%x", VAR_1);
  break;
 default:
  FUNC_0("bad base", 0, ((void*)0));
  break;
 }
}
