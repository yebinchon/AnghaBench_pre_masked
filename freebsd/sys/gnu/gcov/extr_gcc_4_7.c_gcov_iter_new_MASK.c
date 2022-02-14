
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_iterator {int size; int * buffer; struct gcov_info* info; } ;
struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct gcov_info*) ;
 int FUNC_1 (struct gcov_iterator*,int ) ;
 void* FUNC_2 (int,int ,int) ;

struct gcov_iterator *
FUNC_3(struct gcov_info *VAR_3)
{
 struct gcov_iterator *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct gcov_iterator), VAR_0, VAR_1|VAR_2);
 if (VAR_4 == ((void*)0))
  goto err_free;

 VAR_4->info = VAR_3;

 VAR_4->size = FUNC_0(((void*)0), VAR_3);
 VAR_4->buffer = FUNC_2(VAR_4->size, VAR_0, VAR_1);
 if (!VAR_4->buffer)
  goto err_free;

 FUNC_0(VAR_4->buffer, VAR_3);

 return VAR_4;

err_free:
 FUNC_1(VAR_4, VAR_0);
 return (((void*)0));
}
