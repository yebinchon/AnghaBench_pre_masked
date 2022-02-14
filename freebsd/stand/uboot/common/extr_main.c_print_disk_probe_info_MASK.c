
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int slice ;
typedef int partition ;
struct TYPE_5__ {int d_unit; } ;
struct TYPE_4__ {scalar_t__ d_slice; scalar_t__ d_partition; } ;
struct TYPE_6__ {TYPE_2__ dd; TYPE_1__ d_disk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3()
{
 char VAR_5[32];
 char VAR_6[32];

 if (VAR_4.d_disk.d_slice == VAR_2)
  FUNC_2(VAR_5, "<none>", sizeof(VAR_5));
 else if (VAR_4.d_disk.d_slice == VAR_3)
  FUNC_2(VAR_5, "<auto>", sizeof(VAR_5));
 else
  FUNC_1(VAR_5, sizeof(VAR_5), "%d", VAR_4.d_disk.d_slice);

 if (VAR_4.d_disk.d_partition == VAR_0)
  FUNC_2(VAR_6, "<none>", sizeof(VAR_6));
 else if (VAR_4.d_disk.d_partition == VAR_1)
  FUNC_2(VAR_6, "<auto>", sizeof(VAR_6));
 else
  FUNC_1(VAR_6, sizeof(VAR_6), "%d",
      VAR_4.d_disk.d_partition);

 FUNC_0("  Checking unit=%d slice=%s partition=%s...",
     VAR_4.dd.d_unit, VAR_5, VAR_6);

}
