
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nbuckets; int * h_buckets; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(hash_t *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->h_buckets[0]);
 int VAR_3 = 0;
 int VAR_4 = VAR_2;
 int VAR_5 = 0;
 int VAR_6 = VAR_2;
 int VAR_7;
 int VAR_8;

 if (VAR_2 && VAR_1)
  FUNC_1("%3d: %d\n", 0, VAR_2);
 for (VAR_8 = 1; VAR_8 < VAR_0->h_nbuckets; VAR_8++) {
  VAR_7 = FUNC_0(VAR_0->h_buckets[VAR_8]);
  if (VAR_2 > VAR_7) {
   VAR_2 = VAR_7;
   VAR_3 = VAR_8;
  }
  if (VAR_4 < VAR_7) {
   VAR_4 = VAR_7;
   VAR_5 = VAR_8;
  }
  if (VAR_7 && VAR_1)
   FUNC_1("%3d: %d\n", VAR_8, VAR_7);
  VAR_6 += VAR_7;
 }

 FUNC_1("Hash statistics:\n");
 FUNC_1(" Buckets: %d\n", VAR_0->h_nbuckets);
 FUNC_1(" Items  : %d\n", VAR_6);
 FUNC_1(" Min/Max: %d in #%d, %d in #%d\n", VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(" Average: %5.2f\n", (float)VAR_6 / (float)VAR_0->h_nbuckets);
}
