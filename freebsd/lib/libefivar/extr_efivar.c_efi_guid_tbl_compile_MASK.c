
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* uuid_str; char* name; int guid; } ;


 int FUNC_0 (int ,char*,char*,char*,int) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int *,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 size_t VAR_4;
 uint32_t VAR_5;
 static int VAR_6 = 0;

 if (VAR_6)
  return;
 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_0); VAR_4++) {
  FUNC_2(VAR_0[VAR_4].uuid_str, &VAR_0[VAR_4].guid,
      &VAR_5);

  if (VAR_5 != VAR_3 && VAR_5 != VAR_2)
   FUNC_0(VAR_1, "Can't convert %s to a uuid for %s: %d\n",
       VAR_0[VAR_4].uuid_str, VAR_0[VAR_4].name, (int)VAR_5);
 }
 VAR_6 = 1;
}
