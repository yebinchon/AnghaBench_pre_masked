
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct dos_partition {scalar_t__ dp_start; scalar_t__ dp_size; int dp_typ; int dp_flag; } ;
struct TYPE_2__ {struct dos_partition* parts; int * bootinst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct dos_partition*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 void* VAR_14 ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 char* FUNC_10 () ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_15 ;
 int FUNC_12 (int) ;
 int * FUNC_13 (int ) ;
 TYPE_1__ VAR_16 ;
 scalar_t__ FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int) ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (char*,...) ;
 int VAR_20 ;
 int FUNC_19 (void*) ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_24 () ;
 int VAR_25 ;
 int FUNC_25 () ;

int
FUNC_26(int VAR_26, char *VAR_27[])
{
 int VAR_28, VAR_29;
 int VAR_30 = -1;
 struct dos_partition *VAR_31;

 while ((VAR_28 = FUNC_11(VAR_26, VAR_27, "BIab:f:ipqstuv1234")) != -1)
  switch (VAR_28) {
  case 'B':
   VAR_1 = 1;
   break;
  case 'I':
   VAR_3 = 1;
   break;
  case 'a':
   VAR_6 = 1;
   break;
  case 'b':
   VAR_7 = VAR_17;
   break;
  case 'f':
   VAR_14 = VAR_17;
   break;
  case 'i':
   VAR_15 = 1;
   break;
  case 'p':
   VAR_19 = 1;
   break;
  case 'q':
   VAR_20 = 1;
   break;
  case 's':
   VAR_21 = 1;
   break;
  case 't':
   VAR_23 = 1;
   break;
  case 'u':
   VAR_24 = 1;
   break;
  case 'v':
   VAR_25 = 1;
   break;
  case '1':
  case '2':
  case '3':
  case '4':
   VAR_30 = VAR_28 - '0';
   break;
  default:
   FUNC_24();
  }
 if (VAR_14 || VAR_15)
  VAR_24 = 1;
 if (VAR_23)
  VAR_25 = 1;
 VAR_26 -= VAR_18;
 VAR_27 += VAR_18;

 if (VAR_26 == 0) {
  VAR_8 = FUNC_10();
 } else {
  VAR_8 = FUNC_8(VAR_27[0]);
  if (VAR_8 == ((void*)0))
   FUNC_4(1, "unable to get correct path for %s", VAR_27[0]);
 }
 if (FUNC_15(VAR_24) < 0)
  FUNC_4(1, "cannot open disk %s", VAR_8);


 if ((VAR_16.bootinst = FUNC_13(VAR_4)) == ((void*)0))
  FUNC_4(1, "cannot allocate buffer to determine disk sector size");
 if (FUNC_20(0, VAR_16.bootinst) == -1)
  FUNC_5(1, "could not detect sector size");
 FUNC_7(VAR_16.bootinst);
 VAR_16.bootinst = ((void*)0);

 if (VAR_19) {
  if (FUNC_21())
   FUNC_4(1, "read_s0");

  FUNC_18("# %s\n", VAR_8);
  FUNC_18("g c%d h%d s%d\n", VAR_10, VAR_12, VAR_13);

  for (VAR_29 = 0; VAR_29 < VAR_5; VAR_29++) {
   VAR_31 = &VAR_16.parts[VAR_29];

   if (VAR_31->dp_start == 0 && VAR_31->dp_size == 0)
    continue;

   FUNC_18("p %d 0x%02x %lu %lu\n", VAR_29 + 1, VAR_31->dp_typ,
       (u_long)VAR_31->dp_start, (u_long)VAR_31->dp_size);


   if (VAR_31->dp_flag & 0x80)
    FUNC_18("a %d\n", VAR_29 + 1);
  }
  FUNC_6(0);
 }
 if (VAR_21) {
  if (FUNC_21())
   FUNC_4(1, "read_s0");
  FUNC_18("%s: %d cyl %d hd %d sec\n", VAR_8, VAR_10, VAR_12,
      VAR_13);
  FUNC_18("Part  %11s %11s Type Flags\n", "Start", "Size");
  for (VAR_29 = 0; VAR_29 < VAR_5; VAR_29++) {
   VAR_31 = &VAR_16.parts[VAR_29];
   if (VAR_31->dp_start == 0 && VAR_31->dp_size == 0)
    continue;
   FUNC_18("%4d: %11lu %11lu 0x%02x 0x%02x\n", VAR_29 + 1,
       (u_long) VAR_31->dp_start,
       (u_long) VAR_31->dp_size, VAR_31->dp_typ,
       VAR_31->dp_flag);
  }
  FUNC_6(0);
 }

 FUNC_18("******* Working on device %s *******\n",VAR_8);

 if (VAR_3) {
  FUNC_21();
  FUNC_22();
  VAR_31 = &VAR_16.parts[0];
  VAR_31->dp_typ = VAR_2;
  VAR_31->dp_flag = VAR_0;
  VAR_31->dp_start = VAR_13;
  VAR_31->dp_size = FUNC_23(VAR_9, VAR_11) -
      VAR_13;
  FUNC_3(VAR_31);
  if (VAR_25)
   FUNC_17();
  if (!VAR_23)
   FUNC_25();
  FUNC_6(0);
 }
 if (VAR_14) {
     if (FUNC_21() || VAR_15)
  FUNC_22();
     if (!FUNC_19(VAR_14))
  FUNC_6(1);
     if (VAR_25)
  FUNC_17();
     if (!VAR_23)
  FUNC_25();
 } else {
     if(VAR_24)
  FUNC_9();
     else
  FUNC_16();

     if (FUNC_21())
  FUNC_12(VAR_13);

     FUNC_18("Media sector size is %d\n", VAR_22);
     FUNC_18("Warning: BIOS sector numbering starts with sector 1\n");
     FUNC_18("Information from DOS bootblock is:\n");
     if (VAR_30 == -1)
  for (VAR_29 = 1; VAR_29 <= VAR_5; VAR_29++)
      FUNC_2(VAR_29);
     else
  FUNC_2(VAR_30);

     if (VAR_24 || VAR_6)
  FUNC_0(VAR_30);

     if (VAR_1)
  FUNC_1();

     if (VAR_24 || VAR_6 || VAR_1) {
  if (!VAR_23) {
      FUNC_18("\nWe haven't changed the partition table yet.  ");
      FUNC_18("This is your last chance.\n");
  }
  FUNC_17();
  if (!VAR_23) {
      if (FUNC_14("Should we write new partition table?"))
   FUNC_25();
  } else {
      FUNC_18("\n-t flag specified -- partition table not written.\n");
  }
     }
 }

 FUNC_6(0);
}
