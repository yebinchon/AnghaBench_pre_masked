
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_5__ {scalar_t__ fs_refc; int fs_flags; scalar_t__ fs_cid; int fs_host; } ;
typedef TYPE_1__ fserver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(fserver *VAR_5)
{
  if (--VAR_5->fs_refc == 0) {






    int VAR_6 = (FUNC_0(VAR_5) || FUNC_1(VAR_5)) ? 19 : VAR_0;

    FUNC_2("Last hard reference to file server %s - will timeout in %ds", VAR_5->fs_host, VAR_6);
    if (VAR_5->fs_cid) {
      FUNC_4(VAR_5->fs_cid);



      VAR_5->fs_flags &= ~VAR_2;
    }




    VAR_5->fs_cid = FUNC_3(VAR_6, VAR_4, (voidp) VAR_5);




    VAR_5->fs_flags &= ~VAR_3;
    VAR_5->fs_flags |= VAR_1;
  }
}
