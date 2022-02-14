
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int32_t ;
typedef scalar_t__ bool_t ;
struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {int* frag_header; scalar_t__ out_finger; scalar_t__ frag_sent; scalar_t__ out_boundry; } ;
typedef TYPE_2__ RECSTREAM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int) ;

bool_t
FUNC_2(XDR *VAR_3, bool_t VAR_4)
{
 RECSTREAM *VAR_5 = (RECSTREAM *)(VAR_3->x_private);
 u_long VAR_6;

 if (VAR_4 || VAR_5->frag_sent ||
  ((u_long)VAR_5->out_finger + sizeof(u_int32_t) >=
  (u_long)VAR_5->out_boundry)) {
  VAR_5->frag_sent = VAR_0;
  return (FUNC_0(VAR_5, VAR_2));
 }
 VAR_6 = (u_long)(VAR_5->out_finger) - (u_long)(VAR_5->frag_header) -
    sizeof(u_int32_t);
 *(VAR_5->frag_header) = FUNC_1((u_int32_t)VAR_6 | VAR_1);
 VAR_5->frag_header = (u_int32_t *)(void *)VAR_5->out_finger;
 VAR_5->out_finger += sizeof(u_int32_t);
 return (VAR_2);
}
