
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct dwarf2_cu {scalar_t__ language; struct objfile* objfile; } ;
struct die_info {struct type* type; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct attribute*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct type* FUNC_1 (int *,struct type*,int,unsigned int) ;
 struct type* FUNC_2 (struct type*,struct type*) ;
 struct attribute* FUNC_3 (struct die_info*,int ,struct dwarf2_cu*) ;
 struct type* FUNC_4 (struct objfile*,int ,struct dwarf2_cu*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_5 (struct die_info *VAR_5, struct dwarf2_cu *VAR_6)
{
  struct objfile *VAR_7 = VAR_6->objfile;
  struct type *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  struct attribute *VAR_12;
  unsigned int VAR_13;

  if (VAR_5->type)
    {
      return;
    }

  VAR_12 = FUNC_3 (VAR_5, VAR_1, VAR_6);
  if (VAR_12)
    {
      VAR_13 = FUNC_0 (VAR_12);
    }
  else
    {

      VAR_12 = FUNC_3 (VAR_5, VAR_0, VAR_6);
      if (VAR_12)
        {
          VAR_13 = FUNC_0 (VAR_12);
        }
      else
        {
          VAR_13 = 1;
        }
    }
  VAR_10 = FUNC_4 (VAR_7, VAR_3, VAR_6);
  VAR_9 = FUNC_1 (((void*)0), VAR_10, 1, VAR_13);
  if (VAR_6->language == VAR_4)
    {


      VAR_8 = FUNC_2 (0, VAR_9);
    }
  else
    {
      VAR_11 = FUNC_4 (VAR_7, VAR_2, VAR_6);
      VAR_8 = FUNC_2 (VAR_11, VAR_9);
    }
  VAR_5->type = VAR_8;
}
