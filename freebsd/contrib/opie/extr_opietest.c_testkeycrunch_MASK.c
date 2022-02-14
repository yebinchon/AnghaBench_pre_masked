
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opie_otpkey {int dummy; } ;


 scalar_t__ FUNC_0 (struct opie_otpkey*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int,struct opie_otpkey*,char*,char*) ;

int FUNC_2()
{
  static char VAR_0[] = "ke1234";
  static char VAR_1[] = "this is a test";
  static unsigned char VAR_2[sizeof(struct opie_otpkey)] = { 0x2e, 0xd3, 0x5d, 0x74, 0x3e, 0xa9, 0xe9, 0xe8 };
  struct opie_otpkey VAR_3;

  if (FUNC_1(5, &VAR_3, VAR_0, VAR_1))
    return -1;

  if (FUNC_0(&VAR_3, VAR_2, sizeof(struct opie_otpkey)))
    return -1;

  return 0;
}
