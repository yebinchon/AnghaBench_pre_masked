
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct archive_entry archive_entry ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*,int ) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_8 (struct archive*,unsigned char*,size_t) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct archive*,int ,int ) ;
 int FUNC_15 (unsigned char*) ;
 unsigned char* FUNC_16 (int) ;
 int FUNC_17 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_18 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_19(unsigned char *VAR_2, size_t VAR_3,
    void (*VAR_4)(struct archive_entry *),
    int VAR_5, int VAR_6)
{
 struct archive_entry *VAR_7;
 struct archive *VAR_8;
 unsigned char *VAR_9 = FUNC_16(100000);

 FUNC_17(VAR_9, VAR_2, VAR_3);
 FUNC_18(VAR_9 + VAR_3, 0, 2048);

 FUNC_11((VAR_8 = FUNC_6()) != ((void*)0));
 FUNC_12(0 == FUNC_9(VAR_8));
 FUNC_12(0 == FUNC_10(VAR_8));
 FUNC_12(0 == FUNC_8(VAR_8, VAR_9, VAR_3 + 1024));
 FUNC_12(0 == FUNC_7(VAR_8, &VAR_7));
 FUNC_13(FUNC_1(VAR_8, 0), VAR_5);
 FUNC_13(FUNC_2(VAR_8), VAR_6);
 FUNC_13(FUNC_0(VAR_7), 0);
 FUNC_14(VAR_8, FUNC_5(VAR_8), VAR_1);


 VAR_4(VAR_7);

 FUNC_14(VAR_8, VAR_0, FUNC_3(VAR_8));
 FUNC_13(VAR_0, FUNC_4(VAR_8));
 FUNC_15(VAR_9);
}
