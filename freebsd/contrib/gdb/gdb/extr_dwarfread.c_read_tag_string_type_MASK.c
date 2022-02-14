
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct dieinfo {int at_byte_size; int die_ref; scalar_t__ has_at_byte_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_3 ;
 struct type* FUNC_1 (int ,struct type*) ;
 struct type* FUNC_2 (struct type*,struct type*,unsigned long,unsigned long) ;
 struct type* FUNC_3 (struct type*,struct type*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 struct type* FUNC_5 (int ,int ) ;
 struct type* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (struct dieinfo *VAR_5)
{
  struct type *VAR_6;
  struct type *VAR_7;
  struct type *VAR_8;
  unsigned long VAR_9 = 0;
  unsigned long VAR_10;

  if (VAR_5->has_at_byte_size)
    {

      VAR_10 = VAR_5->at_byte_size - 1;
    }
  else
    {

      VAR_10 = 1;
    }
  VAR_7 = FUNC_5 (VAR_4, VAR_2);
  VAR_8 = FUNC_2 ((struct type *) ((void*)0), VAR_7, VAR_9,
     VAR_10);

  VAR_6 = FUNC_6 (VAR_5->die_ref);
  if (VAR_6 == ((void*)0))
    {

      VAR_6 = FUNC_1 (VAR_5->die_ref, (struct type *) ((void*)0));
    }
  else
    {


      if (FUNC_0 (VAR_6) != VAR_3)
 {
   FUNC_4 (VAR_0, VAR_1);
   return;
 }
    }


  VAR_6 = FUNC_3 (VAR_6, VAR_8);
}
