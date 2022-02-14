
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {char* buf; size_t sz; int nocopy; int name; } ;
struct sec_action {char* string; } ;
struct elfcopy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct elfcopy*,int ) ;
 scalar_t__ FUNC_2 (struct elfcopy*,int ) ;
 struct sec_action* FUNC_3 (struct elfcopy*,int ,int ) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 (struct section*,size_t*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_10(struct elfcopy *VAR_1, struct section *VAR_2)
{
 struct sec_action *VAR_3;
 size_t VAR_4, VAR_5, VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_11 == ((void*)0) || VAR_4 == 0) {

  if (!FUNC_1(VAR_1, VAR_2->name))
   return;
 }


 VAR_5 = VAR_4;
 if (FUNC_1(VAR_1, VAR_2->name)) {
  VAR_3 = FUNC_3(VAR_1, VAR_2->name, 0);
  VAR_5 += FUNC_8(VAR_3->string) + 1;
 }
 if ((VAR_8 = FUNC_4(VAR_5)) == ((void*)0))
  FUNC_0(VAR_0, "malloc failed");
 VAR_2->buf = VAR_8;


 VAR_6 = 0;
 if (FUNC_2(VAR_1, VAR_2->name)) {
  VAR_12 = VAR_11 + VAR_4;
  for(VAR_9 = VAR_11; VAR_9 < VAR_12;) {
   VAR_7 = 0;
   while(VAR_9 + VAR_7 < VAR_12 && VAR_9[VAR_7] != '\0')
    VAR_7++;
   if (VAR_9 + VAR_7 == VAR_12) {

    FUNC_9(&VAR_8[VAR_6], VAR_9, VAR_7);
    VAR_6 += VAR_7;
    break;
   }
   VAR_13 = 0;
   for (VAR_10 = VAR_8; VAR_10 < VAR_8 + VAR_6; ) {
    if (FUNC_7(VAR_10, VAR_9) == 0) {
     VAR_13 = 1;
     break;
    }
    VAR_10 += FUNC_8(VAR_10) + 1;
   }
   if (!VAR_13) {
    FUNC_9(&VAR_8[VAR_6], VAR_9, VAR_7);
    VAR_8[VAR_6 + VAR_7] = '\0';
    VAR_6 += VAR_7 + 1;
   }
   VAR_9 += VAR_7 + 1;
  }
 } else {
  FUNC_5(VAR_8, VAR_11, VAR_4);
  VAR_6 += VAR_4;
 }


 if (FUNC_1(VAR_1, VAR_2->name)) {
  VAR_3 = FUNC_3(VAR_1, VAR_2->name, 0);
  VAR_7 = FUNC_8(VAR_3->string);
  FUNC_9(&VAR_8[VAR_6], VAR_3->string, VAR_7);
  VAR_8[VAR_6 + VAR_7] = '\0';
  VAR_6 += VAR_7 + 1;
 }

 VAR_2->sz = VAR_6;
 VAR_2->nocopy = 1;
}
