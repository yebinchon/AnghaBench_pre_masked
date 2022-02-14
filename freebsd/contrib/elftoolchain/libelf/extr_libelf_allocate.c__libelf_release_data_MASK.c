
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct _Libelf_Data* d_buf; } ;
struct _Libelf_Data {int d_flags; TYPE_1__ d_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct _Libelf_Data*) ;

struct _Libelf_Data *
FUNC_1(struct _Libelf_Data *VAR_1)
{

 if (VAR_1->d_flags & VAR_0)
  FUNC_0(VAR_1->d_data.d_buf);

 FUNC_0(VAR_1);

 return (((void*)0));
}
