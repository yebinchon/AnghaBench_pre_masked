
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_frame_cache {scalar_t__ sp; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kgdb_frame_cache* FUNC_0 (struct frame_info*,void**) ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,void*,int) ;

__attribute__((used)) static void
FUNC_4(struct frame_info *VAR_7,
    void **VAR_8, int VAR_9, int *VAR_10, enum lval_type *VAR_11,
    CORE_ADDR *VAR_12, int *VAR_13, void *VAR_14)
{
 char VAR_15[VAR_2];
 struct kgdb_frame_cache *VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_2(VAR_3, VAR_9);

 if (VAR_14 == ((void*)0))
  VAR_14 = VAR_15;
 FUNC_1(VAR_14, 0, VAR_18);
 *VAR_10 = 0;
 *VAR_12 = 0;
 *VAR_11 = VAR_6;
 *VAR_13 = -1;

 VAR_17 = (VAR_9 >= VAR_1 && VAR_9 <= VAR_0 + 2)
     ? VAR_4[VAR_9] : -1;
 if (VAR_17 == -1)
  return;

 VAR_16 = FUNC_0(VAR_7, VAR_8);
 *VAR_12 = VAR_16->sp + VAR_17;
 *VAR_11 = VAR_5;
 FUNC_3(*VAR_12, VAR_14, VAR_18);
}
