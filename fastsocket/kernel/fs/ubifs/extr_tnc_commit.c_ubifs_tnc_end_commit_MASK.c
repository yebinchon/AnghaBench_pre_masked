
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* znode; } ;
struct ubifs_info {int tnc_mutex; int * ilebs; int * cnext; TYPE_1__ zroot; } ;
struct TYPE_4__ {scalar_t__ level; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;

int FUNC_7(struct ubifs_info *VAR_0)
{
 int VAR_1;

 if (!VAR_0->cnext)
  return 0;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_3(&VAR_0->tnc_mutex);

 FUNC_0("TNC height is %d", VAR_0->zroot.znode->level + 1);

 FUNC_1(VAR_0);

 VAR_0->cnext = ((void*)0);
 FUNC_2(VAR_0->ilebs);
 VAR_0->ilebs = ((void*)0);

 FUNC_4(&VAR_0->tnc_mutex);

 return 0;
}
