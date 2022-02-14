
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileblocks {int dummy; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,struct archive_entry**) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,struct fileblocks*) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*,char*) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*,int ) ;
 int FUNC_10 (struct archive*,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void
FUNC_15(struct archive *VAR_7, struct fileblocks *VAR_8)
{
 char VAR_9[64];
 struct archive_entry *VAR_10;
 int VAR_11;

 FUNC_12(VAR_7, VAR_1,
     FUNC_7(VAR_7, "zip:ignorecrc32"));
 FUNC_12(VAR_7, VAR_1,
     FUNC_6(VAR_7, VAR_3));
 FUNC_12(VAR_7, VAR_1,
     FUNC_8(VAR_7, VAR_2));
 FUNC_12(VAR_7, VAR_1,
     FUNC_10(VAR_7, VAR_5));
 FUNC_12(VAR_7, VAR_1,
     FUNC_9(VAR_7, VAR_4));
 FUNC_12(VAR_7, VAR_1,
     FUNC_5(VAR_7, VAR_8));
 FUNC_12(VAR_7, VAR_1, FUNC_4(VAR_7));




 for (VAR_11 = 0; VAR_6[VAR_11] > 0; VAR_11++) {
  FUNC_12(VAR_7, VAR_1,
      FUNC_3(VAR_7, &VAR_10));
  FUNC_14(VAR_9, "file_%d", VAR_11);
  FUNC_13(VAR_9, FUNC_0(VAR_10));
  FUNC_11(VAR_6[VAR_11], FUNC_1(VAR_10));
 }
 FUNC_12(VAR_7, 0, FUNC_3(VAR_7, &VAR_10));
 FUNC_13("lastfile", FUNC_0(VAR_10));

 FUNC_12(VAR_7, VAR_0, FUNC_3(VAR_7, &VAR_10));


 FUNC_12(VAR_7, VAR_1, FUNC_2(VAR_7));
}
