
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct via_info*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct via_info *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; (VAR_4 < VAR_0) &&
     !(FUNC_2(VAR_3, VAR_1, 4) & VAR_2); VAR_4++)
      FUNC_0(1);
 if (VAR_4 >= VAR_0) {
  FUNC_1("via: codec invalid\n");
  return 1;
 }

 return 0;
}
