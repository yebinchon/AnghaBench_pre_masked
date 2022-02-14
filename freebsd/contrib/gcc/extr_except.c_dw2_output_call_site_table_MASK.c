
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct call_site_record {int action; scalar_t__ landing_pad; } ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int call_site_data_used; struct call_site_record* call_site_data; } ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char*,char*,char*,...) ;
 int FUNC_5 (char*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  int VAR_3 = VAR_1->eh->call_site_data_used;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
      struct call_site_record *VAR_5 = &VAR_1->eh->call_site_data[VAR_4];
      char VAR_6[32];
      char VAR_7[32];
      char VAR_8[32];

      FUNC_0 (VAR_6, "LEHB", VAR_0 + VAR_4);
      FUNC_0 (VAR_7, "LEHE", VAR_0 + VAR_4);

      if (VAR_5->landing_pad)
 FUNC_0 (VAR_8, "L",
         FUNC_1 (VAR_5->landing_pad));
      FUNC_4 (4, VAR_6,
       VAR_2,
       "region %d start", VAR_4);
      FUNC_4 (4, VAR_7, VAR_6, "length");
      if (VAR_5->landing_pad)
 FUNC_4 (4, VAR_8,
         VAR_2,
         "landing pad");
      else
 FUNC_2 (4, 0, "landing pad");

      FUNC_3 (VAR_5->action, "action");
    }

  VAR_0 += VAR_3;
}
