
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {scalar_t__ port; scalar_t__ type; int * addr; } ;
struct TYPE_7__ {scalar_t__ auid; scalar_t__ euid; scalar_t__ egid; scalar_t__ ruid; scalar_t__ rgid; scalar_t__ pid; scalar_t__ sid; TYPE_1__ tid; } ;
struct TYPE_8__ {TYPE_2__ proc32_ex; } ;
struct TYPE_9__ {int len; TYPE_3__ tt; } ;
typedef TYPE_4__ tokenstr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int *,int,int ,int) ;
 int FUNC_1 (int *,int,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_2(tokenstr_t *VAR_2, u_char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.auid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.euid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.egid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.ruid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.rgid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.pid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.sid, VAR_2->len, VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.tid.port, VAR_2->len,
     VAR_5);
 if (VAR_5)
  return (-1);

 FUNC_1(VAR_3, VAR_4, VAR_2->tt.proc32_ex.tid.type, VAR_2->len,
     VAR_5);
 if (VAR_5)
  return (-1);

 if (VAR_2->tt.proc32_ex.tid.type == VAR_0) {
  FUNC_0(VAR_3, VAR_4, &VAR_2->tt.proc32_ex.tid.addr[0],
      sizeof(VAR_2->tt.proc32_ex.tid.addr[0]), VAR_2->len, VAR_5);
  if (VAR_5)
   return (-1);
 } else if (VAR_2->tt.proc32_ex.tid.type == VAR_1) {
  FUNC_0(VAR_3, VAR_4, VAR_2->tt.proc32_ex.tid.addr,
      sizeof(VAR_2->tt.proc32_ex.tid.addr), VAR_2->len, VAR_5);
  if (VAR_5)
   return (-1);
 } else
  return (-1);

 return (0);
}
