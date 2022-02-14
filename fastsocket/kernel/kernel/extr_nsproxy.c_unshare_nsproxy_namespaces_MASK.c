
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nsproxy {int dummy; } ;
struct fs_struct {int dummy; } ;
struct TYPE_5__ {struct fs_struct* fs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nsproxy*) ;
 int FUNC_1 (struct nsproxy*) ;
 int FUNC_2 (int ) ;
 struct nsproxy* FUNC_3 (unsigned long,TYPE_1__*,struct fs_struct*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct nsproxy*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(unsigned long VAR_8,
  struct nsproxy **VAR_9, struct fs_struct *VAR_10)
{
 int VAR_11 = 0;

 if (!(VAR_8 & (VAR_3 | VAR_5 | VAR_1 |
          VAR_2 | VAR_4)))
  return 0;

 if (!FUNC_2(VAR_0))
  return -VAR_6;

 *VAR_9 = FUNC_3(VAR_8, VAR_7,
    VAR_10 ? VAR_10 : VAR_7->fs);
 if (FUNC_0(*VAR_9)) {
  VAR_11 = FUNC_1(*VAR_9);
  goto out;
 }

 VAR_11 = FUNC_4(VAR_7, FUNC_6(VAR_7));
 if (VAR_11)
  FUNC_5(*VAR_9);

out:
 return VAR_11;
}
