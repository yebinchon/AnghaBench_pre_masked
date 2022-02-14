
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {int dummy; } ;
struct bsdtar {int next_line_is_dir; int flags; int return_value; int names_from_file; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsdtar*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,char*) ;
 struct lafe_line_reader* FUNC_2 (int ,int) ;
 int FUNC_3 (struct lafe_line_reader*) ;
 char* FUNC_4 (struct lafe_line_reader*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct bsdtar*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct bsdtar*,struct archive*,char const*) ;

__attribute__((used)) static void
FUNC_9(struct bsdtar *VAR_2, struct archive *VAR_3)
{
 struct lafe_line_reader *VAR_4;
 const char *VAR_5;

 VAR_2->next_line_is_dir = 0;

 VAR_4 = FUNC_2(VAR_2->names_from_file,
     (VAR_2->flags & VAR_0));
 while ((VAR_5 = FUNC_4(VAR_4)) != ((void*)0)) {
  if (VAR_2->next_line_is_dir) {
   if (*VAR_5 != '\0')
    FUNC_6(VAR_2, VAR_5);
   else {
    FUNC_5(0,
        "Meaningless argument for -C: ''");
    VAR_2->return_value = 1;
   }
   VAR_2->next_line_is_dir = 0;
  } else if (((VAR_2->flags & VAR_0) == 0) &&
      FUNC_7(VAR_5, "-C") == 0)
   VAR_2->next_line_is_dir = 1;
  else {
   if (*VAR_5 != '/')
    FUNC_0(VAR_2);
   FUNC_8(VAR_2, VAR_3, VAR_5);
  }
 }
 FUNC_3(VAR_4);
 if (VAR_2->next_line_is_dir)
  FUNC_1(1, VAR_1,
      "Unexpected end of filename list; "
      "directory expected after -C");
}
