
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_tss_cache {int pc; int sp; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 struct frame_id FUNC_0 (int ,int ) ;
 struct kgdb_tss_cache* FUNC_1 (struct frame_info*,void**) ;

__attribute__((used)) static void
FUNC_2(struct frame_info *VAR_0, void **VAR_1,
    struct frame_id *VAR_2)
{
 struct kgdb_tss_cache *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 *VAR_2 = FUNC_0(VAR_3->sp, VAR_3->pc);
}
