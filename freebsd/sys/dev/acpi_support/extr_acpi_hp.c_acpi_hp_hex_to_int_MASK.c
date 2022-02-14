
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT8 ;



__attribute__((used)) static __inline int FUNC_0(const UINT8 *VAR_0, UINT8 *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_0[0];
 VAR_3 = VAR_0[1];
 if ('0' <= VAR_2 && VAR_2 <= '9')
  VAR_2 -= '0';
 else if ('A' <= VAR_2 && VAR_2 <= 'F')
  VAR_2 -= ('A' - 10);
 else if ('a' <= VAR_2 && VAR_2 <= 'f')
  VAR_2 -= ('a' - 10);
 else
  return (1);
 if ('0' <= VAR_3 && VAR_3 <= '9')
  VAR_3 -= '0';
 else if ('A' <= VAR_3 && VAR_3 <= 'F')
  VAR_3 -= ('A' - 10);
 else if ('a' <= VAR_3 && VAR_3 <= 'f')
  VAR_3 -= ('a' - 10);
 else
  return (1);
 *VAR_1 = (VAR_2 << 4) + VAR_3;

 return (0);
}
