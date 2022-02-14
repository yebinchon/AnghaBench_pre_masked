
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; TYPE_1__* mnt; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int mnt_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct cred const*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(char *VAR_3,
    struct path *VAR_4,
    char *VAR_5,
    unsigned long VAR_6,
    void *VAR_7)
{
 const struct cred *VAR_8 = FUNC_0();

 if (VAR_6 & VAR_2)
  return FUNC_2(VAR_8, VAR_4->mnt->mnt_sb,
        VAR_0, ((void*)0));
 else
  return FUNC_1(VAR_8, VAR_4->mnt, VAR_4->dentry,
           VAR_1);
}
