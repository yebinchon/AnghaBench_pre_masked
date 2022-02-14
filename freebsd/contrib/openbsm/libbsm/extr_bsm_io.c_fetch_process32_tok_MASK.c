
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int addr; int port; } ;
struct TYPE_7__ {TYPE_1__ tid; int sid; int pid; int rgid; int ruid; int egid; int euid; int auid; } ;
struct TYPE_8__ {TYPE_2__ proc32; } ;
struct TYPE_9__ {int len; TYPE_3__ tt; } ;
typedef TYPE_4__ tokenstr_t ;


 int FUNC_0 (int *,int,int *,int,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(tokenstr_t *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.auid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.euid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.egid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.ruid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.rgid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.pid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.sid, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.proc32.tid.port, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_0(VAR_1, VAR_2, &VAR_0->tt.proc32.tid.addr,
     sizeof(VAR_0->tt.proc32.tid.addr), VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 return (0);
}
