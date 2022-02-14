
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_cnv {int syntax; unsigned int tag; unsigned int class; } ;


 struct snmp_cnv* VAR_0 ;

__attribute__((used)) static unsigned char FUNC_0(unsigned int VAR_1,
      unsigned int VAR_2,
      unsigned short *VAR_3)
{
 const struct snmp_cnv *VAR_4;

 VAR_4 = VAR_0;

 while (VAR_4->syntax != -1) {
  if (VAR_4->tag == VAR_1 && VAR_4->class == VAR_2) {
   *VAR_3 = VAR_4->syntax;
   return 1;
  }
  VAR_4++;
 }
 return 0;
}
