
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(char *VAR_1)
{
 unsigned long VAR_2 = 5381;
 int VAR_3;

 VAR_3 = *VAR_1;
 while (VAR_3) {
  VAR_2 = ((VAR_2 << 5) + VAR_2) + VAR_3;
  VAR_3 = *++VAR_1;
 }
 return (unsigned int)(VAR_2 & ((1 << VAR_0) - 1));
}
