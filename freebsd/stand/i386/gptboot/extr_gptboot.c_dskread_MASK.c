
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int daddr_t ;
struct TYPE_4__ {scalar_t__ start; } ;
struct TYPE_3__ {int * gdev; TYPE_2__ dsk; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*,void*,scalar_t__,unsigned int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, daddr_t VAR_3, unsigned VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1.dsk, VAR_2, VAR_3 + VAR_1.dsk.start, VAR_4);
 return (VAR_5);
}
