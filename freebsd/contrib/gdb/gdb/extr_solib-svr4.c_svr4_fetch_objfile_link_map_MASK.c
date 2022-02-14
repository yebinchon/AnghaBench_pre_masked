
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {char* name; int flags; } ;
struct lm_info {char* lm; } ;
struct link_map_offsets {int l_next_offset; int l_next_size; int l_name_size; scalar_t__ l_name_offset; int link_map_size; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct link_map_offsets* FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct cleanup*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 struct cleanup* FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (scalar_t__,char*,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (scalar_t__,char**,scalar_t__,int*) ;
 int FUNC_11 (char*,int ) ;
 int VAR_3 ;
 void* FUNC_12 (int ) ;

CORE_ADDR
FUNC_13 (struct objfile *VAR_4)
{
  CORE_ADDR VAR_5;

  if ((VAR_2 = FUNC_4 ()) == 0)
    return 0;


  VAR_5 = FUNC_3 ();
  while (VAR_5)
    {

      struct link_map_offsets *VAR_6 = FUNC_0 ();
      int VAR_7;
      char *VAR_8;
      struct lm_info VAR_9;
      struct cleanup *VAR_10;
      CORE_ADDR VAR_11;
      char *VAR_12 = FUNC_12 (VAR_6->l_name_size);
      VAR_10 = FUNC_5 (VAR_3, VAR_12);




      VAR_9.lm = FUNC_12 (VAR_6->link_map_size);
      FUNC_5 (VAR_3, VAR_9.lm);
      FUNC_6 (VAR_9.lm, 0, VAR_6->link_map_size);


      FUNC_7 (VAR_5, VAR_9.lm, VAR_6->link_map_size);


      FUNC_7 (VAR_5 + VAR_6->l_name_offset, VAR_12, VAR_6->l_name_size);



      VAR_11 = FUNC_2 (VAR_12, VAR_6->l_name_size);
      FUNC_10 (VAR_11, &VAR_8,
           VAR_1 - 1, &VAR_7);
      FUNC_5 (VAR_3, VAR_8);
      if (VAR_7 != 0)
     {
   FUNC_11 ("svr4_fetch_objfile_link_map: Can't read pathname for load map: %s\n",
       FUNC_8 (VAR_7));
   }
      else
   {



   if ((VAR_8 && FUNC_9 (VAR_8, VAR_4->name) == 0)
              || (!(VAR_4->flags & VAR_0) && (FUNC_9 (VAR_8, "") == 0)))
       {
           FUNC_1 (VAR_10);
           return VAR_5;
           }
   }


      VAR_5 = FUNC_2 (VAR_9.lm + VAR_6->l_next_offset,
         VAR_6->l_next_size);
      FUNC_1 (VAR_10);
    }
  return 0;
}
