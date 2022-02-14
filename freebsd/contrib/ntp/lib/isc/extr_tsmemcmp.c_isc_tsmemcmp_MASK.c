
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

int
FUNC_0(const void *VAR_1, const void *VAR_2, size_t VAR_3) {
 const unsigned char *VAR_4 = VAR_1;
 const unsigned char *VAR_5 = VAR_2;
 unsigned int VAR_6 = 0u;
 unsigned int VAR_7 = 0u;
 volatile unsigned int VAR_8 = (1u << VAR_0);

 for ( ; 0 != VAR_3; --VAR_3, ++VAR_4, ++VAR_5) {
  VAR_6 |= VAR_8 &
      ((unsigned int)*VAR_4 - (unsigned int)*VAR_5);
  VAR_7 |= VAR_8 &
      ((unsigned int)*VAR_5 - (unsigned int)*VAR_4);
  VAR_8 &= ~(VAR_6 | VAR_7);
 }
 return (int)(VAR_7 >> VAR_0) - (int)(VAR_6 >> VAR_0);
}
