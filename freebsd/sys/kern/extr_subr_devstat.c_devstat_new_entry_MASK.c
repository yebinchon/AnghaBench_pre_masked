
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct devstat {int unit_number; int creation_time; void const* id; } ;
typedef int devstat_type_flags ;
typedef int devstat_support_flags ;
typedef int devstat_priority ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct devstat*,void const*,int,int ,int ,int ,int ) ;
 struct devstat* FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct devstat *
FUNC_6(const void *VAR_3,
    int VAR_4, uint32_t VAR_5,
    devstat_support_flags VAR_6,
    devstat_type_flags VAR_7,
    devstat_priority VAR_8)
{
 struct devstat *VAR_9;

 FUNC_3(&VAR_2, VAR_0);

 VAR_9 = FUNC_2();
 FUNC_4(&VAR_2);
 if (VAR_4 == -1) {
  VAR_9->unit_number = VAR_4;
  VAR_9->id = VAR_3;
  FUNC_0(&VAR_9->creation_time);
  VAR_1++;
 } else {
  FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);
 }
 FUNC_5(&VAR_2);
 return (VAR_9);
}
