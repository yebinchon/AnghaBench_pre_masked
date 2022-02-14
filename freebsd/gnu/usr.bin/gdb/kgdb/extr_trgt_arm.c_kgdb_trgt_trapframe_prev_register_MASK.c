
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
 struct kgdb_frame_cache* FUNC_0 (struct frame_info*,void**) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,void*,int) ;

__attribute__((used)) static void
FUNC_4(struct frame_info *VAR_6,
    void **VAR_7, int VAR_8, int *VAR_9, enum lval_type *VAR_10,
    CORE_ADDR *VAR_11, int *VAR_12, void *VAR_13)
{
 char VAR_14[VAR_1];
 struct kgdb_frame_cache *VAR_15;
 int VAR_16, VAR_17;
 CORE_ADDR VAR_18;

 VAR_17 = FUNC_2(VAR_2, VAR_8);

 if (VAR_13 == ((void*)0))
  VAR_13 = VAR_14;
 FUNC_1(VAR_13, 0, VAR_17);
 *VAR_9 = 0;
 *VAR_11 = 0;
 *VAR_10 = VAR_5;
 *VAR_12 = -1;

 VAR_16 = (VAR_8 >= 0 && VAR_8 <= VAR_0)
     ? VAR_3[VAR_8] : -1;
 if (VAR_16 == -1)
  return;

 VAR_15 = FUNC_0(VAR_6, VAR_7);
 VAR_18 = VAR_15->sp;

 VAR_16 = VAR_3[VAR_8];
 *VAR_11 = VAR_18 + VAR_16;
 *VAR_10 = VAR_4;
 FUNC_3(*VAR_11, VAR_13, VAR_17);
}
