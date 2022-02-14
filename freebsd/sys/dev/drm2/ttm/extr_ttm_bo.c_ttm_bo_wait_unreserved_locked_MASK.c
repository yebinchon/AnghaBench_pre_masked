
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {TYPE_1__* glob; } ;
struct TYPE_2__ {int lru_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ttm_buffer_object*,int *,int,char const*,int ) ;
 scalar_t__ FUNC_1 (struct ttm_buffer_object*) ;

__attribute__((used)) static int
FUNC_2(struct ttm_buffer_object *VAR_4, bool VAR_5)
{
 const char *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 if (VAR_5) {
  VAR_7 = VAR_3;
  VAR_6 = "ttbowi";
 } else {
  VAR_7 = 0;
  VAR_6 = "ttbowu";
 }
 while (FUNC_1(VAR_4)) {
  VAR_8 = -FUNC_0(VAR_4, &VAR_4->glob->lru_lock, VAR_7, VAR_6, 0);
  if (VAR_8 == -VAR_0 || VAR_8 == -VAR_1)
   VAR_8 = -VAR_2;
  if (VAR_8 != 0)
   break;
 }
 return (VAR_8);
}
