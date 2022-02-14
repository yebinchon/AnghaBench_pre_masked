
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_2; int member_3; int member_1; int member_0; } ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,struct reg_val*) ;
 int FUNC_1 (struct cphy*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_4)
{
 struct reg_val VAR_5[] = {
  { VAR_3, VAR_0,
   0xffff, 0xb << (VAR_1*4) },

  { VAR_3, VAR_0,
   0xffff, 0x1 << (VAR_2*4) },


  { 0, 0, 0, 0 }
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;


 return FUNC_1(VAR_4);
}
