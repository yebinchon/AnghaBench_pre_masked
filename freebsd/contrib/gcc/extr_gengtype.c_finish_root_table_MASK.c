
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flist {int name; scalar_t__ started_p; struct flist* next; int f; } ;
typedef int lang_bitmap ;


 size_t VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct flist *VAR_2, const char *VAR_3, const char *VAR_4,
     const char *VAR_5, const char *VAR_6)
{
  struct flist *VAR_7;

  for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
    if (VAR_7->started_p)
      {
 FUNC_1 (VAR_7->f, "  %s\n", VAR_4);
 FUNC_1 (VAR_7->f, "};\n\n");
      }

  for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
    if (VAR_7->started_p)
      {
 lang_bitmap VAR_8 = FUNC_0 (VAR_7->name);
 int VAR_9;

 for (VAR_9 = 0; VAR_8 != 0; VAR_9++, VAR_8 >>= 1)
   if (VAR_8 & 1)
     {
       FUNC_1 (VAR_1[VAR_9],
         "extern const struct %s gt_%s_",
         VAR_5, VAR_3);
       FUNC_2 (VAR_1[VAR_9], VAR_7->name);
       FUNC_1 (VAR_1[VAR_9], "[];\n");
     }
      }

  {
    size_t VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
      FUNC_1 (VAR_1 [VAR_10],
        "const struct %s * const %s[] = {\n",
        VAR_5, VAR_6);
  }


  for (VAR_7 = VAR_2; VAR_7; VAR_7 = VAR_7->next)
    if (VAR_7->started_p)
      {
 lang_bitmap VAR_11 = FUNC_0 (VAR_7->name);
 int VAR_12;

 VAR_7->started_p = 0;

 for (VAR_12 = 0; VAR_11 != 0; VAR_12++, VAR_11 >>= 1)
   if (VAR_11 & 1)
     {
       FUNC_1 (VAR_1[VAR_12], "  gt_%s_", VAR_3);
       FUNC_2 (VAR_1[VAR_12], VAR_7->name);
       FUNC_1 (VAR_1[VAR_12], ",\n");
     }
      }

  {
    size_t VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
      {
 FUNC_1 (VAR_1[VAR_13], "  NULL\n");
 FUNC_1 (VAR_1[VAR_13], "};\n");
      }
  }
}
