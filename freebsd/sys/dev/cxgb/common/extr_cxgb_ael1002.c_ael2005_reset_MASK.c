
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct reg_val {int member_1; int member_2; int member_3; int const member_0; } ;
struct cphy {scalar_t__ modtype; int priv; } ;


 int VAR_0 ;

 int FUNC_0 (struct cphy*,int ) ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct cphy*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct cphy*,int const,int ,unsigned int*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct cphy*,struct reg_val*) ;
 int FUNC_7 (struct cphy*,int const,int ) ;

__attribute__((used)) static int FUNC_8(struct cphy *VAR_5, int VAR_6)
{
 static struct reg_val VAR_7[] = {
  { 128, 0xc001, 0, 1 << 5 },
  { 128, 0xc017, 0, 1 << 5 },
  { 128, 0xc013, 0xffff, 0xf341 },
  { 128, 0xc210, 0xffff, 0x8000 },
  { 128, 0xc210, 0xffff, 0x8100 },
  { 128, 0xc210, 0xffff, 0x8000 },
  { 128, 0xc210, 0xffff, 0 },
  { 0, 0, 0, 0 }
 };
 static struct reg_val VAR_8[] = {
  { 128, 0xca00, 0xffff, 0x0080 },
  { 128, 0xca12, 0xffff, 0 },
  { 0, 0, 0, 0 }
 };

 int VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_4(VAR_5, 128, VAR_0, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_5, 128, 0);
 if (VAR_9)
  return VAR_9;

 FUNC_5(125);
 VAR_5->priv = VAR_1;
 VAR_9 = FUNC_6(VAR_5, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_5(50);

 VAR_9 = FUNC_0(VAR_5, 0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_5->modtype = (u8)VAR_9;

 if (VAR_9 == VAR_2)
  VAR_9 = 0;
 else if (VAR_9 == VAR_3 || VAR_9 == VAR_4)
  VAR_9 = FUNC_3(VAR_5, VAR_9);
 else
  VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_5, VAR_8);
 if (VAR_9)
  return VAR_9;


 if (VAR_10 & 1)
  VAR_9 = FUNC_1(VAR_5);
 return VAR_9;
}
