
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct unrhdr {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct unrhdr*,size_t) ;
 int FUNC_2 (struct unrhdr*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct unrhdr *VAR_0, u_int VAR_1, char VAR_2[])
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 == -1) {
  FUNC_0("F %u\n", VAR_1);
  VAR_2[VAR_1] = 0;
  FUNC_2(VAR_0, VAR_1);
 } else {
  VAR_2[VAR_1] = 1;
  FUNC_0("A %d\n", VAR_3);
 }
}
