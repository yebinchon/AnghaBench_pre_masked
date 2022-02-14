
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_1__* f_dev; } ;
typedef int off_t ;
struct TYPE_2__ {int (* dv_strategy ) (int ,int ,int,int,void*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int,void*,size_t*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, off_t VAR_5, void **VAR_6, int VAR_7)
{
 struct open_file *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_8 = (struct open_file *)VAR_4;
 if ((*VAR_6 = FUNC_0(VAR_7)) == ((void*)0))
  return (VAR_2);
 VAR_10 = (VAR_8->f_dev->dv_strategy)(VAR_8->f_devdata, VAR_3, VAR_5 / VAR_0,
     VAR_7, *VAR_6, &VAR_9);
 if (VAR_10 != 0)
  return (VAR_10);
 if (VAR_9 != VAR_7)
  return (VAR_1);
 return (0);
}
