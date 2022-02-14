
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pathComponent {int componentType; scalar_t__ lengthComponentIdent; int componentIdent; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct super_block*,int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0, char *VAR_1, int VAR_2,
      char *VAR_3)
{
 struct pathComponent *VAR_4;
 int VAR_5 = 0;
 char *VAR_6 = VAR_3;

 while (VAR_5 < VAR_2) {
  VAR_4 = (struct pathComponent *)(VAR_1 + VAR_5);
  switch (VAR_4->componentType) {
  case 1:
   if (VAR_4->lengthComponentIdent == 0) {
    VAR_6 = VAR_3;
    *VAR_6++ = '/';
   }
   break;
  case 3:
   FUNC_0(VAR_6, "../", 3);
   VAR_6 += 3;
   break;
  case 4:
   FUNC_0(VAR_6, "./", 2);
   VAR_6 += 2;

   break;
  case 5:
   VAR_6 += FUNC_1(VAR_0, VAR_4->componentIdent, VAR_6,
           VAR_4->lengthComponentIdent);
   *VAR_6++ = '/';
   break;
  }
  VAR_5 += sizeof(struct pathComponent) + VAR_4->lengthComponentIdent;
 }
 if (VAR_6 > VAR_3 + 1)
  VAR_6[-1] = '\0';
 else
  VAR_6[0] = '\0';
}
