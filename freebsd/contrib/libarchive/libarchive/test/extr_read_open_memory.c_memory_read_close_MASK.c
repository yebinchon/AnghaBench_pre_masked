
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {struct read_memory_data* copy_buff; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct read_memory_data*) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_1, void *VAR_2)
{
 struct read_memory_data *VAR_3 = (struct read_memory_data *)VAR_2;
 (void)VAR_1;
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3->copy_buff);
 FUNC_0(VAR_3);
 return (VAR_0);
}
