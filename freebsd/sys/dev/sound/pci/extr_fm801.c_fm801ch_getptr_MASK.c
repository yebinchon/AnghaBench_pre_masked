
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct fm801_info {int play_flip; int rec_flip; scalar_t__ rec_start; scalar_t__ play_start; } ;
struct fm801_chinfo {scalar_t__ dir; struct fm801_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct fm801_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_6, void *VAR_7)
{
 struct fm801_chinfo *VAR_8 = VAR_7;
 struct fm801_info *VAR_9 = VAR_8->parent;
 u_int32_t VAR_10 = 0;

 if (VAR_8->dir == VAR_4) {
  VAR_10 = FUNC_0(VAR_9,
   (VAR_9->play_flip&1) ?
   VAR_1:VAR_0, 4) - VAR_9->play_start;
 }

 if (VAR_8->dir == VAR_5) {
  VAR_10 = FUNC_0(VAR_9,
   (VAR_9->rec_flip&1) ?
   VAR_3:VAR_2, 4) - VAR_9->rec_start;
 }

 return VAR_10;
}
