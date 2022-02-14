
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_path {struct search_path* next; int dir; int * member_2; int * member_1; int * member_0; } ;
struct dtc_file {char* dir; char* name; int file; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (struct dtc_file*,int ,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int VAR_2 ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (char const*,char) ;
 void* FUNC_8 (int) ;

struct dtc_file *FUNC_9(const char *VAR_3,
                               const struct search_path *VAR_4)
{
 static const struct search_path VAR_5 = { ((void*)0), ((void*)0), ((void*)0) };

 struct dtc_file *VAR_6;
 const char *VAR_7;

 VAR_6 = FUNC_8(sizeof(struct dtc_file));

 VAR_7 = FUNC_7(VAR_3, '/');
 if (VAR_7) {
  char *VAR_8 = FUNC_8(VAR_7 - VAR_3 + 1);

  FUNC_3(VAR_8, VAR_3, VAR_7 - VAR_3);
  VAR_8[VAR_7 - VAR_3] = 0;
  VAR_6->dir = VAR_8;
 } else {
  VAR_6->dir = ((void*)0);
 }

 if (FUNC_5(VAR_3, "-")) {
  VAR_6->name = "stdin";
  VAR_6->file = VAR_2;
  return VAR_6;
 }

 if (VAR_3[0] == '/') {
  VAR_6->file = FUNC_2(VAR_3, "r");
  if (!VAR_6->file)
   goto fail;

  VAR_6->name = FUNC_4(VAR_3);
  return VAR_6;
 }

 if (!VAR_4)
  VAR_4 = &VAR_5;

 while (VAR_4) {
  if (FUNC_1(VAR_6, VAR_4->dir, VAR_3))
   return VAR_6;

  if (VAR_1 != VAR_0)
   goto fail;

  VAR_4 = VAR_4->next;
 }

fail:
 FUNC_0("Couldn't open \"%s\": %s\n", VAR_3, FUNC_6(VAR_1));
}
