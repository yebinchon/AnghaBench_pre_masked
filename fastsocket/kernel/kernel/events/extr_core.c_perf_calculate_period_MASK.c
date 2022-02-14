
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sample_freq; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u64 FUNC_3(struct perf_event *VAR_1, u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_1->attr.sample_freq;
 u64 VAR_5 = VAR_0;
 u64 VAR_6, VAR_7;

 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_2(VAR_2);
 VAR_10 = FUNC_2(VAR_4);
 VAR_11 = 30;
 while (VAR_8 + VAR_11 > 64 && VAR_9 + VAR_10 > 64) {
  do { if (VAR_9 > VAR_10) { VAR_2 >>= 1; VAR_9--; } else { VAR_4 >>= 1; VAR_10--; } } while (0);
  do { if (VAR_11 > VAR_8) { VAR_5 >>= 1; VAR_11--; } else { VAR_3 >>= 1; VAR_8--; } } while (0);
 }

 if (VAR_8 + VAR_11 > 64) {
  VAR_6 = VAR_2 * VAR_4;

  while (VAR_8 + VAR_11 > 64) {
   do { if (VAR_8 > VAR_11) { VAR_3 >>= 1; VAR_8--; } else { VAR_5 >>= 1; VAR_11--; } } while (0);
   VAR_6 >>= 1;
  }

  VAR_7 = VAR_3 * VAR_5;
 } else {
  VAR_7 = VAR_3 * VAR_5;

  while (VAR_9 + VAR_10 > 64) {
   do { if (VAR_9 > VAR_10) { VAR_2 >>= 1; VAR_9--; } else { VAR_4 >>= 1; VAR_10--; } } while (0);
   VAR_7 >>= 1;
  }

  VAR_6 = VAR_2 * VAR_4;
 }

 if (!VAR_6)
  return VAR_7;

 return FUNC_1(VAR_7, VAR_6);
}
