
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int bitoffs; } ;
typedef TYPE_1__ ib_field_t ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint64_t FUNC_2(void *VAR_0, int VAR_1, const ib_field_t * VAR_2)
{
 uint64_t VAR_3;
 FUNC_0((void *)&VAR_3, (void *)((char *)VAR_0 + VAR_1 + VAR_2->bitoffs / 8),
  sizeof(uint64_t));
 return FUNC_1(VAR_3);
}
