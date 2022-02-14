
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash_info {int key_offset; int * data; int free; int calloc; int alloc; } ;
struct ohash {int dummy; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ohash*,unsigned int,struct ohash_info*) ;

void
FUNC_1(struct ohash *VAR_3, unsigned int VAR_4, ptrdiff_t VAR_5)
{
 struct ohash_info VAR_6;

 VAR_6.alloc = VAR_0;
 VAR_6.calloc = VAR_1;
 VAR_6.free = VAR_2;
 VAR_6.data = ((void*)0);
 VAR_6.key_offset = VAR_5;

 FUNC_0(VAR_3, VAR_4, &VAR_6);
}
