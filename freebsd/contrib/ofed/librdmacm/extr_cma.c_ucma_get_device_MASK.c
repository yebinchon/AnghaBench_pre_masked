
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pd; int verbs; } ;
struct cma_id_private {TYPE_1__ id; struct cma_device* cma_dev; } ;
struct cma_device {scalar_t__ guid; scalar_t__ pd; int verbs; int refcnt; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct cma_device* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cma_device*) ;

__attribute__((used)) static int FUNC_5(struct cma_id_private *VAR_5, __be64 VAR_6)
{
 struct cma_device *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_2[VAR_8];
  if (VAR_7->guid == VAR_6)
   goto match;
 }

 return FUNC_0(VAR_0);
match:
 FUNC_2(&VAR_4);
 if ((VAR_9 = FUNC_4(VAR_7)))
  goto out;

 if (!VAR_7->refcnt++) {
  VAR_7->pd = FUNC_1(VAR_7->verbs);
  if (!VAR_7->pd) {
   VAR_7->refcnt--;
   VAR_9 = FUNC_0(VAR_1);
   goto out;
  }
 }
 VAR_5->cma_dev = VAR_7;
 VAR_5->id.verbs = VAR_7->verbs;
 VAR_5->id.pd = VAR_7->pd;
out:
 FUNC_3(&VAR_4);
 return VAR_9;
}
