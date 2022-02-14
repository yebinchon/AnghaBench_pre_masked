
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fm801_info {int dummy; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fm801_info*,int ,int) ;
 int FUNC_3 (struct fm801_info*,int ,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_4, void *VAR_5, int VAR_6, u_int32_t VAR_7)
{
 struct fm801_info *VAR_8 = (struct fm801_info *)VAR_5;
 int VAR_9;

 FUNC_1("fm801_wrcd reg 0x%x val 0x%x\n",VAR_6, VAR_7);




 for (VAR_9 = 0; VAR_9 < VAR_3 && FUNC_2(VAR_8,VAR_0,2) & VAR_1; VAR_9++) {
  FUNC_0(10000);
  FUNC_1("fm801 rdcd: 1 - DELAY\n");
 }
 if (VAR_9 >= VAR_3) {
  FUNC_4("fm801 wrcd: read codec busy\n");
  return -1;
 }

 FUNC_3(VAR_8,VAR_2,VAR_7, 2);
 FUNC_3(VAR_8,VAR_0, VAR_6,2);


 for (VAR_9 = 0; VAR_9 < VAR_3 && FUNC_2(VAR_8,VAR_0,2) & VAR_1; VAR_9++) {
  FUNC_0(10000);
  FUNC_1("fm801 wrcd: 2 - DELAY\n");
 }
 if (VAR_9 >= VAR_3) {
  FUNC_4("fm801 wrcd: read codec busy\n");
  return -1;
 }
 FUNC_1("fm801 wrcd release reg 0x%x val 0x%x\n",VAR_6, VAR_7);
 return 0;
}
