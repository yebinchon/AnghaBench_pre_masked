
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct es_info {int dummy; } ;
struct es_chinfo {scalar_t__ dir; int index; struct es_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (struct es_info*) ;
 int FUNC_1 (struct es_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct es_info*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct es_info*,scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(kobj_t VAR_1, void *VAR_2, uint32_t VAR_3)
{
   struct es_chinfo *VAR_4 = VAR_2;
   struct es_info *VAR_5 = VAR_4->parent;
 uint32_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_5);
 if (VAR_4->dir == VAR_0)
    VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4->index);
 else
    VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4->index);
 FUNC_1(VAR_5);
 VAR_7 = (VAR_3 > VAR_6) ? (VAR_3 - VAR_6) : (VAR_6 - VAR_3);
 if (VAR_7 < 2)
  return (VAR_3);
 return (VAR_6);
}
