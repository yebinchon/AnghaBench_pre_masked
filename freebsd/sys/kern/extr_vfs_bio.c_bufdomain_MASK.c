
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {int dummy; } ;
struct buf {size_t b_domain; } ;


 struct bufdomain* VAR_0 ;

__attribute__((used)) static inline struct bufdomain *
FUNC_0(struct buf *VAR_1)
{

 return (&VAR_0[VAR_1->b_domain]);
}
