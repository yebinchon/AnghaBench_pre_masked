
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct archive {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (struct archive*,void const**,size_t*,scalar_t__*) ;
 int FUNC_3 (struct archive*,int ,char*) ;
 char* FUNC_4 (int,size_t) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (struct archive*,int,int,size_t,char*,scalar_t__,scalar_t__) ;
 size_t FUNC_8 (int,char const*,size_t) ;

int
FUNC_9(struct archive *VAR_7, int VAR_8)
{
 struct stat VAR_9;
 int VAR_10, VAR_11;
 const void *VAR_12;
 size_t VAR_13, VAR_14;
 ssize_t VAR_15;
 int64_t VAR_16;
 int64_t VAR_17 = 0;
 int VAR_18;
 char *VAR_19 = ((void*)0);
 size_t VAR_20 = 16384;

 FUNC_1(VAR_7, VAR_3, VAR_4,
     "archive_read_data_into_fd");

 VAR_18 = (FUNC_6(VAR_8, &VAR_9) == 0) && FUNC_0(VAR_9.st_mode);
 if (!VAR_18)
  VAR_19 = FUNC_4(1, VAR_20);

 while ((VAR_10 = FUNC_2(VAR_7, &VAR_12, &VAR_13, &VAR_16)) ==
     VAR_2) {
  const char *VAR_21 = VAR_12;
  if (VAR_16 > VAR_17) {
   VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_18, VAR_20, VAR_19,
       VAR_16, VAR_17);
   if (VAR_10 != VAR_2)
    break;
   VAR_17 = VAR_16;
  }
  while (VAR_13 > 0) {
   VAR_14 = VAR_13;
   if (VAR_14 > VAR_5)
    VAR_14 = VAR_5;
   VAR_15 = FUNC_8(VAR_8, VAR_21, VAR_14);
   if (VAR_15 < 0) {
    FUNC_3(VAR_7, VAR_6, "Write error");
    VAR_10 = VAR_1;
    goto cleanup;
   }
   VAR_17 += VAR_15;
   VAR_21 += VAR_15;
   VAR_13 -= VAR_15;
  }
 }

 if (VAR_10 == VAR_0 && VAR_16 > VAR_17) {
  VAR_11 = FUNC_7(VAR_7, VAR_8, VAR_18, VAR_20, VAR_19,
      VAR_16, VAR_17);
  if (VAR_11 != VAR_2)
   VAR_10 = VAR_11;
 }

cleanup:
 FUNC_5(VAR_19);
 if (VAR_10 != VAR_0)
  return (VAR_10);
 return (VAR_2);
}
