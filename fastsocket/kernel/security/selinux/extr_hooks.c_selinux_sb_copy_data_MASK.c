
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char**,char*,int*,int) ;
 int FUNC_5 (char**,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(char *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 int VAR_13 = 0;

 VAR_8 = VAR_2;
 VAR_10 = VAR_3;

 VAR_12 = (char *)FUNC_1(VAR_1);
 if (!VAR_12) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_11 = VAR_12;
 VAR_4 = VAR_5 = 1;
 VAR_7 = VAR_9 = VAR_2;

 do {
  if (*VAR_9 == '"')
   VAR_13 = !VAR_13;
  if ((*VAR_9 == ',' && VAR_13 == 0) ||
    *VAR_9 == '\0') {
   int VAR_14 = VAR_9 - VAR_8;

   if (FUNC_2(VAR_8, VAR_14))
    FUNC_5(&VAR_10, VAR_8, &VAR_5, VAR_14);
   else
    FUNC_4(&VAR_12, VAR_8, &VAR_4, VAR_14);

   VAR_8 = VAR_9 + 1;
  }
 } while (*VAR_9++);

 FUNC_3(VAR_7, VAR_11);
 FUNC_0((unsigned long)VAR_11);
out:
 return VAR_6;
}
