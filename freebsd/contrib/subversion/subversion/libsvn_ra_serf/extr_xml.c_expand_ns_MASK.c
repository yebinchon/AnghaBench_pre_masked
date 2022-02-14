
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* url; int * xmlns; struct TYPE_5__* next; } ;
typedef TYPE_1__ svn_ra_serf__ns_t ;
struct TYPE_6__ {char* xmlns; char const* name; } ;
typedef TYPE_2__ svn_ra_serf__dav_props_t ;


 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_2(svn_ra_serf__dav_props_t *VAR_0,
                       const svn_ra_serf__ns_t *VAR_1,
                       const char *VAR_2)
{
  const char *VAR_3;

  VAR_3 = FUNC_0(VAR_2, ':');
  if (VAR_3)
    {
      const svn_ra_serf__ns_t *VAR_4;

      for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
        {
          if (FUNC_1(VAR_4->xmlns, VAR_2, VAR_3 - VAR_2) == 0)
            {
              VAR_0->xmlns = VAR_4->url;
              VAR_0->name = VAR_3 + 1;
              return;
            }
        }
    }
  else
    {
      const svn_ra_serf__ns_t *VAR_5;

      for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
        {
          if (! VAR_5->xmlns[0])
            {
              VAR_0->xmlns = VAR_5->url;
              VAR_0->name = VAR_2;
              return;
            }
        }
    }



  VAR_0->xmlns = "";
  VAR_0->name = VAR_2;
}
