
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef unsigned long uint64_t ;
struct nicpf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nicpf*,unsigned long,int) ;
 int FUNC_1 (struct nicpf*,unsigned long) ;
 unsigned long FUNC_2 (struct nicpf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct nicpf *VAR_1, int VAR_2)
{
 uint64_t VAR_3;
 uint8_t VAR_4, VAR_5 = 64;

 VAR_3 = FUNC_2(VAR_1, VAR_0 + (VAR_2 << 3));
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (VAR_3 & (1UL << VAR_4)) {
   FUNC_1(VAR_1, VAR_4 + (VAR_2 * VAR_5));
   FUNC_0(VAR_1, VAR_4, VAR_2);
  }
 }
}
