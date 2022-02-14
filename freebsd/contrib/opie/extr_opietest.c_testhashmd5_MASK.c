
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
  static unsigned char VAR_0[] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef };
  static unsigned char VAR_1[] = { 0x78, 0xdd, 0x1a, 0x37, 0xf8, 0x91, 0x54, 0xe1 };
  struct opie_otpkey VAR_2;

  FUNC_1(&VAR_2, VAR_0, sizeof(struct opie_otpkey));

  FUNC_2(&VAR_2, 5);

  if (FUNC_0(&VAR_2, VAR_1, sizeof(struct opie_otpkey)))
    return -1;

  return 0;
}
