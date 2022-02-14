
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int putenv; size_t valueSize; size_t nameLen; int active; int * name; int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,size_t) ;
 int * FUNC_2 (int *,size_t,int*,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int * FUNC_5 (int *,char) ;
 int * FUNC_6 (char*) ;
 size_t FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(void)
{
 char **VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 size_t VAR_13;


 if (VAR_6 == ((void*)0) || VAR_6[0] == ((void*)0))
  return (0);


 for (VAR_9 = VAR_6, VAR_5 = 0; *VAR_9 != ((void*)0); VAR_9++)
  VAR_5++;
 VAR_4 = VAR_5 * 2;


 VAR_3 = FUNC_4(VAR_4, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  goto Failure;


 for (VAR_11 = VAR_5 - 1; VAR_11 >= 0; VAR_11--) {
  VAR_3[VAR_11].putenv = 0;
  VAR_3[VAR_11].name =
      FUNC_6(VAR_6[VAR_5 - VAR_11 - 1]);
  if (VAR_3[VAR_11].name == ((void*)0))
   goto Failure;
  VAR_3[VAR_11].value = FUNC_5(VAR_3[VAR_11].name, '=');
  if (VAR_3[VAR_11].value != ((void*)0)) {
   VAR_3[VAR_11].value++;
   VAR_3[VAR_11].valueSize =
       FUNC_7(VAR_3[VAR_11].value);
  } else {
   FUNC_1(VAR_1, VAR_3[VAR_11].name,
       FUNC_7(VAR_3[VAR_11].name));
   VAR_7 = VAR_2;
   goto Failure;
  }






  VAR_13 = VAR_3[VAR_11].value - VAR_3[VAR_11].name - 1;
  VAR_3[VAR_11].nameLen = VAR_13;
  VAR_10 = VAR_5 - 1;
  if (FUNC_2(VAR_3[VAR_11].name, VAR_13, &VAR_10,
      0) == ((void*)0)) {
   FUNC_1(VAR_0, VAR_3[VAR_11].name,
       VAR_13);
   VAR_7 = VAR_2;
   goto Failure;
  }
  VAR_3[VAR_10].active = 1;
 }


 VAR_8 = VAR_6;
 VAR_6 = ((void*)0);
 if (FUNC_3(VAR_5) == 0)
  return (0);

Failure:
 VAR_12 = VAR_7;
 FUNC_0(1);
 VAR_7 = VAR_12;

 return (-1);
}
