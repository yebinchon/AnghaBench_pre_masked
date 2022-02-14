
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {struct symbol* visited; void* expansion_trail; struct string_list* defn; } ;
struct string_list {int tag; char* string; struct string_list* next; } ;







 struct symbol* FUNC_0 (char*,int,struct string_list*,int ) ;
 struct string_list** FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char*) ;
 void* VAR_1 ;
 struct symbol* FUNC_3 (char*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*,...) ;
 unsigned long FUNC_5 (char*,unsigned long) ;
 unsigned long FUNC_6 (char,unsigned long) ;
 char** VAR_3 ;
 struct symbol* VAR_4 ;
 struct string_list* FUNC_7 (int) ;
 void* FUNC_8 (char*) ;

__attribute__((used)) static unsigned long FUNC_9(struct symbol *VAR_5, unsigned long VAR_6)
{
 struct string_list *VAR_7 = VAR_5->defn;
 struct string_list **VAR_8, **VAR_9;
 struct string_list *VAR_10, **VAR_11;
 int VAR_12 = 1;

 if (!VAR_7)
  return VAR_6;

 VAR_10 = VAR_7;
 while ((VAR_10 = VAR_10->next) != ((void*)0))
  VAR_12++;

 VAR_9 = FUNC_1(VAR_12 * sizeof(*VAR_8));
 VAR_8 = VAR_9 + VAR_12;
 VAR_11 = VAR_8 - 1;

 *(VAR_11--) = VAR_7;
 while ((VAR_7 = VAR_7->next) != ((void*)0))
  *(VAR_11--) = VAR_7;

 while (VAR_9 != VAR_8) {
  struct string_list *VAR_13;
  struct symbol *VAR_14;

  VAR_13 = *(VAR_9++);
  switch (VAR_13->tag) {
  case 131:
   if (VAR_2)
    FUNC_4(VAR_0, "%s ", VAR_13->string);
   VAR_6 = FUNC_5(VAR_13->string, VAR_6);
   VAR_6 = FUNC_6(' ', VAR_6);
   break;

  case 129:
   VAR_14 = FUNC_3(VAR_13->string, VAR_13->tag);

   if (VAR_14->expansion_trail) {
    if (VAR_2)
     FUNC_4(VAR_0, "%s ", VAR_13->string);
    VAR_6 = FUNC_5(VAR_13->string, VAR_6);
    VAR_6 = FUNC_6(' ', VAR_6);
   } else {
    VAR_14->expansion_trail = VAR_1;
    VAR_1 = VAR_14;
    VAR_6 = FUNC_9(VAR_14, VAR_6);
   }
   break;

  case 130:
  case 128:
  case 132:
   VAR_14 = FUNC_3(VAR_13->string, VAR_13->tag);
   if (!VAR_14) {
    struct string_list *VAR_15, *VAR_16 = ((void*)0);

    FUNC_2("expand undefined %s %s",
            VAR_3[VAR_13->tag],
            VAR_13->string);

    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->string = FUNC_8(VAR_3[VAR_13->tag]);
    VAR_15->tag = 131;
    VAR_15->next = VAR_16;
    VAR_16 = VAR_15;

    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->string = FUNC_8(VAR_13->string);
    VAR_15->tag = 131;
    VAR_15->next = VAR_16;
    VAR_16 = VAR_15;

    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->string = FUNC_8("{");
    VAR_15->tag = 131;
    VAR_15->next = VAR_16;
    VAR_16 = VAR_15;

    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->string = FUNC_8("UNKNOWN");
    VAR_15->tag = 131;
    VAR_15->next = VAR_16;
    VAR_16 = VAR_15;

    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->string = FUNC_8("}");
    VAR_15->tag = 131;
    VAR_15->next = VAR_16;
    VAR_16 = VAR_15;

    VAR_14 =
        FUNC_0(VAR_13->string, VAR_13->tag, VAR_15, 0);
   }
   if (VAR_14->expansion_trail) {
    if (VAR_2) {
     FUNC_4(VAR_0, "%s %s ",
      VAR_3[VAR_13->tag],
      VAR_13->string);
    }

    VAR_6 = FUNC_5(VAR_3[VAR_13->tag],
          VAR_6);
    VAR_6 = FUNC_6(' ', VAR_6);
    VAR_6 = FUNC_5(VAR_13->string, VAR_6);
    VAR_6 = FUNC_6(' ', VAR_6);
   } else {
    VAR_14->expansion_trail = VAR_1;
    VAR_1 = VAR_14;
    VAR_6 = FUNC_9(VAR_14, VAR_6);
   }
   break;
  }
 }

 {
  static struct symbol **VAR_17 = &VAR_4;

  if (!VAR_5->visited) {
   *VAR_17 = VAR_5;
   VAR_17 = &VAR_5->visited;
   VAR_5->visited = (struct symbol *)-1L;
  }
 }

 return VAR_6;
}
