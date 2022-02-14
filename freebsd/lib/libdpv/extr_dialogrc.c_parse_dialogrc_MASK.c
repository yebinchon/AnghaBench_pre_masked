
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; int boolean; } ;
struct TYPE_4__ {TYPE_1__ value; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (char*) ;
 int VAR_8 ;
 char* VAR_9 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (char*,int,char*,char*) ;
 size_t FUNC_4 (char*) ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_5(void)
{
 char *VAR_12;
 int VAR_13;
 size_t VAR_14;
 char VAR_15[VAR_5];


 if ((VAR_12 = FUNC_1(VAR_2)) != ((void*)0) && *VAR_12 != '\0')
  FUNC_3(VAR_15, VAR_5, "%s", VAR_12);
 else if ((VAR_12 = FUNC_1(VAR_3)) != ((void*)0)) {

  FUNC_3(VAR_15, VAR_5, "%s", VAR_12);
  VAR_14 = FUNC_4(VAR_15);
  VAR_12 = VAR_15 + VAR_14;
  if (VAR_14 > 0 && VAR_14 < (VAR_5 - 1) && *(VAR_12 - 1) != '/') {
   *VAR_12++ = '/';
   *VAR_12 = '\0';
   VAR_14++;
  }


  if (VAR_14 < (VAR_5 - 1))
   FUNC_3(VAR_12, VAR_5 - VAR_14, "%s", VAR_0);
 } else {

  VAR_8 = VAR_1;
  return (-1);
 }


 VAR_13 = FUNC_2(VAR_7,
  VAR_15, ((void*)0), VAR_4);


 VAR_11 = FUNC_0("use_shadow")->value.boolean;
 VAR_10 = FUNC_0("use_colors")->value.boolean;
 FUNC_3(VAR_9, VAR_6, "%s",
     FUNC_0("gauge_color")->value.str);

 return (VAR_13);
}
