
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_info {int buf_dmat; } ;
struct agg_chinfo {int map; int buffer; struct agg_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1)
{
 struct agg_chinfo *VAR_2 = VAR_1;
 struct agg_info *VAR_3 = VAR_2->parent;


 FUNC_0(VAR_3->buf_dmat, FUNC_1(VAR_2->buffer), VAR_2->map);


 return 0;
}
