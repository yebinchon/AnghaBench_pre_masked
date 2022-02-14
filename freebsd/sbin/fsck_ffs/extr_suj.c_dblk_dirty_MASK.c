
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct data_blk {int db_dirty; } ;


 struct data_blk* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(ufs2_daddr_t VAR_0)
{
 struct data_blk *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->db_dirty = 1;
}
