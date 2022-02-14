
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 struct archive_entry* FUNC_6 () ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*,int,int) ;
 int FUNC_9 (struct archive_entry*,int,int) ;
 int FUNC_10 (struct archive_entry*,int,int) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*,int,int) ;
 int FUNC_13 (struct archive_entry*,int) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*,unsigned char*,int) ;
 int FUNC_17 (struct archive*) ;
 struct archive* FUNC_18 () ;
 int FUNC_19 (struct archive*,struct archive_entry**) ;
 int FUNC_20 (struct archive*,unsigned char*,size_t) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*) ;
 int FUNC_25 (struct archive*,unsigned char*,int) ;
 int FUNC_26 (struct archive*) ;
 int FUNC_27 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_28 () ;
 int FUNC_29 (struct archive*,unsigned char*,size_t,size_t*) ;
 int FUNC_30 (struct archive*) ;
 int FUNC_31 (struct archive*,int *,char*,char*) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int,int) ;
 int FUNC_34 (struct archive*,int,int) ;
 int FUNC_35 (unsigned char*,...) ;
 int FUNC_36 (char*,int ) ;
 int FUNC_37 (char*) ;
 int FUNC_38 (unsigned char*) ;
 unsigned char* FUNC_39 (size_t) ;
 int FUNC_40 (unsigned char*,char,int) ;
 unsigned char* VAR_5 ;
 int FUNC_41 (char*) ;
 unsigned char* VAR_6 ;
 unsigned char* VAR_7 ;
 unsigned char* VAR_8 ;
 unsigned char* VAR_9 ;
 unsigned char* VAR_10 ;
 unsigned char* VAR_11 ;

__attribute__((used)) static void
FUNC_42(void)
{
 unsigned char VAR_12[1024];
 unsigned char VAR_13[1024];
 struct archive *VAR_14;
 struct archive_entry *VAR_15;
 unsigned char *VAR_16;
 size_t VAR_17 = 60 * 2048;
 size_t VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 VAR_16 = FUNC_39(VAR_17);
 FUNC_32(VAR_16 != ((void*)0));
 if (VAR_16 == ((void*)0))
  return;


 FUNC_32((VAR_14 = FUNC_28()) != ((void*)0));
 FUNC_34(VAR_14, 0, FUNC_30(VAR_14));
 FUNC_34(VAR_14, 0, FUNC_23(VAR_14));
 VAR_20 = FUNC_31(VAR_14, ((void*)0), "zisofs", "1");
 if (VAR_20 == VAR_1) {
  FUNC_41("zisofs option not supported on this platform");
  FUNC_33(VAR_2, FUNC_26(VAR_14));
  FUNC_38(VAR_16);
  return;
 }
 FUNC_34(VAR_14, 0, FUNC_31(VAR_14, ((void*)0), "pad", ((void*)0)));
 FUNC_34(VAR_14, 0, FUNC_29(VAR_14, VAR_16, VAR_17, &VAR_18));




 FUNC_32((VAR_15 = FUNC_6()) != ((void*)0));
 FUNC_8(VAR_15, 2, 20);
 FUNC_9(VAR_15, 3, 30);
 FUNC_10(VAR_15, 4, 40);
 FUNC_12(VAR_15, 5, 50);
 FUNC_1(VAR_15, "file1");
 FUNC_11(VAR_15, VAR_4 | 0755);
 FUNC_13(VAR_15, 256*1024);
 FUNC_34(VAR_14, VAR_2, FUNC_27(VAR_14, VAR_15));
 FUNC_3(VAR_15);
 for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
  int VAR_21;
  if (VAR_19 == 0) {
   for (VAR_21 = 0; VAR_21 < (int)sizeof(VAR_13); VAR_21++)
    VAR_13[VAR_21] = (VAR_19^VAR_21) & 0xff;
  } else {
   for (VAR_21 = 0; VAR_21 < (int)sizeof(VAR_13); VAR_21++)
    VAR_13[VAR_21] ^= VAR_19+VAR_21;
  }
  FUNC_34(VAR_14, 1024, FUNC_25(VAR_14, VAR_13, 1024));
 }




 FUNC_32((VAR_15 = FUNC_6()) != ((void*)0));
 FUNC_8(VAR_15, 2, 20);
 FUNC_9(VAR_15, 3, 30);
 FUNC_10(VAR_15, 4, 40);
 FUNC_12(VAR_15, 5, 50);
 FUNC_1(VAR_15, "file2");
 FUNC_11(VAR_15, VAR_4 | 0755);
 FUNC_13(VAR_15, 2048);
 FUNC_34(VAR_14, VAR_2, FUNC_27(VAR_14, VAR_15));
 FUNC_3(VAR_15);
 FUNC_40(VAR_13, 'a', sizeof(VAR_13));
 FUNC_34(VAR_14, 1024, FUNC_25(VAR_14, VAR_13, 1024));
 FUNC_40(VAR_13, 'b', sizeof(VAR_13));
 FUNC_34(VAR_14, 1024, FUNC_25(VAR_14, VAR_13, 1024));





 FUNC_32((VAR_15 = FUNC_6()) != ((void*)0));
 FUNC_8(VAR_15, 2, 20);
 FUNC_9(VAR_15, 3, 30);
 FUNC_10(VAR_15, 4, 40);
 FUNC_12(VAR_15, 5, 50);
 FUNC_1(VAR_15, "file3");
 FUNC_11(VAR_15, VAR_4 | 0755);
 FUNC_13(VAR_15, 2049);
 FUNC_34(VAR_14, VAR_2, FUNC_27(VAR_14, VAR_15));
 FUNC_3(VAR_15);
 FUNC_40(VAR_13, 'Z', sizeof(VAR_13));
 FUNC_34(VAR_14, 1024, FUNC_25(VAR_14, VAR_13, 1024));





 FUNC_32((VAR_15 = FUNC_6()) != ((void*)0));
 FUNC_8(VAR_15, 2, 20);
 FUNC_9(VAR_15, 3, 30);
 FUNC_10(VAR_15, 4, 40);
 FUNC_12(VAR_15, 5, 50);
 FUNC_1(VAR_15, "file4");
 FUNC_11(VAR_15, VAR_4 | 0755);
 FUNC_13(VAR_15, 24);
 FUNC_34(VAR_14, VAR_2, FUNC_27(VAR_14, VAR_15));
 FUNC_3(VAR_15);
 FUNC_34(VAR_14, 24, FUNC_25(VAR_14, VAR_10, 24));


 FUNC_34(VAR_14, VAR_2, FUNC_24(VAR_14));
 FUNC_34(VAR_14, VAR_2, FUNC_26(VAR_14));

 FUNC_37("The ISO image size should be 110592 bytes.");
 FUNC_33(VAR_18, 2048 * 54);


 for (VAR_19 = 0; VAR_19 < 2048 * 16; VAR_19++) {
  FUNC_37("System Area should be all nulls.");
  FUNC_33(VAR_16[VAR_19], 0);
 }


 FUNC_37("Primary Volume Descriptor should be in 16 Logical Sector.");
 FUNC_35(VAR_16+2048*16, VAR_5, 8);
 FUNC_35(VAR_16+2048*16+0x28,
     "CDROM                           ", 32);
 FUNC_35(VAR_16+2048*16+0x50, VAR_9, 8);


 FUNC_37("Supplementary Volume(Joliet) Descriptor "
     "should be in 17 Logical Sector.");
 FUNC_35(VAR_16+2048*17, VAR_6, 8);
 FUNC_35(VAR_16+2048*17+0x28, VAR_8, 32);
 FUNC_35(VAR_16+2048*17+0x50, VAR_9, 8);
 FUNC_37("Date and Time of Primary Volume and "
     "Date and Time of Supplementary Volume "
     "must be the same.");
 FUNC_35(VAR_16+2048*16+0x32d, VAR_16+2048*17+0x32d, 0x44);


 FUNC_37("Volume Descriptor Set Terminator "
     "should be in 18 Logical Sector.");
 FUNC_35(VAR_16+2048*18, VAR_7, 8);
 for (VAR_19 = 8; VAR_19 < 2048; VAR_19++) {
  FUNC_37("Body of Volume Descriptor Set Terminator "
      "should be all nulls.");
  FUNC_33(VAR_16[2048*18+VAR_19], 0);
 }


 FUNC_37("file1 image should be zisofs'ed.");
 FUNC_35(VAR_16+2048*31, VAR_11, 8);

 FUNC_40(VAR_13, 'a', sizeof(VAR_13));
 FUNC_37("file2 image should not be zisofs'ed.");
 FUNC_35(VAR_16+2048*51, VAR_13, 1024);
 FUNC_40(VAR_13, 'b', sizeof(VAR_13));
 FUNC_37("file2 image should not be zisofs'ed.");
 FUNC_35(VAR_16+2048*51+1024, VAR_13, 1024);

 FUNC_37("file3 image should be zisofs'ed.");
 FUNC_35(VAR_16+2048*52, VAR_11, 8);

 FUNC_37("file4 image should be zisofs'ed.");
 FUNC_35(VAR_16+2048*53, VAR_11, 8);




 FUNC_32((VAR_14 = FUNC_18()) != ((void*)0));
 FUNC_34(VAR_14, 0, FUNC_22(VAR_14));
 FUNC_34(VAR_14, 0, FUNC_21(VAR_14));
 FUNC_34(VAR_14, 0, FUNC_20(VAR_14, VAR_16, VAR_18));





 FUNC_34(VAR_14, 0, FUNC_19(VAR_14, &VAR_15));
 FUNC_33(FUNC_0(VAR_15), FUNC_2(VAR_15));
 FUNC_33(FUNC_0(VAR_15), FUNC_5(VAR_15));
 FUNC_36(".", FUNC_7(VAR_15));
 FUNC_32((VAR_3 | 0555) == FUNC_4(VAR_15));
 FUNC_33(2048, FUNC_14(VAR_15));




 FUNC_34(VAR_14, 0, FUNC_19(VAR_14, &VAR_15));
 FUNC_33(2, FUNC_0(VAR_15));
 FUNC_33(4, FUNC_2(VAR_15));
 FUNC_33(5, FUNC_5(VAR_15));
 FUNC_36("file1", FUNC_7(VAR_15));
 FUNC_32((VAR_4 | 0555) == FUNC_4(VAR_15));
 FUNC_33(256*1024, FUNC_14(VAR_15));
 FUNC_34(VAR_14, 1024, FUNC_16(VAR_14, VAR_12, 1024));




 FUNC_34(VAR_14, 0, FUNC_19(VAR_14, &VAR_15));
 FUNC_33(2, FUNC_0(VAR_15));
 FUNC_33(4, FUNC_2(VAR_15));
 FUNC_33(5, FUNC_5(VAR_15));
 FUNC_36("file2", FUNC_7(VAR_15));
 FUNC_32((VAR_4 | 0555) == FUNC_4(VAR_15));
 FUNC_33(2048, FUNC_14(VAR_15));
 FUNC_34(VAR_14, 1024, FUNC_16(VAR_14, VAR_12, 1024));
 FUNC_40(VAR_13, 'a', sizeof(VAR_13));
 FUNC_35(VAR_12, VAR_13, 1024);




 FUNC_34(VAR_14, 0, FUNC_19(VAR_14, &VAR_15));
 FUNC_33(2, FUNC_0(VAR_15));
 FUNC_33(4, FUNC_2(VAR_15));
 FUNC_33(5, FUNC_5(VAR_15));
 FUNC_36("file3", FUNC_7(VAR_15));
 FUNC_32((VAR_4 | 0555) == FUNC_4(VAR_15));
 FUNC_33(2049, FUNC_14(VAR_15));
 FUNC_34(VAR_14, 1024, FUNC_16(VAR_14, VAR_12, 1024));
 FUNC_40(VAR_13, 'Z', sizeof(VAR_13));
 FUNC_35(VAR_12, VAR_13, 1024);




 FUNC_34(VAR_14, 0, FUNC_19(VAR_14, &VAR_15));
 FUNC_33(2, FUNC_0(VAR_15));
 FUNC_33(4, FUNC_2(VAR_15));
 FUNC_33(5, FUNC_5(VAR_15));
 FUNC_36("file4", FUNC_7(VAR_15));
 FUNC_32((VAR_4 | 0555) == FUNC_4(VAR_15));
 FUNC_33(32768, FUNC_14(VAR_15));
 FUNC_34(VAR_14, 1024, FUNC_16(VAR_14, VAR_12, 1024));
 FUNC_40(VAR_13, 0, sizeof(VAR_13));
 FUNC_35(VAR_12, VAR_13, 1024);




 FUNC_34(VAR_14, VAR_0, FUNC_19(VAR_14, &VAR_15));
 FUNC_34(VAR_14, VAR_2, FUNC_15(VAR_14));
 FUNC_34(VAR_14, VAR_2, FUNC_17(VAR_14));

 FUNC_38(VAR_16);
}
