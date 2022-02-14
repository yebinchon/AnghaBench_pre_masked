
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ word; scalar_t__ ptr; scalar_t__ offset; } ;
union futex_key {TYPE_1__ both; } ;



__attribute__((used)) static inline int FUNC_0(union futex_key *VAR_0, union futex_key *VAR_1)
{
 return (VAR_0 && VAR_1
  && VAR_0->both.word == VAR_1->both.word
  && VAR_0->both.ptr == VAR_1->both.ptr
  && VAR_0->both.offset == VAR_1->both.offset);
}
