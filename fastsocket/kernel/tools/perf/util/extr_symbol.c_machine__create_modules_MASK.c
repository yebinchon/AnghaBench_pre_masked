
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct map {int dso; } ;
struct machine {char* root_dir; } ;
typedef int name ;
struct TYPE_2__ {char* default_guest_modules; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 int FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (struct machine*) ;
 struct map* FUNC_8 (struct machine*,int ,char*) ;
 int FUNC_9 (struct machine*) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char*,char*,char*) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_15(struct machine *VAR_2)
{
 char *VAR_3 = ((void*)0);
 size_t VAR_4;
 FILE *VAR_5;
 struct map *VAR_6;
 const char *VAR_7;
 char VAR_8[VAR_0];

 if (FUNC_7(VAR_2))
  VAR_7 = VAR_1.default_guest_modules;
 else {
  FUNC_11(VAR_8, "%s/proc/modules", VAR_2->root_dir);
  VAR_7 = VAR_8;
 }

 if (FUNC_14(VAR_8, "/proc/modules"))
  return -1;

 VAR_5 = FUNC_3(VAR_7, "r");
 if (VAR_5 == ((void*)0))
  return -1;

 while (!FUNC_2(VAR_5)) {
  char VAR_9[VAR_0];
  u64 VAR_10;
  char *VAR_11;
  int VAR_12;

  VAR_12 = FUNC_5(&VAR_3, &VAR_4, VAR_5);
  if (VAR_12 < 0)
   break;

  if (!VAR_3)
   goto out_failure;

  VAR_3[--VAR_12] = '\0';

  VAR_11 = FUNC_13(VAR_3, 'x');
  if (VAR_11 == ((void*)0))
   continue;

  FUNC_6(VAR_11 + 1, &VAR_10);

  VAR_11 = FUNC_12(VAR_3, ' ');
  if (VAR_11 == ((void*)0))
   continue;

  *VAR_11 = '\0';

  FUNC_10(VAR_9, sizeof(VAR_9), "[%s]", VAR_3);
  VAR_6 = FUNC_8(VAR_2, VAR_10, VAR_9);
  if (VAR_6 == ((void*)0))
   goto out_delete_line;
  FUNC_0(VAR_6->dso, VAR_2->root_dir);
 }

 FUNC_4(VAR_3);
 FUNC_1(VAR_5);

 return FUNC_9(VAR_2);

out_delete_line:
 FUNC_4(VAR_3);
out_failure:
 return -1;
}
