
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; int flags; struct symbol* next; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct symbol* FUNC_0 (int) ;
 int FUNC_1 (struct symbol*,int ,int) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 struct symbol** VAR_3 ;
 struct symbol VAR_4 ;
 struct symbol VAR_5 ;
 struct symbol VAR_6 ;

struct symbol *FUNC_4(const char *VAR_7, int VAR_8)
{
 struct symbol *VAR_9;
 const char *VAR_10;
 char *VAR_11;
 int VAR_12 = 0;

 if (VAR_7) {
  if (VAR_7[0] && !VAR_7[1]) {
   switch (VAR_7[0]) {
   case 'y': return &VAR_6;
   case 'm': return &VAR_4;
   case 'n': return &VAR_5;
   }
  }
  for (VAR_10 = VAR_7; *VAR_10; VAR_10++)
   VAR_12 += *VAR_10;
  VAR_12 &= 0xff;

  for (VAR_9 = VAR_3[VAR_12]; VAR_9; VAR_9 = VAR_9->next) {
   if (!FUNC_2(VAR_9->name, VAR_7) &&
       (VAR_8 ? VAR_9->flags & VAR_8
       : !(VAR_9->flags & (VAR_1|VAR_0))))
    return VAR_9;
  }
  VAR_11 = FUNC_3(VAR_7);
 } else {
  VAR_11 = ((void*)0);
  VAR_12 = 256;
 }

 VAR_9 = FUNC_0(sizeof(*VAR_9));
 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->name = VAR_11;
 VAR_9->type = VAR_2;
 VAR_9->flags |= VAR_8;

 VAR_9->next = VAR_3[VAR_12];
 VAR_3[VAR_12] = VAR_9;

 return VAR_9;
}
