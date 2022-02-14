
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct live_images {int examined_p; int * destructor; int * fde; int * object_info; } ;
struct km_object_info {int unseen_objects; int seen_objects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct km_object_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct km_object_info*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (struct live_images *VAR_4)
{
  if (VAR_4->object_info)
    {
      struct km_object_info *VAR_5;

      VAR_5 =
 FUNC_1 (VAR_1);
      if (VAR_5)
 {
   VAR_2 = VAR_5->seen_objects;
   VAR_3 = VAR_5->unseen_objects;


   FUNC_0 (VAR_4->fde);

   VAR_5->seen_objects = VAR_2;
   VAR_5->unseen_objects = VAR_3;
 }
      FUNC_2 (VAR_1,
           VAR_5);

      FUNC_3 (VAR_4->object_info);
      VAR_4->object_info = ((void*)0);
      if (VAR_4->examined_p & VAR_0)
 FUNC_3 (VAR_4->fde);
      VAR_4->fde = ((void*)0);
    }
  VAR_4->examined_p = 0;
  VAR_4->destructor = ((void*)0);
}
