
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pb_off; } ;
struct TYPE_6__ {TYPE_1__ sb_pb; } ;
typedef TYPE_2__ PE_SecBuf ;



__attribute__((used)) static int
FUNC_0(PE_SecBuf *VAR_0, PE_SecBuf *VAR_1)
{

 if (VAR_0->sb_pb.pb_off < VAR_1->sb_pb.pb_off)
  return (-1);
 else if (VAR_0->sb_pb.pb_off == VAR_1->sb_pb.pb_off)
  return (0);
 else
  return (1);
}
