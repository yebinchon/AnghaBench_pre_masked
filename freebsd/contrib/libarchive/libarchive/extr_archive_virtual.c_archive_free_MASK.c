
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* archive_free ) (struct archive*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;

int
FUNC_1(struct archive *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);
 return ((VAR_1->vtable->archive_free)(VAR_1));
}
