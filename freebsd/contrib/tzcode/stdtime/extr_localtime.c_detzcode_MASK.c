
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long
FUNC_0(const char *const VAR_0)
{
 long VAR_1;
 int VAR_2;

 VAR_1 = (VAR_0[0] & 0x80) ? ~0L : 0;
 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  VAR_1 = (VAR_1 << 8) | (VAR_0[VAR_2] & 0xff);
 return VAR_1;
}
