
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cphy*,int,int) ;
 int FUNC_1 (struct cphy*,int,int,int) ;
 int FUNC_2 (struct cphy*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct cphy *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 == VAR_2) {

  VAR_6 = FUNC_0(VAR_4, VAR_0, 93);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 &= 0x40;
  if (!VAR_6)
   return VAR_6;

  VAR_7 = VAR_1;
 } else if (VAR_6 == VAR_3)
  VAR_7 = VAR_0;
 else
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_7, 110);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5)
  VAR_6 |= 0x40;
 else
  VAR_6 &= ~0x40;

 VAR_6 = FUNC_1(VAR_4, VAR_7, 110, VAR_6);

 return VAR_6;
}
