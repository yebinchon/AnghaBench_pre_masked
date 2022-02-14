
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disklabel {int d_npartitions; int d_secsize; TYPE_1__* d_partitions; scalar_t__ d_checksum; void* d_magic2; void* d_magic; } ;
struct TYPE_2__ {int p_offset; scalar_t__ p_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,struct disklabel*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct disklabel*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct disklabel VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,char*,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(void)
{
 int VAR_14, VAR_15, VAR_16;
 struct disklabel *VAR_17 = &VAR_8;

 if (VAR_4) {
  FUNC_9("write to disk label suppressed - label was as follows:");
  FUNC_2(VAR_13, ((void*)0));
  return (0);
 }

 VAR_17->d_magic = VAR_0;
 VAR_17->d_magic2 = VAR_0;
 VAR_17->d_checksum = 0;
 VAR_17->d_checksum = FUNC_3(VAR_17);
 if (VAR_6)
  FUNC_6();
 for (VAR_14 = 0; VAR_14 < VAR_8.d_npartitions; VAR_14++)
  if (VAR_8.d_partitions[VAR_14].p_size)
   VAR_8.d_partitions[VAR_14].p_offset += VAR_11;
 FUNC_0(VAR_3 + VAR_9 + VAR_10 * VAR_8.d_secsize,
     VAR_17);

 VAR_15 = FUNC_5(VAR_12, VAR_1);
 if (VAR_15 < 0) {
  if (VAR_7) {
   FUNC_7("cannot open file %s for writing label", VAR_12);
   return(1);
  } else
   VAR_16 = VAR_5;

  if (FUNC_4("PART") != 0) {




   FUNC_8(VAR_16,
       "cannot open provider %s for writing label",
       VAR_12);
   FUNC_9("Try to use gpart(8).");
   return (1);
  }

  FUNC_8(VAR_16, "%s", VAR_12);
  return (1);
 } else {
  if (FUNC_10(VAR_15, VAR_3, VAR_2) != VAR_2) {
   FUNC_7("write %s", VAR_12);
   FUNC_1 (VAR_15);
   return (1);
  }
  FUNC_1 (VAR_15);
 }
 return (0);
}
