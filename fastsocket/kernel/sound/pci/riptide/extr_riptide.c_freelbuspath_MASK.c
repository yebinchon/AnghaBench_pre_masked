
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdif {int dummy; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct cmdif*,unsigned char,unsigned char) ;
 unsigned char VAR_1 ;
 unsigned char** VAR_2 ;
 int FUNC_1 (char*,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_2(struct cmdif *VAR_3, unsigned char VAR_4, unsigned char *VAR_5)
{
 while (*VAR_5 != 0xff) {
  unsigned char VAR_6;

  VAR_6 = *VAR_5 & (~VAR_1);
  if (VAR_6 != VAR_0) {
   FUNC_1("free path 0x%x->0x%x\n", VAR_4, VAR_6);
   FUNC_0(VAR_3, VAR_4, VAR_6);
   VAR_4 = VAR_2[VAR_6][0];
  }
  if (*VAR_5++ & VAR_1) {
   unsigned char *VAR_7 = VAR_5;

   while (*VAR_7 != 0xff)
    VAR_7++;
   FUNC_2(VAR_3, VAR_4 + 1, ++VAR_7);
  }
 }
}
