
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
struct property {int dummy; } ;
struct node {int dummy; } ;
struct dirent {int d_name; } ;
typedef int FILE ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct node*,struct node*) ;
 int FUNC_3 (struct node*,struct property*) ;
 struct node* FUNC_4 (int *,int *) ;
 struct property* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,char const*,char*) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*,int ) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 struct node* FUNC_14 (struct node*,int ,int *) ;
 int * FUNC_15 (char const*) ;
 struct dirent* FUNC_16 (int *) ;
 int VAR_1 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 char* FUNC_19 (int ) ;

__attribute__((used)) static struct node *FUNC_20(const char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 struct stat VAR_5;
 struct node *VAR_6;

 VAR_3 = FUNC_15(VAR_2);
 if (!VAR_3)
  FUNC_7("Couldn't opendir() \"%s\": %s\n", VAR_2, FUNC_19(VAR_0));

 VAR_6 = FUNC_4(((void*)0), ((void*)0));

 while ((VAR_4 = FUNC_16(VAR_3)) != ((void*)0)) {
  char *VAR_7;

  if (FUNC_18(VAR_4->d_name, ".")
      || FUNC_18(VAR_4->d_name, ".."))
   continue;

  VAR_7 = FUNC_12(VAR_2, VAR_4->d_name);

  if (FUNC_13(VAR_7, &VAR_5) < 0)
   FUNC_7("stat(%s): %s\n", VAR_7, FUNC_19(VAR_0));

  if (FUNC_1(VAR_5.st_mode)) {
   struct property *VAR_8;
   FILE *VAR_9;

   VAR_9 = FUNC_9(VAR_7, "r");
   if (! VAR_9) {
    FUNC_10(VAR_1,
     "WARNING: Cannot open %s: %s\n",
     VAR_7, FUNC_19(VAR_0));
   } else {
    VAR_8 = FUNC_5(FUNC_17(VAR_4->d_name),
            FUNC_6(VAR_9,
             VAR_5.st_size),
            ((void*)0));
    FUNC_3(VAR_6, VAR_8);
    FUNC_8(VAR_9);
   }
  } else if (FUNC_0(VAR_5.st_mode)) {
   struct node *VAR_10;

   VAR_10 = FUNC_20(VAR_7);
   VAR_10 = FUNC_14(VAR_10, FUNC_17(VAR_4->d_name),
          ((void*)0));
   FUNC_2(VAR_6, VAR_10);
  }

  FUNC_11(VAR_7);
 }

 return VAR_6;
}
