
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int name; int * fetch; } ;
struct fetch_param {int fn; void* data; } ;
struct deref_fetch_param {long offset; struct fetch_param orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char*,long) ;
 struct fetch_type* FUNC_1 (int *) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct deref_fetch_param*) ;
 struct deref_fetch_param* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,struct fetch_type const*,struct fetch_param*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,long*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,int ,long*) ;
 int FUNC_11 (char*,int ,unsigned long*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int FUNC_13(char *VAR_7, const struct fetch_type *VAR_8,
        struct fetch_param *VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 unsigned long VAR_12;
 long VAR_13;
 char *VAR_14;

 switch (VAR_7[0]) {
 case '$':
  VAR_11 = FUNC_5(VAR_7 + 1, VAR_8, VAR_9, VAR_10);
  break;
 case '%':
  VAR_11 = FUNC_7(VAR_7 + 1);
  if (VAR_11 >= 0) {
   VAR_9->fn = VAR_8->fetch[VAR_4];
   VAR_9->data = (void *)(unsigned long)VAR_11;
   VAR_11 = 0;
  }
  break;
 case '@':
  if (FUNC_2(VAR_7[1])) {
   VAR_11 = FUNC_11(VAR_7 + 1, 0, &VAR_12);
   if (VAR_11)
    break;
   VAR_9->fn = VAR_8->fetch[VAR_3];
   VAR_9->data = (void *)VAR_12;
  } else {
   VAR_11 = FUNC_8(VAR_7 + 1, &VAR_13);
   if (VAR_11)
    break;
   VAR_9->data = FUNC_0(VAR_7 + 1, VAR_13);
   if (VAR_9->data)
    VAR_9->fn = VAR_8->fetch[VAR_5];
  }
  break;
 case '+':
  VAR_7++;
 case '-':
  VAR_14 = FUNC_9(VAR_7, '(');
  if (!VAR_14)
   break;
  *VAR_14 = '\0';
  VAR_11 = FUNC_10(VAR_7, 0, &VAR_13);
  if (VAR_11)
   break;
  VAR_7 = VAR_14 + 1;
  VAR_14 = FUNC_12(VAR_7, ')');
  if (VAR_14) {
   struct deref_fetch_param *VAR_15;
   const struct fetch_type *VAR_16 = FUNC_1(((void*)0));
   *VAR_14 = '\0';
   VAR_15 = FUNC_4(sizeof(struct deref_fetch_param),
           VAR_6);
   if (!VAR_15)
    return -VAR_1;
   VAR_15->offset = VAR_13;
   VAR_11 = FUNC_13(VAR_7, VAR_16, &VAR_15->orig,
      VAR_10);
   if (VAR_11)
    FUNC_3(VAR_15);
   else {
    VAR_9->fn = VAR_8->fetch[VAR_2];
    VAR_9->data = (void *)VAR_15;
   }
  }
  break;
 }
 if (!VAR_11 && !VAR_9->fn) {
  FUNC_6("%s type has no corresponding fetch method.\n",
   VAR_8->name);
  VAR_11 = -VAR_0;
 }
 return VAR_11;
}
