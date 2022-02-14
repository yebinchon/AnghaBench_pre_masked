
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int dummy; } ;
struct TYPE_2__ {char* fname; int pool_fd; int num_blocks; size_t num_records; struct kvp_record* records; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (struct kvp_record*,int,int,int *) ;
 TYPE_1__* VAR_13 ;
 struct kvp_record* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,int,int ) ;
 struct kvp_record* FUNC_13 (struct kvp_record*,int) ;
 int FUNC_14 (char*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_15(void)
{
 int VAR_14;
 FILE *VAR_15;
 size_t VAR_16;
 char *VAR_17;
 struct kvp_record *VAR_18;
 struct kvp_record *VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = sizeof(struct kvp_record) * VAR_2;

 if (FUNC_11(VAR_9, VAR_10) < 0 &&
     (VAR_12 != VAR_0 && VAR_12 != VAR_1)) {
  FUNC_0(VAR_5, " Failed to create /var/db/hyperv/pool\n");
  FUNC_3(VAR_3);
 }
 FUNC_1(VAR_9, VAR_10);

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
 {
  VAR_17 = VAR_13[VAR_21].fname;
  VAR_16 = 0;
  VAR_20 = 1;
  FUNC_14(VAR_17, VAR_6, "/var/db/hyperv/pool/.kvp_pool_%d", VAR_21);
  VAR_14 = FUNC_12(VAR_17, VAR_8 | VAR_7, VAR_11);

  if (VAR_14 == -1) {
   return (1);
  }
  FUNC_4(VAR_14, VAR_11);


  VAR_15 = FUNC_8(VAR_17, "r");
  if (!VAR_15) {
   FUNC_2(VAR_14);
   return (1);
  }

  VAR_18 = FUNC_10(VAR_22 * VAR_20);
  if (VAR_18 == ((void*)0)) {
   FUNC_2(VAR_14);
   FUNC_5(VAR_15);
   return (1);
  }
  for ( ; ; )
  {
   VAR_19 = &VAR_18[VAR_16];
   VAR_16 += FUNC_9(VAR_19, sizeof(struct kvp_record),
    VAR_2,
    VAR_15);

   if (FUNC_7(VAR_15)) {
    FUNC_0(VAR_5, "Failed to read file, pool: %d\n",
        VAR_21);
    FUNC_3(VAR_3);
   }

   if (!FUNC_6(VAR_15)) {



    VAR_20++;
    VAR_18 = FUNC_13(VAR_18, VAR_22 *
     VAR_20);
    if (VAR_18 == ((void*)0)) {
     FUNC_2(VAR_14);
     FUNC_5(VAR_15);
     return (1);
    }
    continue;
   }
   break;
  }
  VAR_13[VAR_21].pool_fd = VAR_14;
  VAR_13[VAR_21].num_blocks = VAR_20;
  VAR_13[VAR_21].records = VAR_18;
  VAR_13[VAR_21].num_records = VAR_16;
  FUNC_5(VAR_15);
 }

 return (0);
}
