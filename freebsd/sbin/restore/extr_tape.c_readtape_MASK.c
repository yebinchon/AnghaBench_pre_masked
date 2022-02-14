
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uintmax_t ;
struct s_spcl {scalar_t__ c_magic; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int action; char* name; int ino; } ;


 int VAR_0 ;

 size_t VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 char VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (long) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,long,int ) ;
 int FUNC_5 (char*,char*,long) ;
 int FUNC_6 (char*,int ,long) ;
 int VAR_9 ;
 long VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (char*,long,long) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 long FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*) ;
 long FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (long,int) ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_12 (int ) ;
 int VAR_16 ;
 char* VAR_17 ;
 int FUNC_13 () ;
 long VAR_18 ;
 int FUNC_14 (int ,char*,...) ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_15(char *VAR_20)
{
 long VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;

 if (VAR_2 + (VAR_4 > 0) < VAR_11) {
  FUNC_5(VAR_20, &VAR_17[(VAR_2++ * VAR_1) + VAR_4], (long)VAR_1);
  VAR_3++;
  VAR_16++;
  return;
 }
 if (VAR_11 > 0)
  FUNC_5(&VAR_17[-VAR_1],
      &VAR_17[(VAR_11-1) * VAR_1], (long)VAR_1);
 VAR_24 = VAR_11;
 for (VAR_23 = 0; VAR_23 < VAR_10; VAR_23++)
  ((struct s_spcl *)&VAR_17[VAR_23 * VAR_1])->c_magic = 0;
 if (VAR_11 == 0)
  VAR_11 = VAR_10;
 VAR_25 = VAR_10 * VAR_1;
 VAR_21 = 0;
getmore:





  VAR_23 = FUNC_8(VAR_9, &VAR_17[VAR_21], VAR_25);




 if (!VAR_13 && !VAR_12 && VAR_11 < VAR_10 && VAR_23 > 0) {
  FUNC_1(VAR_15, "mid-media short read error.\n");
  VAR_11 = VAR_10;
 }



 if ((VAR_13 || VAR_12) && VAR_23 == 0 && VAR_21 > 0)
  VAR_23 = VAR_21;
 else if (VAR_23 > 0 && VAR_23 != VAR_10 * VAR_1) {
  if (VAR_13 || VAR_12) {
   VAR_21 += VAR_23;
   VAR_25 -= VAR_23;
   if (VAR_25 > 0)
    goto getmore;
   VAR_23 = VAR_21;
  } else {



   if (VAR_23 % VAR_1 != 0)
    FUNC_14(VAR_15,
        "partial block read: %ld should be %ld\n",
        VAR_23, VAR_10 * VAR_1);
   VAR_11 = VAR_23 / VAR_1;
  }
 }



 if (VAR_23 < 0) {
  FUNC_2(VAR_14, "Tape read error while ");
  switch (VAR_5.action) {
  default:
   FUNC_2(VAR_14, "trying to set up tape\n");
   break;
  case 129:
   FUNC_2(VAR_14, "trying to resynchronize\n");
   break;
  case 128:
   FUNC_2(VAR_14, "restoring %s\n", VAR_5.name);
   break;
  case 130:
   FUNC_2(VAR_14, "skipping over inode %s\n",
       (uintmax_t)VAR_5.ino);
   break;
  }
  if (!VAR_19 && !FUNC_9("continue"))
   FUNC_0(1);
  VAR_23 = VAR_10 * VAR_1;
  FUNC_6(VAR_17, 0, VAR_23);





   VAR_26 = (FUNC_4(VAR_9, VAR_23, VAR_0) == (off_t)-1);

  if (VAR_26) {
   FUNC_2(VAR_14,
       "continuation failed: %s\n", FUNC_12(VAR_7));
   FUNC_0(1);
  }
 }



 if (VAR_23 == 0) {
  FUNC_14(VAR_15, "End-of-tape encountered\n");
  if (!VAR_13) {
   VAR_22 = VAR_18 + 1;
   VAR_18 = 0;
   VAR_11 = 0;
   FUNC_3(VAR_22);
   FUNC_15(VAR_20);
   return;
  }
  if (VAR_21 % VAR_1 != 0)
   FUNC_7("partial block read: %ld should be %ld\n",
    VAR_21, VAR_10 * VAR_1);
  FUNC_13();
  FUNC_5(&VAR_17[VAR_21], &VAR_6, (long)VAR_1);
 }
 if (VAR_24 == 0)
  VAR_2 = 0;
 else
  VAR_2 -= VAR_24;
 FUNC_5(VAR_20,
     &VAR_17[(VAR_2++ * VAR_1) + VAR_4], (long)VAR_1);
 VAR_3++;
 VAR_16++;
}
