
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct unrhdr {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct unrhdr*) ;
 int FUNC_2 (struct unrhdr*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct unrhdr *VAR_1, u_int VAR_2, char VAR_3[])
{
 int VAR_4;

 if (VAR_3[VAR_2]) {
  FUNC_0("F %u\n", VAR_2);
  FUNC_2(VAR_1, VAR_2);
  VAR_3[VAR_2] = 0;
 } else {
  VAR_0 = 1;
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 != -1) {
   VAR_3[VAR_4] = 1;
   FUNC_0("A %d\n", VAR_4);
  }
  VAR_0 = 0;
 }
}
