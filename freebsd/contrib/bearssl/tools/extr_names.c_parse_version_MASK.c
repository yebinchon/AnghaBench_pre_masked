
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int version; } ;


 scalar_t__ FUNC_0 (char const*,int ,char const*,size_t) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

unsigned
FUNC_3(const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0;; VAR_4 ++) {
  const char *VAR_5;

  VAR_5 = VAR_0[VAR_4].name;
  if (VAR_5 == ((void*)0)) {
   FUNC_1(VAR_1, "ERROR: unrecognised protocol"
    " version name: '%s'\n", VAR_2);
   return 0;
  }
  if (FUNC_0(VAR_5, FUNC_2(VAR_5), VAR_2, VAR_3)) {
   return VAR_0[VAR_4].version;
  }
 }
}
