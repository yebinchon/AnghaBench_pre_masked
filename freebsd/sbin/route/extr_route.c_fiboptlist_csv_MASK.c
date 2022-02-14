
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fibl_head_t {int dummy; } ;
struct fibl {int fl_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fibl_head_t*,struct fibl*,int ) ;
 void* FUNC_1 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,struct fibl_head_t*) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (char*,int,char*,int,...) ;
 int * FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char**,char*) ;
 int FUNC_9 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_6, struct fibl_head_t *VAR_7)
{
 struct fibl *VAR_8;
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = VAR_10 = ((void*)0);
 if (FUNC_6("all", VAR_6) == 0) {
  VAR_10 = FUNC_1(1, VAR_0);
  if (VAR_10 == ((void*)0)) {
   VAR_14 = 1;
   goto fiboptlist_csv_ret;
  }
  if (VAR_5 > 1)
   FUNC_4(VAR_10, VAR_0 - 1, "%d-%d", 0, VAR_5 - 1);
  else
   FUNC_4(VAR_10, VAR_0 - 1, "%d", 0);
 } else if (FUNC_6("default", VAR_6) == 0) {
  VAR_9 = VAR_10 = FUNC_1(1, VAR_0);
  if (VAR_10 == ((void*)0)) {
   VAR_14 = 1;
   goto fiboptlist_csv_ret;
  }
  FUNC_4(VAR_10, VAR_0 - 1, "%d", VAR_2);
 } else
  VAR_9 = VAR_10 = FUNC_7(VAR_6);

 VAR_14 = 0;
 while ((VAR_11 = FUNC_8(&VAR_10, ",")) != ((void*)0)) {
  if (*VAR_11 != '-' && FUNC_5(VAR_11, '-') != ((void*)0)) {
   VAR_14 = FUNC_2(VAR_11, VAR_7);
   if (VAR_14)
    goto fiboptlist_csv_ret;
  } else {
   VAR_3 = 0;
   VAR_13 = FUNC_9(VAR_11, &VAR_12, 0);
   if (VAR_3 == 0) {
    if (*VAR_12 != '\0' ||
        VAR_13 < 0 ||
        (VAR_5 != -1 && VAR_13 > VAR_5 - 1))
     VAR_3 = VAR_1;
   }
   if (VAR_3) {
    VAR_14 = 1;
    goto fiboptlist_csv_ret;
   }
   VAR_8 = FUNC_1(1, sizeof(*VAR_8));
   if (VAR_8 == ((void*)0)) {
    VAR_14 = 1;
    goto fiboptlist_csv_ret;
   }
   VAR_8->fl_num = VAR_13;
   FUNC_0(VAR_7, VAR_8, VAR_4);
  }
 }
fiboptlist_csv_ret:
 if (VAR_9 != ((void*)0))
  FUNC_3(VAR_9);
 return (VAR_14);
}
