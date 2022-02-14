
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dos_partition {int dp_typ; int dp_start; int dp_size; int dp_shd; int dp_ehd; void* dp_esect; void* dp_ecyl; void* dp_ssect; void* dp_scyl; } ;
struct TYPE_2__ {struct dos_partition* parts; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct dos_partition*,int) ;
 int FUNC_6 (struct dos_partition*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (struct dos_partition*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct dos_partition*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13(int VAR_7)
{
    struct dos_partition *VAR_8 = &VAR_5.parts[VAR_7 - 1];

    FUNC_10("The data for partition %d is:\n", VAR_7);
    FUNC_9(VAR_8);

    if (VAR_6 && FUNC_8("Do you want to change it?")) {
 int VAR_9;

 if (VAR_4) {
     FUNC_5(VAR_8, sizeof (*VAR_8));
     if (VAR_7 == 1) {
  FUNC_7(1);
  FUNC_10("\nThe static data for the slice 1 has been reinitialized to:\n");
  FUNC_9(VAR_8);
     }
 }

 do {
  FUNC_4("sysid (165=FreeBSD)", VAR_8->dp_typ, VAR_9, 255);
  FUNC_4("start", VAR_8->dp_start, VAR_9, VAR_0);
  FUNC_4("size", VAR_8->dp_size, VAR_9, VAR_0);
  if (!FUNC_11(VAR_8)) {
   FUNC_12("ERROR: failed to adjust; setting sysid to 0");
   VAR_8->dp_typ = 0;
  }

  if (FUNC_8("Explicitly specify beg/end address ?"))
  {
   int VAR_10,VAR_11,VAR_12;
   VAR_11 = FUNC_2(VAR_8->dp_scyl,VAR_8->dp_ssect);
   VAR_12 = VAR_8->dp_shd;
   VAR_10 = FUNC_3(VAR_8->dp_ssect);
   FUNC_4("beginning cylinder", VAR_11, VAR_9, VAR_1);
   FUNC_4("beginning head", VAR_12, VAR_9, VAR_2);
   FUNC_4("beginning sector", VAR_10, VAR_9, VAR_3);
   VAR_8->dp_scyl = FUNC_0(VAR_11);
   VAR_8->dp_ssect = FUNC_1(VAR_10,VAR_11);
   VAR_8->dp_shd = VAR_12;

   VAR_11 = FUNC_2(VAR_8->dp_ecyl,VAR_8->dp_esect);
   VAR_12 = VAR_8->dp_ehd;
   VAR_10 = FUNC_3(VAR_8->dp_esect);
   FUNC_4("ending cylinder", VAR_11, VAR_9, VAR_1);
   FUNC_4("ending head", VAR_12, VAR_9, VAR_2);
   FUNC_4("ending sector", VAR_10, VAR_9, VAR_3);
   VAR_8->dp_ecyl = FUNC_0(VAR_11);
   VAR_8->dp_esect = FUNC_1(VAR_10,VAR_11);
   VAR_8->dp_ehd = VAR_12;
  } else
   FUNC_6(VAR_8);

  FUNC_9(VAR_8);
 } while (!FUNC_8("Are we happy with this entry?"));
    }
}
