
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int desc; } ;
typedef TYPE_1__ br_hash_class ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline size_t
FUNC_0(const br_hash_class *VAR_2)
{
 return (unsigned)(VAR_2->desc >> VAR_1)
  & VAR_0;
}
