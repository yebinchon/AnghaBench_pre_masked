
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_profile {unsigned int* value; struct tomoyo_path_info const* comment; } ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_io_buffer {char* write_buf; } ;
struct TYPE_2__ {char const* keyword; unsigned int max_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

 int FUNC_0 (char*,char*,unsigned int*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*,int,unsigned long*) ;
 TYPE_1__* VAR_3 ;
 struct tomoyo_profile* FUNC_4 (unsigned long) ;
 char** VAR_4 ;
 char** VAR_5 ;
 struct tomoyo_path_info* FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct tomoyo_io_buffer *VAR_6)
{
 char *VAR_7 = VAR_6->write_buf;
 unsigned int VAR_8;
 unsigned int VAR_9;
 char *VAR_10;
 struct tomoyo_profile *VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_1(VAR_7, '-');
 if (VAR_10)
  *VAR_10 = '\0';
 if (FUNC_3(VAR_7, 10, &VAR_12))
  return -VAR_0;
 if (VAR_10)
  VAR_7 = VAR_10 + 1;
 VAR_11 = FUNC_4(VAR_12);
 if (!VAR_11)
  return -VAR_0;
 VAR_10 = FUNC_1(VAR_7, '=');
 if (!VAR_10)
  return -VAR_0;
 *VAR_10 = '\0';
 if (!FUNC_2(VAR_7, "COMMENT")) {
  const struct tomoyo_path_info *VAR_13
   = FUNC_5(VAR_10 + 1);
  if (!VAR_13)
   return -VAR_1;
  VAR_11->comment = VAR_13;
  return 0;
 }
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (FUNC_2(VAR_7, VAR_3[VAR_8].keyword))
   continue;
  if (FUNC_0(VAR_10 + 1, "%u", &VAR_9) != 1) {
   int VAR_14;
   const char **VAR_15;
   switch (VAR_8) {
   case 128:
    VAR_15 = VAR_4;
    break;
   default:
    VAR_15 = VAR_5;
    break;
   }
   for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
    if (FUNC_2(VAR_10 + 1, VAR_15[VAR_14]))
     continue;
    VAR_9 = VAR_14;
    break;
   }
   if (VAR_14 == 4)
    return -VAR_0;
  } else if (VAR_9 > VAR_3[VAR_8].max_value) {
   VAR_9 = VAR_3[VAR_8].max_value;
  }
  VAR_11->value[VAR_8] = VAR_9;
  return 0;
 }
 return -VAR_0;
}
