
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_list {int dummy; } ;
struct archive_string {int s; } ;
struct archive_match {int archive; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_match*,struct match_list*,int ) ;
 int FUNC_1 (int *,struct archive*) ;
 int FUNC_2 (struct archive*,void const**,size_t*,int *) ;
 int FUNC_3 (struct archive*) ;
 struct archive* FUNC_4 () ;
 int FUNC_5 (struct archive*,struct archive_entry**) ;
 int FUNC_6 (struct archive*,void const*,int) ;
 int FUNC_7 (struct archive*,void const*,int) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (struct archive_string*) ;
 int FUNC_12 (struct archive_string*) ;
 int FUNC_13 (struct archive_string*) ;
 scalar_t__ FUNC_14 (struct archive_string*) ;
 int FUNC_15 (struct archive_string*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_16(struct archive_match *VAR_4, struct match_list *VAR_5,
    int VAR_6, const void *VAR_7, int VAR_8)
{
 struct archive *VAR_9;
 struct archive_entry *VAR_10;
 struct archive_string VAR_11;
 const void *VAR_12;
 size_t VAR_13;
 int64_t VAR_14;
 int VAR_15;

 VAR_9 = FUNC_4();
 if (VAR_9 == ((void*)0)) {
  FUNC_10(&(VAR_4->archive), VAR_3, "No memory");
  return (VAR_1);
 }
 VAR_15 = FUNC_9(VAR_9);
 VAR_15 = FUNC_8(VAR_9);
 if (VAR_15 != VAR_2) {
  FUNC_1(&(VAR_4->archive), VAR_9);
  FUNC_3(VAR_9);
  return (VAR_15);
 }
 if (VAR_6)
  VAR_15 = FUNC_6(VAR_9, VAR_7, 512*20);
 else
  VAR_15 = FUNC_7(VAR_9, VAR_7, 512*20);
 if (VAR_15 != VAR_2) {
  FUNC_1(&(VAR_4->archive), VAR_9);
  FUNC_3(VAR_9);
  return (VAR_15);
 }
 VAR_15 = FUNC_5(VAR_9, &VAR_10);
 if (VAR_15 != VAR_2) {
  FUNC_3(VAR_9);
  if (VAR_15 == VAR_0) {
   return (VAR_2);
  } else {
   FUNC_1(&(VAR_4->archive), VAR_9);
   return (VAR_15);
  }
 }

 FUNC_13(&VAR_11);

 while ((VAR_15 = FUNC_2(VAR_9, &VAR_12, &VAR_13, &VAR_14))
     == VAR_2) {
  const char *VAR_16 = (const char *)VAR_12;

  while (VAR_13) {
   const char *VAR_17 = (const char *)VAR_16;
   size_t VAR_18 = 0;
   int VAR_19 = 0;

   while (VAR_18 < VAR_13) {
    if (VAR_8) {
     if (*VAR_16 == '\0') {
      VAR_19 = 1;
      break;
     }
    } else {
                if (*VAR_16 == 0x0d || *VAR_16 == 0x0a) {
      VAR_19 = 1;
      break;
     }
    }
    VAR_16++;
    VAR_18++;
   }
   if (!VAR_19) {
    FUNC_15(&VAR_11, VAR_17, VAR_18);

    break;
   }
   VAR_16++;
   VAR_13 -= VAR_18 + 1;
   FUNC_15(&VAR_11, VAR_17, VAR_18);


   if (FUNC_14(&VAR_11) > 0) {

    VAR_15 = FUNC_0(VAR_4, VAR_5, VAR_11.s);
    if (VAR_15 != VAR_2) {
     FUNC_3(VAR_9);
     FUNC_12(&VAR_11);
     return (VAR_15);
    }
    FUNC_11(&VAR_11);
   }
  }
 }


 if (VAR_15 < VAR_2) {
  FUNC_1(&(VAR_4->archive), VAR_9);
  FUNC_3(VAR_9);
  FUNC_12(&VAR_11);
  return (VAR_15);
 }


 if (VAR_15 == VAR_0 && FUNC_14(&VAR_11) > 0) {

  VAR_15 = FUNC_0(VAR_4, VAR_5, VAR_11.s);
  if (VAR_15 != VAR_2) {
   FUNC_3(VAR_9);
   FUNC_12(&VAR_11);
   return (VAR_15);
  }
 }
 FUNC_3(VAR_9);
 FUNC_12(&VAR_11);
 return (VAR_2);
}
