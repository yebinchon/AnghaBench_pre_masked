
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_data {char size; char format; scalar_t__ count; } ;
struct expression {int dummy; } ;
struct display {int enabled_p; struct format_data format; scalar_t__ number; struct display* next; scalar_t__ block; struct expression* exp; } ;


 scalar_t__ VAR_0 ;
 struct format_data FUNC_0 (char**,int ,int ) ;
 struct display* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct display*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 struct expression* FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_6, int VAR_7)
{
  struct format_data VAR_8;
  struct expression *VAR_9;
  struct display *VAR_10;
  int VAR_11 = 1;
  if (VAR_11)
    {
      if (VAR_6 == 0)
 {
   FUNC_1 ();
   return;
 }

      if (*VAR_6 == '/')
 {
   VAR_6++;
   VAR_8 = FUNC_0 (&VAR_6, 0, 0);
   if (VAR_8.size && VAR_8.format == 0)
     VAR_8.format = 'x';
   if (VAR_8.format == 'i' || VAR_8.format == 's')
     VAR_8.size = 'b';
 }
      else
 {
   VAR_8.format = 0;
   VAR_8.size = 0;
   VAR_8.count = 0;
 }

      VAR_3 = 0;
      VAR_9 = FUNC_4 (VAR_6);

      VAR_10 = (struct display *) FUNC_6 (sizeof (struct display));

      VAR_10->exp = VAR_9;
      VAR_10->block = VAR_3;
      VAR_10->next = VAR_1;
      VAR_10->number = ++VAR_2;
      VAR_10->format = VAR_8;
      VAR_10->enabled_p = 1;
      VAR_1 = VAR_10;

      if (VAR_7 && VAR_4)
 FUNC_2 (VAR_10);

      FUNC_3 ();
    }
}
