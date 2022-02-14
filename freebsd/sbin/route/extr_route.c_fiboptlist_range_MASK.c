
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fibl_head_t {int dummy; } ;
struct fibl {int fl_num; } ;


 int VAR_0 ;
 int FUNC_0 (struct fibl_head_t*,struct fibl*,int ) ;
 struct fibl* FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, struct fibl_head_t *VAR_5)
{
 struct fibl *VAR_6;
 char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11[2], VAR_12, VAR_13;

 VAR_7 = VAR_8 = FUNC_3(VAR_4);
 VAR_13 = 0;
 VAR_12 = 0;
 while ((VAR_9 = FUNC_4(&VAR_8, "-")) != ((void*)0)) {
  switch (VAR_12) {
  case 0:
  case 1:
   VAR_1 = 0;
   VAR_11[VAR_12] = FUNC_5(VAR_9, &VAR_10, 0);
   if (VAR_1 == 0) {
    if (*VAR_10 != '\0' ||
        VAR_11[VAR_12] < 0 ||
        (VAR_3 != -1 && VAR_11[VAR_12] > VAR_3 - 1))
     VAR_1 = VAR_0;
   }
   if (VAR_1)
    VAR_13 = 1;
   break;
  default:
   VAR_13 = 1;
  }
  if (VAR_13)
   goto fiboptlist_range_ret;
  VAR_12++;
 }
 if (VAR_11[0] >= VAR_11[1]) {
  VAR_13 = 1;
  goto fiboptlist_range_ret;
 }
 for (VAR_12 = VAR_11[0]; VAR_12 <= VAR_11[1]; VAR_12++) {
  VAR_6 = FUNC_1(1, sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   VAR_13 = 1;
   goto fiboptlist_range_ret;
  }
  VAR_6->fl_num = VAR_12;
  FUNC_0(VAR_5, VAR_6, VAR_2);
 }
fiboptlist_range_ret:
 FUNC_2(VAR_7);
 return (VAR_13);
}
