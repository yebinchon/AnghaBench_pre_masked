
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ st_ino; scalar_t__ st_dev; int st_size; } ;
typedef struct stats {struct stats const* parent; TYPE_1__ stat; } const stats ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ,char*,char const*,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct stats const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_6 (char const*,int ,int ,int ) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char const*) ;
 int VAR_5 ;
 int FUNC_9 (char const*,scalar_t__) ;
 int FUNC_10 () ;
 char* FUNC_11 (char*,size_t) ;

__attribute__((used)) static int
FUNC_12 (char const *VAR_6, struct stats const *VAR_7)
{
  int VAR_8 = 1;
  struct stats const *VAR_9;
  char *VAR_10;



  if (VAR_7->stat.st_ino)
    for (VAR_9 = VAR_7; (VAR_9 = VAR_9->parent) != 0; )
      if (VAR_9->stat.st_ino == VAR_7->stat.st_ino
   && VAR_9->stat.st_dev == VAR_7->stat.st_dev)
 {
   if (!VAR_5)
     FUNC_3 (0, 0, FUNC_2("warning: %s: %s"), VAR_6,
     FUNC_2("recursive directory loop"));
   return 1;
 }

  VAR_10 = FUNC_6 (VAR_6, VAR_7->stat.st_size, VAR_2,
   VAR_1);

  if (! VAR_10)
    {
      if (VAR_0)
 FUNC_9 (VAR_6, VAR_0);
      else
 FUNC_10 ();
    }
  else
    {
      size_t VAR_11 = FUNC_8 (VAR_6);
      int VAR_12 = ! (VAR_11 == FUNC_0 (VAR_6)
      || FUNC_1 (VAR_6[VAR_11 - 1]));
      char *VAR_13 = ((void*)0);
      char const *VAR_14 = VAR_10;
      struct stats VAR_15;
      VAR_15.parent = VAR_7;
      VAR_4 += !VAR_3;
      while (*VAR_14)
 {
   size_t VAR_16 = FUNC_8 (VAR_14);
   VAR_13 = FUNC_11 (VAR_13, VAR_11 + 1 + VAR_16 + 1);
   FUNC_7 (VAR_13, VAR_6);
   VAR_13[VAR_11] = '/';
   FUNC_7 (VAR_13 + VAR_11 + VAR_12, VAR_14);
   VAR_14 += VAR_16 + 1;
   VAR_8 &= FUNC_5 (VAR_13, &VAR_15);
 }
      VAR_4 -= !VAR_3;
      if (VAR_13)
        FUNC_4 (VAR_13);
      FUNC_4 (VAR_10);
    }

  return VAR_8;
}
