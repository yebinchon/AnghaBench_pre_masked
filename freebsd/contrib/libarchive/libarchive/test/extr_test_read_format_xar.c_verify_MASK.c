
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct archive_entry archive_entry ;
typedef struct archive archive ;
typedef enum enc { ____Placeholder_enc } enc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 scalar_t__ FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 scalar_t__ FUNC_8 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_9 (struct archive*,unsigned char*,size_t) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 scalar_t__ FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (struct archive*,int,int ) ;
 int FUNC_18 (unsigned char*) ;
 unsigned char* FUNC_19 (int) ;
 int FUNC_20 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_21 (unsigned char*,int ,int) ;
 int FUNC_22 (char*) ;

__attribute__((used)) static void FUNC_23(unsigned char *VAR_6, size_t VAR_7,
    void (*VAR_8)(struct archive *, struct archive_entry *),
    void (*VAR_9)(struct archive *, struct archive_entry *),
    enum enc VAR_10)
{
 struct archive_entry *VAR_11;
 struct archive *VAR_12;
 unsigned char *VAR_13;
 int VAR_14;

 FUNC_14((VAR_12 = FUNC_7()) != ((void*)0));
 switch (VAR_10) {
 case 129:


  if (VAR_3 != FUNC_11(VAR_12)) {
   FUNC_22("Unsupported bzip2");
   FUNC_16(VAR_3, FUNC_5(VAR_12));
   return;
  }
  break;
 case 128:


  break;
 }
 FUNC_15(0 == FUNC_10(VAR_12));
 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14 == VAR_5) {
  FUNC_22("xar reading not fully supported on this platform");
  FUNC_16(VAR_3, FUNC_5(VAR_12));
  return;
 }
 FUNC_14((VAR_13 = FUNC_19(100000)) != ((void*)0));
 if (VAR_13 == ((void*)0))
  return;
 FUNC_20(VAR_13, VAR_6, VAR_7);
 FUNC_21(VAR_13 + VAR_7, 0, 2048);

 FUNC_15(0 == FUNC_12(VAR_12));
 FUNC_15(0 == FUNC_9(VAR_12, VAR_13, VAR_7 + 1024));
 FUNC_15(0 == FUNC_8(VAR_12, &VAR_11));
 FUNC_16(FUNC_2(VAR_12, 0), VAR_1);
 FUNC_16(FUNC_3(VAR_12), VAR_2);
 FUNC_16(FUNC_0(VAR_11), 0);
 FUNC_17(VAR_12, FUNC_6(VAR_12), VAR_4);

 VAR_8(VAR_12, VAR_11);
 if (VAR_9) {
  FUNC_15(0 == FUNC_8(VAR_12, &VAR_11));
  FUNC_16(FUNC_2(VAR_12, 0), VAR_1);
  FUNC_16(FUNC_3(VAR_12), VAR_2);

  VAR_9(VAR_12, VAR_11);
  FUNC_16(2, FUNC_1(VAR_12));
 } else {
  FUNC_16(1, FUNC_1(VAR_12));
 }

 FUNC_16(VAR_0, FUNC_8(VAR_12, &VAR_11));

 FUNC_17(VAR_12, VAR_3, FUNC_4(VAR_12));
 FUNC_16(VAR_3, FUNC_5(VAR_12));
 FUNC_18(VAR_13);
}
