
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int str; } ;
struct diocgattr_arg {int len; TYPE_2__ value; int name; } ;
struct TYPE_3__ {char const* name; int * ptype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,int ,struct diocgattr_arg*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (char const*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int * FUNC_6 (int ,int *) ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_3)
{
 struct diocgattr_arg VAR_4;
 int VAR_5, VAR_6;

 if ((VAR_5 = FUNC_4(VAR_3, VAR_1)) == -1)
  FUNC_1(1, "cannot open `%s'", VAR_3);

 FUNC_5(VAR_4.name, "PART::type", sizeof(VAR_4.name));
 FUNC_3(&VAR_4.value, 0, sizeof(VAR_4.value));
 VAR_4.len = sizeof(VAR_4.value);
 if (FUNC_2(VAR_5, VAR_0, &VAR_4) == -1) {
  (void) FUNC_0(VAR_5);
  return(((void*)0));
 }
 (void) FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_2[VAR_6].ptype != ((void*)0); VAR_6++)
  if (FUNC_6(VAR_4.value.str, VAR_2[VAR_6].ptype) != ((void*)0))
   return (VAR_2[VAR_6].name);
 return (((void*)0));
}
