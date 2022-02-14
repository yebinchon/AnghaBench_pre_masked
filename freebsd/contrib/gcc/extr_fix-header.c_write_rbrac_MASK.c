
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_list {char* names; int flags; } ;
struct fn_decl {char* fname; char* rtype; char* params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fn_decl*) ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 struct fn_decl* FUNC_3 (char const*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;
 struct symbol_list* VAR_24 ;


__attribute__((used)) static void
FUNC_6 (void)
{
  struct fn_decl *VAR_25;
  const char *VAR_26;
  struct symbol_list *VAR_27;

  if (VAR_7)
    {



    }


  for (VAR_27 = &VAR_24[0]; VAR_27->names; VAR_27++)
    {
      int VAR_28 = 0;
      int VAR_29;
      VAR_26 = VAR_27->names;
      for ( ; (VAR_29 = FUNC_5 (VAR_26)) != 0; VAR_26+= VAR_29 + 1)
 {
   int VAR_30 = 0;

   if (VAR_27->flags & VAR_1)
     continue;

   VAR_25 = FUNC_3 (VAR_26, VAR_29);
   if (VAR_25 == ((void*)0) || !FUNC_0 (VAR_25))
     continue;

   if (!VAR_28)
     {

       if (VAR_27->flags & VAR_0)
  FUNC_2 (VAR_6,
  "#if defined(__USE_FIXED_PROTOTYPES__) || defined(__cplusplus) || defined (__STRICT_ANSI__)\n");
       else if (VAR_27->flags & (VAR_2|VAR_3))
  FUNC_2 (VAR_6,
       "#if defined(__USE_FIXED_PROTOTYPES__) || (defined(__cplusplus) \\\n    ? (!defined(__STRICT_ANSI__) || defined(_POSIX_SOURCE)) \\\n    : (defined(__STRICT_ANSI__) && defined(_POSIX_SOURCE)))\n");


       else if (VAR_27->flags & VAR_5)
  {
  FUNC_2 (VAR_6,
       "#if defined(__USE_FIXED_PROTOTYPES__) \\\n   || (defined(__STRICT_ANSI__) && defined(_XOPEN_SOURCE))\n");

  }
       else if (VAR_27->flags & VAR_4)
  {
  FUNC_2 (VAR_6,
       "#if defined(__USE_FIXED_PROTOTYPES__) \\\n   || (defined(__STRICT_ANSI__) && defined(_XOPEN_EXTENDED_SOURCE))\n");

  }
       else
  {
    FUNC_1 ("internal error for function %s", VAR_25->fname);
  }
       VAR_28 = 1;
     }



   if (!FUNC_4 (VAR_25->fname, "memmove")
       || !FUNC_4 (VAR_25->fname, "putc")
       || !FUNC_4 (VAR_25->fname, "getc")
       || !FUNC_4 (VAR_25->fname, "vprintf")
       || !FUNC_4 (VAR_25->fname, "vfprintf")
       || !FUNC_4 (VAR_25->fname, "vsprintf")
       || !FUNC_4 (VAR_25->fname, "rewinddir")
       || !FUNC_4 (VAR_25->fname, "abort"))
     VAR_30 = 1;

   if (VAR_30)
     FUNC_2 (VAR_6, "#ifndef %s\n", VAR_25->fname);
   FUNC_2 (VAR_6, "extern %s %s (%s);\n",
     VAR_25->rtype, VAR_25->fname, VAR_25->params);
   if (VAR_30)
     FUNC_2 (VAR_6, "#endif\n");
 }
      if (VAR_28)
 FUNC_2 (VAR_6,
   "#endif /* defined(__USE_FIXED_PROTOTYPES__) || ... */\n");
    }
  if (VAR_7)
    {



    }

  switch (VAR_23)
    {
    case 130:
      if (!VAR_22)
 FUNC_2 (VAR_6, "extern int errno;\n");
      break;
    case 129:
      if (!VAR_8)
 FUNC_2 (VAR_6, "#define EXIT_FAILURE 1\n");
      if (!VAR_9)
 FUNC_2 (VAR_6, "#define EXIT_SUCCESS 0\n");
      break;
    case 128:
      if (!VAR_16 && VAR_10)
 FUNC_2 (VAR_6,
   "#define S_ISBLK(mode) (((mode) & S_IFMT) == S_IFBLK)\n");
      if (!VAR_17 && VAR_11)
 FUNC_2 (VAR_6,
   "#define S_ISCHR(mode) (((mode) & S_IFMT) == S_IFCHR)\n");
      if (!VAR_18 && VAR_12)
 FUNC_2 (VAR_6,
   "#define S_ISDIR(mode) (((mode) & S_IFMT) == S_IFDIR)\n");
      if (!VAR_19 && VAR_13)
 FUNC_2 (VAR_6,
   "#define S_ISFIFO(mode) (((mode) & S_IFMT) == S_IFIFO)\n");
      if (!VAR_20 && VAR_14)
 FUNC_2 (VAR_6,
   "#define S_ISLNK(mode) (((mode) & S_IFMT) == S_IFLNK)\n");
      if (!VAR_21 && VAR_15)
 FUNC_2 (VAR_6,
   "#define S_ISREG(mode) (((mode) & S_IFMT) == S_IFREG)\n");
      break;

    default:
      break;
    }

}
