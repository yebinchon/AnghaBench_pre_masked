
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_context {int cxt; int file; int (* func ) (int *,int ,int ) ;} ;
typedef int cl_map_item_t ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(cl_map_item_t * VAR_0, void *VAR_1)
{
 ((struct dump_context *)VAR_1)->func(VAR_0,
        ((struct dump_context *)VAR_1)->file,
        ((struct dump_context *)VAR_1)->cxt);
}
