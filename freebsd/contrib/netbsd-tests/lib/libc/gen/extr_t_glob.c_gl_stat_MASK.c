
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gl_file {char* name; } ;
typedef int buf ;
struct TYPE_4__ {int st_mode; } ;
typedef TYPE_1__ __gl_stat_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct gl_file*) ;
 struct gl_file* VAR_3 ;
 struct gl_file* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6 , __gl_stat_t *VAR_7)
{
 char VAR_8[VAR_1];
 FUNC_4(VAR_8, sizeof(VAR_8), VAR_6);
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 if (FUNC_3(VAR_8, "a") == 0 || FUNC_3(VAR_8, "a/b") == 0) {
  VAR_7->st_mode |= VAR_2;
  return 0;
 }

 if (VAR_8[0] == 'a' && VAR_8[1] == '/') {
  struct gl_file *VAR_9;
  size_t VAR_10, VAR_11;

  if (VAR_8[2] == 'b' && VAR_8[3] == '/') {
   VAR_10 = 4;
   VAR_11 = FUNC_1(VAR_4);
   VAR_9 = VAR_4;
  } else {
   VAR_10 = 2;
   VAR_11 = FUNC_1(VAR_3);
   VAR_9 = VAR_3;
  }

  for (size_t VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   if (FUNC_3(VAR_9[VAR_12].name, VAR_8 + VAR_10) == 0)
    return 0;
 }
 FUNC_0(("stat %s %d\n", VAR_8, VAR_7->st_mode));
 VAR_5 = VAR_0;
 return -1;
}
