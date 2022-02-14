
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int flags; int (* set_multicast_list ) (struct device*) ;int (* name ) (struct device*) ;int (* open ) (struct device*) ;int (* probe ) (struct device*) ;struct device* next; } ;
struct TYPE_2__ {char* error; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int (*) (struct device*)) ;
 int VAR_2 ;
 struct device* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int ,char*,char const*) ;
 TYPE_1__ VAR_5 ;
 struct device* VAR_6 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char const*,int (*) (struct device*)) ;
 int FUNC_5 (int (*) (struct device*),char*,int) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static struct device *
FUNC_9 (const char *VAR_7, char *VAR_8, int VAR_9)
{
  struct device *VAR_10;

  for (VAR_10 = (struct device*)VAR_4; VAR_10; VAR_10 = VAR_10->next)
  {
    FUNC_1 (VAR_10->name);

    if (FUNC_4 (VAR_7,VAR_10->name))
       continue;

    if (!VAR_6)
    {
      FUNC_1 (VAR_10->probe);

      if (!(*VAR_10->probe)(VAR_10))
      {
        FUNC_2 (VAR_8, VAR_2, "failed to detect device `%s'", VAR_7);
        return (((void*)0));
      }
      VAR_6 = VAR_10;
    }
    else if (VAR_10 != VAR_6)
    {
      goto not_probed;
    }

    FUNC_0();



    if (VAR_9)
         VAR_10->flags |= (VAR_0 | VAR_1);
    else VAR_10->flags &= ~(VAR_0 | VAR_1);

    FUNC_1 (VAR_10->open);

    if (!(*VAR_10->open)(VAR_10))
    {
      FUNC_2 (VAR_8, VAR_2, "failed to activate device `%s'", VAR_7);
      if (VAR_5.error && !FUNC_5(VAR_10->name,"pkt",3))
      {
        FUNC_3 (VAR_8, ": ");
        FUNC_3 (VAR_8, VAR_5.error);
      }
      return (((void*)0));
    }



    if (VAR_9 && VAR_10->set_multicast_list)
       (*VAR_10->set_multicast_list) (VAR_10);

    VAR_3 = VAR_10;
    break;
  }



  if (!VAR_10)
  {
    FUNC_2 (VAR_8, VAR_2, "device `%s' not supported", VAR_7);
    return (((void*)0));
  }

not_probed:
  if (!VAR_6)
  {
    FUNC_2 (VAR_8, VAR_2, "device `%s' not probed", VAR_7);
    return (((void*)0));
  }
  return (VAR_10);
}
