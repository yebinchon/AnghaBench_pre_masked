
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlink {int file; TYPE_1__* mpage; int arch; int fsec; int dsec; int name; } ;
struct TYPE_2__ {int dba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const struct mlink *VAR_4)
{
 FUNC_1(VAR_4->mpage->dba, VAR_4->name, VAR_3);
 FUNC_0(VAR_4->mpage->dba, VAR_2, VAR_4->dsec);
 FUNC_0(VAR_4->mpage->dba, VAR_2, VAR_4->fsec);
 FUNC_0(VAR_4->mpage->dba, VAR_0, VAR_4->arch);
 FUNC_0(VAR_4->mpage->dba, VAR_1, VAR_4->file);
}
