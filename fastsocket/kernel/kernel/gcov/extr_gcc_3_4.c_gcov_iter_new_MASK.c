
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_info {int dummy; } ;
struct gcov_iterator {struct gcov_info* info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 struct gcov_iterator* FUNC_0 (int,int ) ;
 int FUNC_1 (struct gcov_info*) ;

struct gcov_iterator *FUNC_2(struct gcov_info *VAR_1)
{
 struct gcov_iterator *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct gcov_iterator) +
         FUNC_1(VAR_1) * sizeof(struct type_info),
         VAR_0);
 if (VAR_2)
  VAR_2->info = VAR_1;

 return VAR_2;
}
