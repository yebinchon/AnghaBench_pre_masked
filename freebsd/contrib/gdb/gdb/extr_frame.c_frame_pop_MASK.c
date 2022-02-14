
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct frame_info {int dummy; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 struct cleanup* FUNC_3 (struct regcache*) ;
 int FUNC_4 (int ,struct regcache*) ;
 int FUNC_5 (struct regcache*,int ,struct frame_info*) ;
 struct regcache* FUNC_6 (int ) ;

void
FUNC_7 (struct frame_info *VAR_4)
{
  struct regcache *VAR_5;
  struct cleanup *VAR_6;

  if (FUNC_0 ())
    {



      VAR_0;
    }
  else
    {





      struct regcache *VAR_7 = FUNC_6 (VAR_1);
      struct cleanup *VAR_8 = FUNC_3 (VAR_7);
      FUNC_5 (VAR_7, VAR_3, VAR_4);
      FUNC_4 (VAR_2, VAR_7);
      FUNC_1 (VAR_8);
    }


  FUNC_2 ();
}
