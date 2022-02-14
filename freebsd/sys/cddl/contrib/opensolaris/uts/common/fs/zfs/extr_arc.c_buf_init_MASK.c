
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int arc_buf_t ;
struct TYPE_4__ {int ht_mask; TYPE_1__* ht_locks; int * ht_table; } ;
struct TYPE_3__ {int ht_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 void* FUNC_1 (char*,int,int ,int ,int ,int *,int *,int *,int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int* VAR_20 ;

__attribute__((used)) static void
FUNC_4(void)
{
 uint64_t *VAR_21;
 uint64_t VAR_22 = 1ULL << 12;
 int VAR_23, VAR_24;







 while (VAR_22 * VAR_19 < (uint64_t)VAR_18 * VAR_5)
  VAR_22 <<= 1;
retry:
 VAR_10.ht_mask = VAR_22 - 1;
 VAR_10.ht_table =
     FUNC_2(VAR_22 * sizeof (void*), VAR_3);
 if (VAR_10.ht_table == ((void*)0)) {
  FUNC_0(VAR_22 > (1ULL << 8));
  VAR_22 >>= 1;
  goto retry;
 }

 VAR_11 = FUNC_1("arc_buf_hdr_t_full", VAR_1,
     0, VAR_12, VAR_13, VAR_17, ((void*)0), ((void*)0), 0);
 VAR_14 = FUNC_1("arc_buf_hdr_t_l2only",
     VAR_2, 0, VAR_15, VAR_16, VAR_17,
     ((void*)0), ((void*)0), 0);
 VAR_7 = FUNC_1("arc_buf_t", sizeof (arc_buf_t),
     0, VAR_8, VAR_9, ((void*)0), ((void*)0), ((void*)0), 0);

 for (VAR_23 = 0; VAR_23 < 256; VAR_23++)
  for (VAR_21 = VAR_20 + VAR_23, *VAR_21 = VAR_23, VAR_24 = 8; VAR_24 > 0; VAR_24--)
   *VAR_21 = (*VAR_21 >> 1) ^ (-(*VAR_21 & 1) & VAR_6);

 for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
  FUNC_3(&VAR_10.ht_locks[VAR_23].ht_lock,
      ((void*)0), VAR_4, ((void*)0));
 }
}
