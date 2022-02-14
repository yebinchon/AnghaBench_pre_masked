
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union u_spcl {int dummy; } u_spcl ;
typedef int uintmax_t ;
struct stat {int st_blksize; } ;
struct TYPE_10__ {void* action; } ;
struct TYPE_7__ {scalar_t__ c_checksum; int c_type; int c_magic; } ;
struct TYPE_9__ {TYPE_1__ s_spcl; } ;
struct TYPE_8__ {int c_volume; scalar_t__ c_type; int c_count; int c_date; int c_ddate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_3 (unsigned int,unsigned int) ;
 char VAR_14 ;
 TYPE_6__ VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ) ;
 void* VAR_16 ;
 char* VAR_17 ;
 void* VAR_18 ;
 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_21 ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_12 (int,int) ;
 char* VAR_23 ;
 char* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 scalar_t__ VAR_29 ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 () ;
 int FUNC_20 (char*,char*,int) ;
 TYPE_2__ VAR_30 ;
 scalar_t__ FUNC_21 (char*,struct stat*) ;
 int VAR_31 ;
 int VAR_32 ;
 char* FUNC_22 (int ) ;
 int VAR_33 ;
 char* VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int FUNC_23 (int ,char*) ;
 int VAR_37 ;
 int VAR_38 ;

void
FUNC_24(void)
{
 int VAR_39, VAR_40, *VAR_41;
 struct stat VAR_42;

 FUNC_23(VAR_32, "Verify tape and initialize maps\n");
 if (VAR_27) {
  if (FUNC_20("RESTORE_VOLUME", "1", 1) == -1) {
   FUNC_9(VAR_31, "Cannot set $RESTORE_VOLUME: %s\n",
       FUNC_22(VAR_20));
   FUNC_4(1);
  }
  VAR_29 = FUNC_15(VAR_23, "r");
  VAR_26 = VAR_29 ? FUNC_6(VAR_29) : -1;
 } else





 if (VAR_28)
  VAR_26 = 0;
 else
  VAR_26 = FUNC_13(VAR_23, VAR_5, 0);
 if (VAR_26 < 0) {
  FUNC_9(VAR_31, "%s: %s\n", VAR_23, FUNC_22(VAR_20));
  FUNC_4(1);
 }
 VAR_36 = 1;
 FUNC_19();
 FUNC_0();
 if (!VAR_28 && !VAR_27 && !VAR_12)
  FUNC_8();
 if (FUNC_11(&VAR_30) == VAR_1) {
  FUNC_9(VAR_31, "Tape is not a dump tape\n");
  FUNC_4(1);
 }
 if (VAR_28) {
  VAR_19.s_spcl.c_magic = VAR_2;
  VAR_19.s_spcl.c_type = VAR_9;
  VAR_41 = (int *)&VAR_19;
  VAR_40 = sizeof(union u_spcl) / sizeof(int);
  VAR_39 = 0;
  do
   VAR_39 += *VAR_41++;
  while (--VAR_40);
  VAR_19.s_spcl.c_checksum = VAR_0 - VAR_39;
 }
 if (VAR_35 || VAR_14 == 't')
  FUNC_16();
 VAR_18 = FUNC_2(VAR_30.c_ddate);
 VAR_16 = FUNC_2(VAR_30.c_date);
 if (FUNC_21(".", &VAR_42) < 0) {
  FUNC_9(VAR_31, "cannot stat .: %s\n", FUNC_22(VAR_20));
  FUNC_4(1);
 }
 if (VAR_42.st_blksize > 0 && VAR_42.st_blksize < VAR_6 )
  VAR_21 = VAR_6;
 if (VAR_42.st_blksize >= VAR_6 && VAR_42.st_blksize <= VAR_3)
  VAR_21 = VAR_42.st_blksize;
 if (((VAR_6 - 1) & VAR_42.st_blksize) != 0) {
  FUNC_9(VAR_31, "Warning: filesystem with non-multiple-of-%d "
      "blocksize (%d);\n", VAR_6, VAR_42.st_blksize);
  VAR_21 = FUNC_18(VAR_21, VAR_6);
  FUNC_9(VAR_31, "\twriting using blocksize %d\n", VAR_21);
 }
 if (VAR_30.c_volume != 1) {
  FUNC_9(VAR_31, "Tape is not volume 1 of the dump\n");
  FUNC_4(1);
 }
 if (FUNC_11(&VAR_30) == VAR_1) {
  FUNC_5(VAR_32, "header read failed at %ld blocks\n", VAR_13);
  FUNC_14("no header after volume mark!\n");
 }
 FUNC_7(&VAR_30);
 if (VAR_30.c_type != VAR_8) {
  FUNC_9(VAR_31, "Cannot find file removal list\n");
  FUNC_4(1);
 }
 VAR_25 = (VAR_30.c_count * VAR_6 * VAR_4) + 1;
 FUNC_5(VAR_32, "maxino = %ju\n", (uintmax_t)VAR_25);
 VAR_24 = FUNC_3((unsigned)1, (unsigned)FUNC_12(VAR_25, VAR_4));
 if (VAR_24 == ((void*)0))
  FUNC_14("no memory for active inode map\n");
 VAR_34 = VAR_24;
 VAR_15.action = VAR_11;
 FUNC_10(VAR_37, VAR_38, VAR_38);
 if (VAR_30.c_type != VAR_7) {
  FUNC_9(VAR_31, "Cannot find file dump list\n");
  FUNC_4(1);
 }
 VAR_24 = FUNC_3((unsigned)1, (unsigned)FUNC_12(VAR_25, VAR_4));
 if (VAR_24 == (char *)((void*)0))
  FUNC_14("no memory for file dump list\n");
 VAR_17 = VAR_24;
 VAR_15.action = VAR_11;
 FUNC_10(VAR_37, VAR_38, VAR_38);





 FUNC_1(VAR_10, VAR_17);

 if (VAR_14 == 'r')
  VAR_33 = 1;
}
