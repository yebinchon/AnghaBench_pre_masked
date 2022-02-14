
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; unsigned char* s; unsigned char j; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline unsigned char
FUNC_0(void)
{
 unsigned char VAR_1, VAR_2;

 VAR_0.i = (VAR_0.i + 1);
 VAR_1 = VAR_0.s[VAR_0.i];
 VAR_0.j = (VAR_0.j + VAR_1);
 VAR_2 = VAR_0.s[VAR_0.j];
 VAR_0.s[VAR_0.i] = VAR_2;
 VAR_0.s[VAR_0.j] = VAR_1;
 return (VAR_0.s[(VAR_1 + VAR_2) & 0xff]);
}
