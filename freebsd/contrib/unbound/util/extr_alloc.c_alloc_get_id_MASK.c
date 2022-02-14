
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct alloc_cache {int next_id; int last_id; scalar_t__ thread_num; int cleanup_arg; int (* cleanup ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int )) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

uint64_t
FUNC_4(struct alloc_cache* VAR_1)
{
 uint64_t VAR_2 = VAR_1->next_id++;
 if(VAR_2 == VAR_1->last_id) {
  FUNC_2("rrset alloc: out of 64bit ids. Clearing cache.");
  FUNC_0(FUNC_1(VAR_1->cleanup));
  (*VAR_1->cleanup)(VAR_1->cleanup_arg);


  VAR_1->next_id = (uint64_t)VAR_1->thread_num;
  VAR_1->next_id <<= VAR_0;
  VAR_1->next_id += 1;

  VAR_2 = VAR_1->next_id++;
 }
 return VAR_2;
}
