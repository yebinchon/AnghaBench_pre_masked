
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * obj_private; int section_offsets; scalar_t__ export_list_size; int * export_list; int name; int * obfd; } ;
struct cleanup {int dummy; } ;
typedef int bfd ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct objfile*,int) ;
 int FUNC_3 (struct objfile*) ;
 int FUNC_4 (struct objfile*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct objfile*) ;
 struct cleanup* FUNC_7 () ;
 int FUNC_8 (int *,struct objfile*,int ) ;
 int FUNC_9 (struct objfile*,int,char*,char*,char*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (struct objfile *VAR_0, int VAR_1)
{
  bfd *VAR_2 = VAR_0->obfd;
  struct cleanup *VAR_3;

  FUNC_1 (FUNC_10 (VAR_0->name));

  FUNC_5 ();
  VAR_3 = FUNC_7 ();





  FUNC_4 (VAR_0);



  VAR_0->export_list = ((void*)0);
  VAR_0->export_list_size = 0;







  FUNC_8 (VAR_2, VAR_0, VAR_0->section_offsets);






  FUNC_6 (VAR_0);
  FUNC_0 (VAR_3);





  FUNC_9 (VAR_0, VAR_1,
      "$GDB_SYMBOLS$", "$GDB_STRINGS$", "$TEXT$");





  FUNC_2 (VAR_0, VAR_1);


  VAR_0->obj_private = ((void*)0);
}
