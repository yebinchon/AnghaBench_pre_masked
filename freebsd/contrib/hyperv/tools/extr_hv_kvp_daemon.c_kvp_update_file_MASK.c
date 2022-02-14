
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {int num_records; int records; int fname; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 size_t FUNC_5 (int ,int,int ,int *) ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(int VAR_3)
{
 FILE *VAR_4;
 size_t VAR_5;

 FUNC_6(VAR_3);

 VAR_4 = FUNC_4(VAR_2[VAR_3].fname, "w");
 if (!VAR_4) {
  FUNC_7(VAR_3);
  FUNC_0(VAR_1, "Failed to open file, pool: %d\n", VAR_3);
  FUNC_1(VAR_0);
 }

 VAR_5 = FUNC_5(VAR_2[VAR_3].records,
  sizeof(struct kvp_record),
  VAR_2[VAR_3].num_records, VAR_4);

 if (FUNC_3(VAR_4) || FUNC_2(VAR_4)) {
  FUNC_7(VAR_3);
  FUNC_0(VAR_1, "Failed to write file, pool: %d\n", VAR_3);
  FUNC_1(VAR_0);
 }

 FUNC_7(VAR_3);
}
