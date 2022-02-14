
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {char* name; int * fetch; } ;
struct fetch_param {void* data; int fn; } ;


 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,unsigned long*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_6, const struct fetch_type *VAR_7,
       struct fetch_param *VAR_8, bool VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11;

 if (FUNC_1(VAR_6, "retval") == 0) {
  if (VAR_9)
   VAR_8->fn = VAR_7->fetch[VAR_2];
  else
   VAR_10 = -VAR_1;
 } else if (FUNC_3(VAR_6, "stack", 5) == 0) {
  if (VAR_6[5] == '\0') {
   if (FUNC_1(VAR_7->name, VAR_0) == 0)
    VAR_8->fn = VAR_5;
   else
    VAR_10 = -VAR_1;
  } else if (FUNC_0(VAR_6[5])) {
   VAR_10 = FUNC_2(VAR_6 + 5, 10, &VAR_11);
   if (VAR_10 || VAR_11 > VAR_4)
    VAR_10 = -VAR_1;
   else {
    VAR_8->fn = VAR_7->fetch[VAR_3];
    VAR_8->data = (void *)VAR_11;
   }
  } else
   VAR_10 = -VAR_1;
 } else
  VAR_10 = -VAR_1;
 return VAR_10;
}
