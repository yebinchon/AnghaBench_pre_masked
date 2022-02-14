
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {int num_blocks; size_t num_records; struct kvp_record* records; int fname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct kvp_record*,int,int,int *) ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (int) ;
 struct kvp_record* FUNC_9 (struct kvp_record*,int) ;

__attribute__((used)) static void
FUNC_10(int VAR_4)
{
 FILE *VAR_5;
 size_t VAR_6 = 0;
 struct kvp_record *VAR_7 = VAR_3[VAR_4].records;
 struct kvp_record *VAR_8;
 int VAR_9 = VAR_3[VAR_4].num_blocks;
 int VAR_10 = sizeof(struct kvp_record) * VAR_0;

 FUNC_7(VAR_4);

 VAR_5 = FUNC_5(VAR_3[VAR_4].fname, "r");
 if (!VAR_5) {
  FUNC_8(VAR_4);
  FUNC_0(VAR_2, "Failed to open file, pool: %d\n", VAR_4);
  FUNC_1(VAR_1);
 }
 for ( ; ; )
 {
  VAR_8 = &VAR_7[VAR_6];
  VAR_6 += FUNC_6(VAR_8, sizeof(struct kvp_record),
   VAR_0 * VAR_9,
   VAR_5);

  if (FUNC_4(VAR_5)) {
   FUNC_0(VAR_2, "Failed to read file, pool: %d\n", VAR_4);
   FUNC_1(VAR_1);
  }

  if (!FUNC_3(VAR_5)) {



   VAR_9++;
   VAR_7 = FUNC_9(VAR_7, VAR_10 * VAR_9);

   if (VAR_7 == ((void*)0)) {
    FUNC_0(VAR_2, "malloc failed\n");
    FUNC_1(VAR_1);
   }
   continue;
  }
  break;
 }

 VAR_3[VAR_4].num_blocks = VAR_9;
 VAR_3[VAR_4].records = VAR_7;
 VAR_3[VAR_4].num_records = VAR_6;

 FUNC_2(VAR_5);
 FUNC_8(VAR_4);
}
