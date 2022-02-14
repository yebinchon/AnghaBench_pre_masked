
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801_info {int dummy; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct fm801_info*,int ,int) ;
 int FUNC_3 (struct fm801_info*,int ,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_6, void *VAR_7, int VAR_8)
{
 struct fm801_info *VAR_9 = (struct fm801_info *)VAR_7;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5 && FUNC_2(VAR_9,VAR_0,2) & VAR_1; VAR_10++) {
  FUNC_0(10000);
  FUNC_1("fm801 rdcd: 1 - DELAY\n");
 }
 if (VAR_10 >= VAR_5) {
  FUNC_4("fm801 rdcd: codec busy\n");
  return 0;
 }

 FUNC_3(VAR_9,VAR_0, VAR_8|VAR_2,2);

 for (VAR_10 = 0; VAR_10 < VAR_5 && !(FUNC_2(VAR_9,VAR_0,2) & VAR_3); VAR_10++)
 {
  FUNC_0(10000);
  FUNC_1("fm801 rdcd: 2 - DELAY\n");
 }
 if (VAR_10 >= VAR_5) {
  FUNC_4("fm801 rdcd: write codec invalid\n");
  return 0;
 }

 return FUNC_2(VAR_9,VAR_4,2);
}
