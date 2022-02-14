
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*,unsigned char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, size_t VAR_1)
{
 const char VAR_2[] =
     "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f"
     "202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f"
     "404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f";
 unsigned char VAR_3[12];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  VAR_3[VAR_4] = (unsigned char)'X';

 FUNC_0(FUNC_1(VAR_2,
     "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f"
     "202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f"
     "404142434445464748494a4b4c4d4e4f%hhn", &VAR_3[4]) == 0);
 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  FUNC_0(VAR_3[VAR_4] == (VAR_4 == 4 ? 160 : 'X'));
}
