
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {unsigned short* retwords; } ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cmdif*,short,short,union cmdret*) ;
 int FUNC_1 (char*,short,unsigned short,unsigned short) ;

__attribute__((used)) static int
FUNC_2(struct cmdif *VAR_2, short VAR_3, unsigned short *VAR_4,
  unsigned short *VAR_5)
{
 union cmdret VAR_6 = VAR_0;

 if (FUNC_0(VAR_2, VAR_3, VAR_3, &VAR_6) && FUNC_0(VAR_2, VAR_3, VAR_3, &VAR_6))
  return -VAR_1;
 *VAR_4 = VAR_6.retwords[0];
 *VAR_5 = VAR_6.retwords[1];
 FUNC_1("got mixer %d: 0x%d 0x%d\n", VAR_3, *VAR_4, *VAR_5);
 return 0;
}
