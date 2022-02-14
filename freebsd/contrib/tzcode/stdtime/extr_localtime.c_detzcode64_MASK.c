
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int int_fast64_t ;



__attribute__((used)) static time_t
FUNC_0(const char *const VAR_0)
{
 register time_t VAR_1;
 register int VAR_2;

 VAR_1 = (VAR_0[0] & 0x80) ? (~(int_fast64_t) 0) : 0;
 for (VAR_2 = 0; VAR_2 < 8; ++VAR_2)
  VAR_1 = VAR_1 * 256 + (VAR_0[VAR_2] & 0xff);
 return VAR_1;
}
