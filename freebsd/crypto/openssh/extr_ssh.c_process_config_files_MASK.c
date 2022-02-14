
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,struct passwd*,int ,char const*,int *,int) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_10, struct passwd *VAR_11, int VAR_12)
{
 char VAR_13[VAR_0];
 int VAR_14;

 if (VAR_6 != ((void*)0)) {
  if (FUNC_3(VAR_6, "none") != 0 &&
      !FUNC_1(VAR_6, VAR_11, VAR_8, VAR_10, &VAR_9,
      VAR_3 | (VAR_12 ? VAR_2 : 0)))
   FUNC_0("Can't open user config file %.100s: "
       "%.100s", VAR_6, FUNC_4(VAR_7));
 } else {
  VAR_14 = FUNC_2(VAR_13, sizeof VAR_13, "%s/%s", VAR_11->pw_dir,
      VAR_5);
  if (VAR_14 > 0 && (size_t)VAR_14 < sizeof(VAR_13))
   (void)FUNC_1(VAR_13, VAR_11, VAR_8, VAR_10,
       &VAR_9, VAR_1 | VAR_3 |
       (VAR_12 ? VAR_2 : 0));


  (void)FUNC_1(VAR_4, VAR_11,
      VAR_8, VAR_10, &VAR_9,
      VAR_12 ? VAR_2 : 0);
 }
}
