
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nodemask_scratch {int mask2; int mask1; } ;
struct TYPE_3__ {int cpuset_mems_allowed; int user_nodemask; } ;
struct mempolicy {size_t mode; int flags; TYPE_1__ w; } ;
typedef int nodemask_t ;
struct TYPE_4__ {int (* create ) (struct mempolicy*,int *) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int const VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int *,int const*,int *) ;
 scalar_t__ FUNC_2 (struct mempolicy*) ;
 int * VAR_5 ;
 int FUNC_3 (int ,int const,int ) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (struct mempolicy*,int *) ;
 int FUNC_6 (struct mempolicy*,int *) ;

__attribute__((used)) static int FUNC_7(struct mempolicy *VAR_6,
       const nodemask_t *VAR_7, struct nodemask_scratch *VAR_8)
{
 int VAR_9;


 if (VAR_6 == ((void*)0))
  return 0;

 FUNC_3(VAR_8->mask1,
    VAR_3, VAR_5[VAR_2]);

 FUNC_0(!VAR_7);
 if (VAR_6->mode == VAR_1 && FUNC_4(*VAR_7))
  VAR_7 = ((void*)0);
 else {
  if (VAR_6->flags & VAR_0)
   FUNC_1(&VAR_8->mask2, VAR_7,&VAR_8->mask1);
  else
   FUNC_3(VAR_8->mask2, *VAR_7, VAR_8->mask1);

  if (FUNC_2(VAR_6))
   VAR_6->w.user_nodemask = *VAR_7;
  else
   VAR_6->w.cpuset_mems_allowed =
      VAR_3;
 }

 if (VAR_7)
  VAR_9 = VAR_4[VAR_6->mode].create(VAR_6, &VAR_8->mask2);
 else
  VAR_9 = VAR_4[VAR_6->mode].create(VAR_6, ((void*)0));
 return VAR_9;
}
