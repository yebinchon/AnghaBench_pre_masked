
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int32_t ;
typedef scalar_t__ bool_t ;
struct TYPE_3__ {char* out_finger; int* frag_header; int (* writeit ) (int ,scalar_t__,int) ;scalar_t__ out_base; int tcp_handle; } ;
typedef TYPE_1__ RECSTREAM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static bool_t
FUNC_2(RECSTREAM *VAR_3, bool_t VAR_4)
{
 u_int32_t VAR_5 = (VAR_4 == VAR_2) ? VAR_1 : 0;
 u_int32_t VAR_6 = (u_int32_t)((u_long)(VAR_3->out_finger) -
  (u_long)(VAR_3->frag_header) - sizeof(u_int32_t));

 *(VAR_3->frag_header) = FUNC_0(VAR_6 | VAR_5);
 VAR_6 = (u_int32_t)((u_long)(VAR_3->out_finger) -
     (u_long)(VAR_3->out_base));
 if ((*(VAR_3->writeit))(VAR_3->tcp_handle, VAR_3->out_base, (int)VAR_6)
  != (int)VAR_6)
  return (VAR_0);
 VAR_3->frag_header = (u_int32_t *)(void *)VAR_3->out_base;
 VAR_3->out_finger = (char *)VAR_3->out_base + sizeof(u_int32_t);
 return (VAR_2);
}
