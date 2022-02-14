
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opie_otpkey {int dummy; } ;


 scalar_t__ FUNC_0 (struct opie_otpkey*,unsigned char*,int) ;
 int FUNC_1 (struct opie_otpkey*,unsigned char*,int) ;
 int FUNC_2 (struct opie_otpkey*,int) ;

int FUNC_3()
{
  static unsigned char VAR_0[sizeof(struct opie_otpkey)] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef };
  static unsigned char VAR_1[sizeof(struct opie_otpkey)] = { 0x9f, 0x40, 0xfb, 0x84, 0xb, 0xf8, 0x7f, 0x4b };
  struct opie_otpkey VAR_2;

  FUNC_1(&VAR_2, VAR_0, sizeof(struct opie_otpkey));

  FUNC_2(&VAR_2, 4);

  if (FUNC_0(&VAR_2, VAR_1, sizeof(struct opie_otpkey)))
    return -1;

  return 0;
}
