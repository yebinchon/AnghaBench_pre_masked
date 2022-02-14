
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int multilist_t ;
struct TYPE_3__ {int db_object; } ;
struct TYPE_4__ {int db_blkid; int db_level; TYPE_1__ db; int db_objset; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 unsigned int FUNC_0 (int ,int ,int ,int ) ;
 unsigned int FUNC_1 (int *) ;

unsigned int
FUNC_2(multilist_t *VAR_0, void *VAR_1)
{
 dmu_buf_impl_t *VAR_2 = VAR_1;
 return (FUNC_0(VAR_2->db_objset, VAR_2->db.db_object,
     VAR_2->db_level, VAR_2->db_blkid) %
     FUNC_1(VAR_0));
}
