
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testout ;
struct opie_otpkey {int dummy; } ;


 scalar_t__ FUNC_0 (struct opie_otpkey*,unsigned char*,int) ;
 int FUNC_1 (struct opie_otpkey*,char*) ;

int FUNC_2()
{
  static char VAR_0[] = "AIM HEW BLUM FED MITE WARM";
  static unsigned char VAR_1[sizeof(struct opie_otpkey)] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef };
  struct opie_otpkey VAR_2;

  if (FUNC_1(&VAR_2, VAR_0) != 1)
    return -1;

  if (FUNC_0(&VAR_2, VAR_1, sizeof(VAR_1)))
    return -1;

  return 0;
}
