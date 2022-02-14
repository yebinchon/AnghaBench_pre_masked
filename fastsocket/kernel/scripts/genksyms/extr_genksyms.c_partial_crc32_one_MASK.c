
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned char VAR_1, unsigned long VAR_2)
{
 return VAR_0[(VAR_2 ^ VAR_1) & 0xff] ^ (VAR_2 >> 8);
}
