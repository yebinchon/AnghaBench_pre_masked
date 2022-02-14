
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int out_port; } ;
typedef TYPE_1__ osm_log_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int VAR_2 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(osm_log_t * VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3->out_port);
 if (FUNC_2(VAR_4, 0) < 0)
  FUNC_1(VAR_2, "truncate_log_file: cannot truncate: %s\n",
   FUNC_4(VAR_1));
 if (FUNC_3(VAR_4, 0, VAR_0) < 0)
  FUNC_1(VAR_2, "truncate_log_file: cannot rewind: %s\n",
   FUNC_4(VAR_1));
 VAR_3->count = 0;
}
