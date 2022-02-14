
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap {char* name; char* member; scalar_t__ loaded; struct vmap* nxt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 struct vmap* VAR_2 ;
 scalar_t__ FUNC_8 (struct vmap*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_3, int VAR_4)
{
  FUNC_1 ();


  if (! FUNC_4 (VAR_0, VAR_1))
    FUNC_9 (FUNC_0 (VAR_0));

  if (VAR_3)
    {
      char *VAR_5 = FUNC_5 (VAR_3);

      if (VAR_5)
 FUNC_2 ("Invalid regexp: %s", VAR_5);
    }




  {
    int VAR_6 = 0;
    int VAR_7 = 0;
    struct vmap *VAR_8 = VAR_2;

    if (!VAR_8)
      return;


    for (VAR_8 = VAR_8->nxt; VAR_8; VAR_8 = VAR_8->nxt)
      if (! VAR_3
     || FUNC_6 (VAR_8->name)
     || (*VAR_8->member && FUNC_6 (VAR_8->member)))
 {
   VAR_6 = 1;

   if (VAR_8->loaded)
     {
       if (VAR_4)
  FUNC_3 ("Symbols already loaded for %s\n",
       VAR_8->name);
     }
   else
     {
       if (FUNC_8 (VAR_8))
  VAR_7 = 1;
     }
 }

    if (VAR_4 && VAR_3 && ! VAR_6)
      FUNC_3
 ("No loaded shared libraries match the pattern `%s'.\n", VAR_3);

    if (VAR_7)
      {


 FUNC_7 ();
      }
  }
}
