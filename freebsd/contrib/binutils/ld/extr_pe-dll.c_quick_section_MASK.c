
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_9__ {scalar_t__ value; int flags; TYPE_2__* section; int name; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_10__ {int name; struct TYPE_10__* output_section; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static asection *
FUNC_4 (bfd *VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
  asection *VAR_10;
  asymbol *VAR_11;

  VAR_10 = FUNC_1 (VAR_6, VAR_7);
  FUNC_3 (VAR_6, VAR_10, VAR_8 | VAR_1 | VAR_3 | VAR_2);
  FUNC_2 (VAR_6, VAR_10, VAR_9);

  VAR_10->output_section = VAR_10;

  VAR_11 = FUNC_0 (VAR_6);
  VAR_5[VAR_4++] = VAR_11;
  VAR_11->name = VAR_10->name;
  VAR_11->section = VAR_10;
  VAR_11->flags = VAR_0;
  VAR_11->value = 0;

  return VAR_10;
}
