
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cphy*,int ,int) ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct cphy *VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_10)
  FUNC_2(VAR_10);

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 == VAR_7) {


  VAR_11 = FUNC_0(VAR_9, VAR_0, 3);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_11 == 0x1)
   goto twinax;
  if (VAR_11 == 0x10)
   return VAR_3;
  if (VAR_11 == 0x20)
   return VAR_1;
  if (VAR_11 == 0x40)
   return VAR_2;

  VAR_11 = FUNC_0(VAR_9, VAR_0, 8);
  if (VAR_11 < 0)
   return VAR_11;
  if (VAR_11 == 4) {
   VAR_11 = FUNC_0(VAR_9, VAR_0, 60);
   if (VAR_11 < 0)
    return VAR_11;
   if (VAR_11 & 0x1)
    goto twinax;
  }

  VAR_11 = FUNC_0(VAR_9, VAR_0, 6);
  if (VAR_11 < 0)
   return VAR_11;
  if (VAR_11 != 4)
   return VAR_6;

  VAR_11 = FUNC_0(VAR_9, VAR_0, 10);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_11 & 0x80) {
twinax:
   VAR_11 = FUNC_0(VAR_9, VAR_0, 0x12);
   if (VAR_11 < 0)
    return VAR_11;
   return VAR_11 > 10 ? VAR_5 :
       VAR_4;
  }
 } else if (VAR_11 == VAR_8) {


  VAR_11 = FUNC_0(VAR_9, VAR_0, 127);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_11 != 1) {

   return VAR_6;
  }

  VAR_11 = FUNC_0(VAR_9, VAR_0, 131);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_11 &= 0xf0;
  if (VAR_11 == 0x10)
   return VAR_2;
  if (VAR_11 == 0x40)
   return VAR_1;
  if (VAR_11 == 0x80)
   return VAR_3;
 }

 return VAR_6;
}
