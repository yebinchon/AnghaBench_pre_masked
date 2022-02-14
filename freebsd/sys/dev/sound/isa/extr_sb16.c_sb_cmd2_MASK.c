
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sb_info {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct sb_info*,int) ;
 int FUNC_2 (struct sb_info*) ;

__attribute__((used)) static int
FUNC_3(struct sb_info *VAR_0, u_char VAR_1, int VAR_2)
{
 int VAR_3;




 FUNC_2(VAR_0);
 VAR_3 = 0;
     if (FUNC_1(VAR_0, VAR_1)) {
  if (FUNC_1(VAR_0, VAR_2 & 0xff)) {
   if (FUNC_1(VAR_0, (VAR_2 >> 8) & 0xff)) {
    VAR_3 = 1;
   }
  }
     }

 return VAR_3;
}
