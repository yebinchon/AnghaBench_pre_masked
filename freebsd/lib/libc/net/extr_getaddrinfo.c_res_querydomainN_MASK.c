
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct res_target {int dummy; } ;
typedef TYPE_1__* res_state ;
typedef int nbuf ;
struct TYPE_5__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char const*,struct res_target*,TYPE_1__*) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, const char *VAR_4,
    struct res_target *VAR_5, res_state VAR_6)
{
 char VAR_7[VAR_0];
 const char *VAR_8 = VAR_7;
 size_t VAR_9, VAR_10;






 if (VAR_4 == ((void*)0)) {




  VAR_9 = FUNC_4(VAR_3);
  if (VAR_9 >= VAR_0) {
   FUNC_0(VAR_6, VAR_1);
   return (-1);
  }
  if (VAR_9 > 0 && VAR_3[--VAR_9] == '.') {
   FUNC_5(VAR_7, VAR_3, VAR_9);
   VAR_7[VAR_9] = '\0';
  } else
   VAR_8 = VAR_3;
 } else {
  VAR_9 = FUNC_4(VAR_3);
  VAR_10 = FUNC_4(VAR_4);
  if (VAR_9 + VAR_10 + 1 >= VAR_0) {
   FUNC_0(VAR_6, VAR_1);
   return (-1);
  }
  FUNC_3(VAR_7, sizeof(VAR_7), "%s.%s", VAR_3, VAR_4);
 }
 return (FUNC_2(VAR_8, VAR_5, VAR_6));
}
