
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* url; TYPE_3__* author; TYPE_2__* date; TYPE_1__* revision; } ;
typedef TYPE_5__ svn_subst_keywords_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_11__ {int data; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

svn_boolean_t
FUNC_1(const svn_subst_keywords_t *VAR_2,
                          const svn_subst_keywords_t *VAR_3,
                          svn_boolean_t VAR_4)
{
  if (((VAR_2 == ((void*)0)) && (VAR_3 == ((void*)0)))

      || ((VAR_2 == ((void*)0))
          && (VAR_3->revision == ((void*)0))
          && (VAR_3->date == ((void*)0))
          && (VAR_3->author == ((void*)0))
          && (VAR_3->url == ((void*)0)))

      || ((VAR_3 == ((void*)0)) && (VAR_2->revision == ((void*)0))
          && (VAR_2->date == ((void*)0))
          && (VAR_2->author == ((void*)0))
          && (VAR_2->url == ((void*)0)))

      || ((VAR_2 != ((void*)0)) && (VAR_3 != ((void*)0))
          && (VAR_3->revision == ((void*)0))
          && (VAR_3->date == ((void*)0))
          && (VAR_3->author == ((void*)0))
          && (VAR_3->url == ((void*)0))
          && (VAR_2->revision == ((void*)0))
          && (VAR_2->date == ((void*)0))
          && (VAR_2->author == ((void*)0))
          && (VAR_2->url == ((void*)0))))
    {
      return VAR_0;
    }
  else if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
    return VAR_1;



  if ((! VAR_2->revision) != (! VAR_3->revision))
    return VAR_1;
  else if ((VAR_4 && (VAR_2->revision != ((void*)0)))
           && (FUNC_0(VAR_2->revision->data, VAR_3->revision->data) != 0))
    return VAR_1;

  if ((! VAR_2->date) != (! VAR_3->date))
    return VAR_1;
  else if ((VAR_4 && (VAR_2->date != ((void*)0)))
           && (FUNC_0(VAR_2->date->data, VAR_3->date->data) != 0))
    return VAR_1;

  if ((! VAR_2->author) != (! VAR_3->author))
    return VAR_1;
  else if ((VAR_4 && (VAR_2->author != ((void*)0)))
           && (FUNC_0(VAR_2->author->data, VAR_3->author->data) != 0))
    return VAR_1;

  if ((! VAR_2->url) != (! VAR_3->url))
    return VAR_1;
  else if ((VAR_4 && (VAR_2->url != ((void*)0)))
           && (FUNC_0(VAR_2->url->data, VAR_3->url->data) != 0))
    return VAR_1;



  return VAR_0;
}
