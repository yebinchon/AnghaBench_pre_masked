
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_raid_volume {int v_strip_size; int v_disks_count; } ;
typedef int off_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct g_raid_volume *VAR_1, int VAR_2, off_t VAR_3,
    off_t *VAR_4, int *VAR_5)
{
 off_t VAR_6, VAR_7;
 u_int VAR_8;

 VAR_8 = VAR_1->v_strip_size;

 VAR_7 = VAR_3 % VAR_8;

 VAR_6 = (VAR_3 / VAR_8) * VAR_1->v_disks_count + VAR_2;

 *VAR_5 = VAR_6 % VAR_0;

 *VAR_4 = (VAR_6 / VAR_0) * VAR_8 + VAR_7;
}
