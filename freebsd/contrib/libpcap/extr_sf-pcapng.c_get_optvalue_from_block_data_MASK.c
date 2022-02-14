
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_header {size_t option_length; } ;
struct block_cursor {int dummy; } ;


 void* FUNC_0 (struct block_cursor*,size_t,char*) ;

__attribute__((used)) static void *
FUNC_1(struct block_cursor *VAR_0,
    struct option_header *VAR_1, char *VAR_2)
{
 size_t VAR_3;
 void *VAR_4;


 VAR_3 = VAR_1->option_length;
 VAR_3 = ((VAR_3 + 3)/4)*4;

 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 if (VAR_4 == ((void*)0)) {



  return (((void*)0));
 }

 return (VAR_4);
}
