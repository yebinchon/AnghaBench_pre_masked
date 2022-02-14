
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_watch {TYPE_1__* parent; int ino; int dev; int path; } ;
struct TYPE_2__ {int wdata; } ;


 int VAR_0 ;
 struct audit_watch* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct audit_watch*) ;
 struct audit_watch* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct audit_watch *FUNC_7(struct audit_watch *VAR_2)
{
 char *VAR_3;
 struct audit_watch *VAR_4;

 VAR_3 = FUNC_5(VAR_2->path, VAR_1);
 if (FUNC_6(!VAR_3))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_1(VAR_4)) {
  FUNC_4(VAR_3);
  goto out;
 }

 VAR_4->dev = VAR_2->dev;
 VAR_4->ino = VAR_2->ino;
 FUNC_3(&VAR_2->parent->wdata);
 VAR_4->parent = VAR_2->parent;

out:
 return VAR_4;
}
