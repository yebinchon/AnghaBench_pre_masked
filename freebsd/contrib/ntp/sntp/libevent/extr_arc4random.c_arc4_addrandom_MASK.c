
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; unsigned char* s; unsigned char j; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 VAR_0.i--;
 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  VAR_0.i = (VAR_0.i + 1);
  VAR_4 = VAR_0.s[VAR_0.i];
  VAR_0.j = (VAR_0.j + VAR_4 + VAR_1[VAR_3 % VAR_2]);
  VAR_0.s[VAR_0.i] = VAR_0.s[VAR_0.j];
  VAR_0.s[VAR_0.j] = VAR_4;
 }
 VAR_0.j = VAR_0.i;
}
