
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; int attr; struct TYPE_3__* next; } ;
typedef TYPE_1__ obj_attribute_list ;
typedef int obj_attribute ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *) ;
 int ** FUNC_1 (int *) ;
 TYPE_1__** FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_2, bfd_byte *VAR_3, bfd_vma VAR_4,
         int VAR_5)
{
  bfd_byte *VAR_6;
  obj_attribute *VAR_7;
  obj_attribute_list *VAR_8;
  int VAR_9;
  const char *VAR_10 = FUNC_5 (VAR_2, VAR_5);
  size_t VAR_11 = FUNC_4 (VAR_10) + 1;

  VAR_6 = VAR_3;
  FUNC_0 (VAR_2, VAR_4, VAR_6);
  VAR_6 += 4;
  FUNC_3 (VAR_6, VAR_10, VAR_11);
  VAR_6 += VAR_11;
  *(VAR_6++) = VAR_1;
  FUNC_0 (VAR_2, VAR_4 - 4 - VAR_11, VAR_6);
  VAR_6 += 4;

  VAR_7 = FUNC_1 (VAR_2)[VAR_5];
  for (VAR_9 = 4; VAR_9 < VAR_0; VAR_9++)
    VAR_6 = FUNC_6 (VAR_6, VAR_9, &VAR_7[VAR_9]);

  for (VAR_8 = FUNC_2 (VAR_2)[VAR_5];
       VAR_8;
       VAR_8 = VAR_8->next)
    VAR_6 = FUNC_6 (VAR_6, VAR_8->tag, &VAR_8->attr);
}
