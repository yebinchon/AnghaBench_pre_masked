
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int (* to_xfer_memory ) (int ,void*,int,int,int *,struct target_ops*) ;TYPE_1__* beneath; } ;
struct cleanup {int dummy; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
struct TYPE_2__ {int (* to_xfer_partial ) (TYPE_1__*,int,char const*,void*,void const*,int ,int) ;} ;
typedef int LONGEST ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 scalar_t__ VAR_1 ;
 struct cleanup* FUNC_1 (int ,void*) ;
 int FUNC_2 (void*,void const*,int) ;
 int FUNC_3 (int ,void*,int,int,int *,struct target_ops*) ;
 int FUNC_4 (int ,void*,int,int,int *,struct target_ops*) ;
 int FUNC_5 (TYPE_1__*,int,char const*,void*,void const*,int ,int) ;
 int VAR_2 ;
 void* FUNC_6 (int) ;

__attribute__((used)) static LONGEST
FUNC_7 (struct target_ops *VAR_3, enum target_object VAR_4,
        const char *VAR_5, void *VAR_6,
        const void *VAR_7, ULONGEST VAR_8, LONGEST VAR_9)
{
  if (VAR_4 == VAR_0
      && VAR_3->to_xfer_memory != ((void*)0))


    {
      int VAR_10 = -1;
      VAR_1 = 0;
      if (VAR_7 != ((void*)0))
 {
   void *VAR_11 = FUNC_6 (VAR_9);
   struct cleanup *VAR_12 = FUNC_1 (VAR_2, VAR_11);
   FUNC_2 (VAR_11, VAR_7, VAR_9);
   VAR_10 = VAR_3->to_xfer_memory (VAR_8, VAR_11, VAR_9, 1 , ((void*)0),
     VAR_3);
   FUNC_0 (VAR_12);
 }
      if (VAR_6 != ((void*)0))
 VAR_10 = VAR_3->to_xfer_memory (VAR_8, VAR_6, VAR_9, 0 , ((void*)0),
          VAR_3);
      if (VAR_10 > 0)
 return VAR_10;
      else if (VAR_10 == 0 && VAR_1 == 0)


 return 0;
      else
 return -1;
    }
  else if (VAR_3->beneath != ((void*)0))
    return VAR_3->beneath->to_xfer_partial (VAR_3->beneath, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8, VAR_9);
  else
    return -1;
}
