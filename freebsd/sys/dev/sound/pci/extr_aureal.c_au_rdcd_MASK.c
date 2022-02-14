
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {int unit; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct au_info*,int ,int ,int) ;
 int FUNC_2 (struct au_info*,int ,int ,int,int) ;
 int FUNC_3 (char*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_3, void *VAR_4, int VAR_5)
{
 struct au_info *VAR_6 = (struct au_info *)VAR_4;
 int VAR_7=0, VAR_8=0;

 VAR_5<<=16;
 FUNC_2(VAR_6, 0, VAR_2, VAR_5, 4);
 while (VAR_8<50) {
  VAR_7=FUNC_1(VAR_6, 0, VAR_2, 4);
  if ((VAR_7 & 0x00ff0000) == (VAR_5 | 0x00800000)) break;
  FUNC_0(VAR_8 * 200 + 2000);
  VAR_8++;
 }
 if (VAR_8==50) FUNC_3("pcm%d: codec timeout reading register %x (%x)\n",
  VAR_6->unit, (VAR_5 & VAR_1)>>16, VAR_7);
 return VAR_7 & VAR_0;
}
