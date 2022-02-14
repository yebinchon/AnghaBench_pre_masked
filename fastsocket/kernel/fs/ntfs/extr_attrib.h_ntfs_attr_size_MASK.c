
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int s64 ;
struct TYPE_7__ {int data_size; } ;
struct TYPE_6__ {int value_length; } ;
struct TYPE_8__ {TYPE_2__ non_resident; TYPE_1__ resident; } ;
struct TYPE_9__ {TYPE_3__ data; int non_resident; } ;
typedef TYPE_4__ ATTR_RECORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline s64 FUNC_2(const ATTR_RECORD *VAR_0)
{
 if (!VAR_0->non_resident)
  return (s64)FUNC_0(VAR_0->data.resident.value_length);
 return FUNC_1(VAR_0->data.non_resident.data_size);
}
