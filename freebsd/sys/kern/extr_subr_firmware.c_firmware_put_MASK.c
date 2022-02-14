
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv_fw {scalar_t__ refcnt; scalar_t__ file; int flags; TYPE_1__* parent; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct priv_fw* FUNC_0 (struct firmware const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(const struct firmware *VAR_5, int VAR_6)
{
 struct priv_fw *VAR_7 = FUNC_0(VAR_5);

 FUNC_1(&VAR_2);
 VAR_7->refcnt--;
 if (VAR_7->refcnt == 0) {
  if (VAR_7->parent != ((void*)0))
   VAR_7->parent->refcnt--;
  if (VAR_6 & VAR_0)
   VAR_7->flags |= VAR_1;
  if (VAR_7->file)
   FUNC_3(VAR_3, &VAR_4);
 }
 FUNC_2(&VAR_2);
}
