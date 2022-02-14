
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ps_b; } ;
struct TYPE_7__ {TYPE_2__* pb_buf; } ;
struct TYPE_8__ {int sb_flags; TYPE_1__ sb_pb; TYPE_3__* sb_ps; } ;
typedef TYPE_2__ PE_SecBuf ;
typedef TYPE_3__ PE_Scn ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;

void
FUNC_3(PE_SecBuf *VAR_3)
{
 PE_Scn *VAR_4;

 FUNC_1(VAR_3 != ((void*)0));

 VAR_4 = VAR_3->sb_ps;

 FUNC_0(&VAR_4->ps_b, VAR_3, VAR_1, VAR_2);

 if (VAR_3->sb_flags & VAR_0)
  FUNC_2(VAR_3->sb_pb.pb_buf);

 FUNC_2(VAR_3);
}
