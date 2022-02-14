
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union unaligned {unsigned long s8; } ;



__attribute__((used)) static inline unsigned long
FUNC_0 (const void *VAR_0) { const union unaligned *VAR_1 = VAR_0; return VAR_1->s8; }
