
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; scalar_t__ active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 char** FUNC_0 (char**,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_6)
{
 char **VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;


 if (VAR_6 > VAR_4) {
  VAR_10 = VAR_6 * 2;
  VAR_7 = FUNC_0(VAR_5, VAR_10 + 1,
      sizeof(*VAR_5));
  if (VAR_7 == ((void*)0))
   return (-1);
  VAR_4 = VAR_10;
  VAR_5 = VAR_7;
 }
 VAR_0 = VAR_6;


 for (VAR_8 = VAR_2 - 1, VAR_9 = 0; VAR_8 >= 0; VAR_8--)
  if (VAR_1[VAR_8].active)
   VAR_5[VAR_9++] = VAR_1[VAR_8].name;
 VAR_5[VAR_9] = ((void*)0);


 VAR_3 = VAR_5;

 return (0);
}
