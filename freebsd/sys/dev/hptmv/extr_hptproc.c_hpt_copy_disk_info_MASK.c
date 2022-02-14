
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {int df_on_line; } ;
struct TYPE_8__ {TYPE_7__ disk; } ;
struct TYPE_12__ {scalar_t__ VDeviceType; int bSerialNumber; int VDeviceCapacity; TYPE_4__* pParent; TYPE_1__ u; } ;
struct TYPE_9__ {int CriticalMembers; int ArrayName; } ;
struct TYPE_10__ {TYPE_2__ array; } ;
struct TYPE_11__ {TYPE_3__ u; } ;
typedef TYPE_5__* PVDevice ;
typedef int HPT_GET_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_7__*) ;
 int FUNC_1 (int *,char*,scalar_t__,char*,int,char*,char*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(HPT_GET_INFO *VAR_2, PVDevice VAR_3, UINT VAR_4)
{
 char VAR_5[32], VAR_6[16], *VAR_7;

 FUNC_0(VAR_5, &VAR_3->u.disk);

 if (!VAR_3->u.disk.df_on_line)
  VAR_7 = "Disabled";
 else if (VAR_3->VDeviceType==VAR_1)
  VAR_7 = "Spare   ";
 else
  VAR_7 = "Normal  ";
  VAR_6[0]=0;

 FUNC_1(VAR_2, "Channel %d  %s  %5dMB  %s %s\n",
  VAR_4+1,
  VAR_5, VAR_3->VDeviceCapacity>>11, VAR_7, VAR_6);
}
