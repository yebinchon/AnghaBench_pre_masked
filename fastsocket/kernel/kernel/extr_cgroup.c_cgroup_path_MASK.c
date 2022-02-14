
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct cgroup {struct cgroup* parent; TYPE_3__* dentry; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_2__ d_name; } ;


 int VAR_0 ;
 struct cgroup const* VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,int) ;
 struct dentry* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(const struct cgroup *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5;
 struct dentry *VAR_6 = FUNC_2(VAR_2->dentry);

 if (!VAR_6 || VAR_2 == VAR_1) {




  FUNC_3(VAR_3, "/");
  return 0;
 }

 VAR_5 = VAR_3 + VAR_4;

 *--VAR_5 = '\0';
 for (;;) {
  int VAR_7 = VAR_6->d_name.len;
  if ((VAR_5 -= VAR_7) < VAR_3)
   return -VAR_0;
  FUNC_0(VAR_5, VAR_2->dentry->d_name.name, VAR_7);
  VAR_2 = VAR_2->parent;
  if (!VAR_2)
   break;
  VAR_6 = FUNC_2(VAR_2->dentry);
  if (!VAR_2->parent)
   continue;
  if (--VAR_5 < VAR_3)
   return -VAR_0;
  *VAR_5 = '/';
 }
 FUNC_1(VAR_3, VAR_5, VAR_3 + VAR_4 - VAR_5);
 return 0;
}
