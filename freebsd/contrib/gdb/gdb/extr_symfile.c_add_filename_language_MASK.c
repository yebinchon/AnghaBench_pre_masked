
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum language { ____Placeholder_language } language ;
struct TYPE_4__ {int lang; int ext; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_3, enum language VAR_4)
{
  if (VAR_1 >= VAR_2)
    {
      VAR_2 += 10;
      VAR_0 =
 FUNC_0 (VAR_0,
    VAR_2 * sizeof (*VAR_0));
    }

  VAR_0[VAR_1].ext = FUNC_1 (VAR_3);
  VAR_0[VAR_1].lang = VAR_4;
  VAR_1++;
}
