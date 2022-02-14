
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_decl {int dummy; } ;


 scalar_t__ FUNC_0 (struct fn_decl*) ;
 int FUNC_1 (struct fn_decl*) ;

 struct fn_decl* FUNC_2 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;


__attribute__((used)) static void
FUNC_5 (const char *VAR_18)
{

  struct fn_decl *VAR_19 = FUNC_2 (VAR_18, FUNC_4 (VAR_18));


  if (VAR_19)
    {
      if (FUNC_0 (VAR_19))
 VAR_1--;
      FUNC_1 (VAR_19);
    }

  switch (VAR_17)
    {
    case 130:
      if (FUNC_3 (VAR_18, "errno") == 0 && !VAR_16)
 VAR_16 = 1, VAR_0--;
      break;
    case 129:
      if (FUNC_3 (VAR_18, "EXIT_FAILURE") == 0 && !VAR_2)
 VAR_2 = 1, VAR_0--;
      if (FUNC_3 (VAR_18, "EXIT_SUCCESS") == 0 && !VAR_3)
 VAR_3 = 1, VAR_0--;
      break;
    case 128:
      if (VAR_18[0] == 'S' && VAR_18[1] == '_')
 {
   if (FUNC_3 (VAR_18, "S_IFBLK") == 0) VAR_4++;
   else if (FUNC_3 (VAR_18, "S_ISBLK") == 0) VAR_10++;
   else if (FUNC_3 (VAR_18, "S_IFCHR") == 0) VAR_5++;
   else if (FUNC_3 (VAR_18, "S_ISCHR") == 0) VAR_11++;
   else if (FUNC_3 (VAR_18, "S_IFDIR") == 0) VAR_6++;
   else if (FUNC_3 (VAR_18, "S_ISDIR") == 0) VAR_12++;
   else if (FUNC_3 (VAR_18, "S_IFIFO") == 0) VAR_7++;
   else if (FUNC_3 (VAR_18, "S_ISFIFO") == 0) VAR_13++;
   else if (FUNC_3 (VAR_18, "S_IFLNK") == 0) VAR_8++;
   else if (FUNC_3 (VAR_18, "S_ISLNK") == 0) VAR_14++;
   else if (FUNC_3 (VAR_18, "S_IFREG") == 0) VAR_9++;
   else if (FUNC_3 (VAR_18, "S_ISREG") == 0) VAR_15++;
 }
      break;

    default:
      break;
    }
}
