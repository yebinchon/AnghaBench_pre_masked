
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int pid; int ruid; int rgid; int egid; int euid; int auid; } ;
struct TYPE_6__ {TYPE_1__ subj32; } ;
struct TYPE_7__ {TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(tokenstr_t VAR_6, uint32_t *VAR_7)
{

 FUNC_0((*VAR_7), (VAR_5 | VAR_0 | VAR_1 | VAR_2 | VAR_4 | VAR_3));

 if (!FUNC_1(VAR_6.tt.subj32.auid))
  return (0);
 if (!FUNC_3(VAR_6.tt.subj32.euid))
  return (0);
 if (!FUNC_2(VAR_6.tt.subj32.egid))
  return (0);
 if (!FUNC_4(VAR_6.tt.subj32.rgid))
  return (0);
 if (!FUNC_5(VAR_6.tt.subj32.ruid))
  return (0);
 if (!FUNC_6(VAR_6.tt.subj32.pid))
  return (0);
 return (1);
}
