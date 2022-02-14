
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ps_b; } ;
struct TYPE_8__ {int pb_align; size_t pb_size; int * pb_buf; scalar_t__ pb_off; } ;
struct TYPE_9__ {TYPE_1__ sb_pb; int sb_flags; TYPE_3__* sb_ps; } ;
typedef TYPE_2__ PE_SecBuf ;
typedef TYPE_3__ PE_Scn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (size_t) ;
 int VAR_3 ;

PE_SecBuf *
FUNC_3(PE_Scn *VAR_4, size_t VAR_5)
{
 PE_SecBuf *VAR_6;

 if ((VAR_6 = FUNC_2(sizeof(PE_SecBuf))) == ((void*)0)) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 VAR_6->sb_ps = VAR_4;
 VAR_6->sb_flags = 0;
 VAR_6->sb_pb.pb_align = 1;
 VAR_6->sb_pb.pb_off = 0;
 VAR_6->sb_pb.pb_size = VAR_5;
 if (VAR_5 > 0) {
  if ((VAR_6->sb_pb.pb_buf = FUNC_2(VAR_5)) == ((void*)0)) {
   FUNC_1(VAR_6);
   VAR_2 = VAR_0;
   return (((void*)0));
  }
  VAR_6->sb_flags |= VAR_1;
 } else
  VAR_6->sb_pb.pb_buf = ((void*)0);

 FUNC_0(&VAR_4->ps_b, VAR_6, VAR_3);

 return (VAR_6);
}
