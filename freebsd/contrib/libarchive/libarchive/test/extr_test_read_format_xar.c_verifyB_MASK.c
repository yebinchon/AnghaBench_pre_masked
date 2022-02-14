
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive*,unsigned char*,size_t) ;
 int FUNC_2 (struct archive*) ;
 struct archive* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_5 (struct archive*,unsigned char*,size_t) ;
 scalar_t__ FUNC_6 (struct archive*) ;
 scalar_t__ FUNC_7 (struct archive*) ;
 scalar_t__ FUNC_8 (struct archive*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (unsigned char*) ;
 scalar_t__ FUNC_13 (size_t) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(unsigned char *VAR_1, size_t VAR_2) {
 struct archive* VAR_3;
 struct archive_entry *VAR_4 = ((void*)0);
 size_t VAR_5;
 unsigned char *VAR_6;

 FUNC_9((VAR_3 = FUNC_3()) != ((void*)0));

 if(VAR_0 != FUNC_7(VAR_3)) {
  FUNC_14("Unsupported gzip");
  FUNC_11(VAR_0, FUNC_2(VAR_3));
  return;
 }

 if(VAR_0 != FUNC_6(VAR_3)) {
  FUNC_14("Unsupported bzip2");
  FUNC_11(VAR_0, FUNC_2(VAR_3));
  return;
 }

 if(VAR_0 != FUNC_8(VAR_3)) {
  FUNC_14("Unsupported xar");
  FUNC_11(VAR_0, FUNC_2(VAR_3));
  return;
 }

 FUNC_10(0 == FUNC_5(VAR_3, VAR_1, VAR_2));


 FUNC_10(0 == FUNC_4(VAR_3, &VAR_4));
 VAR_5 = (size_t) FUNC_0(VAR_4);
 FUNC_10(VAR_5 == 12);
 VAR_6 = (unsigned char*) FUNC_13(VAR_5);
 FUNC_10(((void*)0) != VAR_6);
 FUNC_10(VAR_5 == (size_t) FUNC_1(VAR_3, VAR_6, VAR_5));
 FUNC_12(VAR_6);


 FUNC_10(0 == FUNC_4(VAR_3, &VAR_4));
 VAR_5 = (size_t) FUNC_0(VAR_4);
 FUNC_10(VAR_5 == 12);
 VAR_6 = (unsigned char*) FUNC_13(VAR_5);
 FUNC_10(((void*)0) != VAR_6);
 FUNC_10(VAR_5 == (size_t) FUNC_1(VAR_3, VAR_6, VAR_5));
 FUNC_12(VAR_6);

 FUNC_11(VAR_0, FUNC_2(VAR_3));
}
