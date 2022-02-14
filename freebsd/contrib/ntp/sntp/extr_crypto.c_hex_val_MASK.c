
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(
 unsigned char VAR_0
 )
{
 int VAR_1;

 if ('0' <= VAR_0 && VAR_0 <= '9')
  VAR_1 = VAR_0 - '0';
 else if ('a' <= VAR_0 && VAR_0 <= 'f')
  VAR_1 = VAR_0 - 'a' + 0xa;
 else if ('A' <= VAR_0 && VAR_0 <= 'F')
  VAR_1 = VAR_0 - 'A' + 0xA;
 else
  VAR_1 = -1;

 return VAR_1;
}
