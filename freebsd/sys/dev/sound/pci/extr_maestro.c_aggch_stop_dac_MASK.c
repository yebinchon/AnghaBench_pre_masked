
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct agg_chinfo {int num; TYPE_1__* parent; } ;
struct TYPE_8__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct agg_chinfo *VAR_4)
{
 FUNC_0(VAR_4->parent);


 VAR_4->parent->active &= ~(1 << VAR_4->num);

 FUNC_6(VAR_4->parent, (VAR_4->num << 1) | 32, VAR_0,
     VAR_1 << VAR_2);
 FUNC_6(VAR_4->parent, (VAR_4->num << 1) | 33, VAR_0,
     VAR_1 << VAR_2);

 if (VAR_4->parent->active) {
  FUNC_3(VAR_4->parent);
  FUNC_4(VAR_4->parent);
 } else {
  FUNC_5(VAR_4->parent);
  FUNC_1(VAR_4->parent, VAR_3);
 }
 FUNC_2(VAR_4->parent);
}
