
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int vtable; } ;
struct TYPE_3__ {int (* out ) (int *,unsigned char*) ;} ;


 TYPE_2__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,unsigned char*) ;

ssize_t
FUNC_1(unsigned char *VAR_3, size_t VAR_4)
{
 if (!VAR_2)
  return (-1);
 if (VAR_4 < VAR_1)
  return (-1);
 VAR_2->out(&VAR_0.vtable, VAR_3);
 return (VAR_1);
}
