
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int (* to_xfer_memory ) (int ,void*,int,int,int *,struct target_ops*) ;TYPE_1__* beneath; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
struct TYPE_2__ {int (* to_xfer_partial ) (TYPE_1__*,int,char const*,void*,void const*,int ,int) ;} ;
typedef int LONGEST ;




 int FUNC_0 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 int FUNC_1 (int ,void*,int,int,int *,struct target_ops*) ;
 int FUNC_2 (int ,void*,int,int,int *,struct target_ops*) ;
 int FUNC_3 (TYPE_1__*,int,char const*,void*,void const*,int ,int) ;

__attribute__((used)) static LONGEST
FUNC_4 (struct target_ops *VAR_0, enum target_object VAR_1,
       const char *VAR_2, void *VAR_3,
       const void *VAR_4, ULONGEST VAR_5, LONGEST VAR_6)
{
  switch (VAR_1)
    {
    case 128:
      if (VAR_3)
 return (*VAR_0->to_xfer_memory) (VAR_5, VAR_3, VAR_6, 0 ,
           ((void*)0), VAR_0);
      if (VAR_4)
 return (*VAR_0->to_xfer_memory) (VAR_5, VAR_3, VAR_6, 1 ,
           ((void*)0), VAR_0);
      return -1;







    default:
      if (VAR_0->beneath != ((void*)0))
 return VAR_0->beneath->to_xfer_partial (VAR_0->beneath, VAR_1, VAR_2,
           VAR_3, VAR_4, VAR_5, VAR_6);
      return -1;
    }
}
