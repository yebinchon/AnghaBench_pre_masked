
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned short* retwords; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdif*,short,short,union cmdret*) ;
 int FUNC_1 (struct cmdif*,short,short,unsigned short,unsigned short) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct cmdif *VAR_3, short VAR_4, unsigned short VAR_5, unsigned short VAR_6)
{
 union cmdret VAR_7 = VAR_0;
 int VAR_8 = 0;

 FUNC_2("sent mixer %d: 0x%d 0x%d\n", VAR_4, VAR_5, VAR_6);
 do {
  FUNC_1(VAR_3, VAR_4, VAR_4, VAR_5, VAR_6);
  FUNC_0(VAR_3, VAR_4, VAR_4, &VAR_7);
  if (VAR_7.retwords[0] == VAR_6 && VAR_7.retwords[1] == VAR_5)
   return 0;
 } while (VAR_8++ < VAR_2);
 FUNC_2("sent mixer failed\n");
 return -VAR_1;
}
