
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {int codec_idx; int dev; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct atiixp_info*,int ) ;
 scalar_t__ FUNC_2 (struct atiixp_info*) ;
 int FUNC_3 (struct atiixp_info*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_7, void *VAR_8, int VAR_9)
{
 struct atiixp_info *VAR_10 = VAR_8;
 uint32_t VAR_11;
 int VAR_12;

 if (FUNC_2(VAR_10))
  return (-1);

 VAR_11 = (VAR_9 << VAR_5) |
     VAR_4 | VAR_6 | VAR_10->codec_idx;

 FUNC_3(VAR_10, VAR_3, VAR_11);

 if (FUNC_2(VAR_10))
  return (-1);

 VAR_12 = 500;
 do {
  VAR_11 = FUNC_1(VAR_10, VAR_0);
  if (VAR_11 & VAR_2)
   return (VAR_11 >> VAR_1);
  FUNC_0(1);
 } while (--VAR_12);

 if (VAR_9 < 0x7c)
  FUNC_4(VAR_10->dev, "codec read timeout! (reg 0x%x)\n", VAR_9);

 return (-1);
}
