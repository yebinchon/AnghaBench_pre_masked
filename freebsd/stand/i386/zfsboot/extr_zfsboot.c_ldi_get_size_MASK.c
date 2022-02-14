
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int size; scalar_t__ start; } ;
struct zfsdsk {TYPE_1__ dsk; } ;


 int VAR_0 ;
 int FUNC_0 (struct zfsdsk*) ;

uint64_t
FUNC_1(void *VAR_1)
{
 struct zfsdsk *VAR_2 = VAR_1;
 uint64_t VAR_3 = VAR_2->dsk.size;

 if (VAR_2->dsk.start == 0)
  VAR_3 = FUNC_0(VAR_2);

 return (VAR_3 * VAR_0);
}
