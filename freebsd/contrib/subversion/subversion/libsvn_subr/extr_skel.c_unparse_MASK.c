
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_11__ {char* data; scalar_t__ len; struct TYPE_11__* next; struct TYPE_11__* children; scalar_t__ is_atom; } ;
typedef TYPE_2__ svn_skel_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;

__attribute__((used)) static svn_stringbuf_t *
FUNC_6(const svn_skel_t *VAR_1, svn_stringbuf_t *VAR_2)
{
  if (VAR_1->is_atom)
    {

      if (FUNC_5(VAR_1))
        FUNC_3(VAR_2, VAR_1->data, VAR_1->len);
      else
        {


          char VAR_3[200 + VAR_0];
          apr_size_t VAR_4;

          VAR_4 = FUNC_1(VAR_3, VAR_1->len);

          FUNC_0(VAR_4 > 0);



          FUNC_4(VAR_2, VAR_2->len + VAR_4 + 1 + VAR_1->len);
          FUNC_3(VAR_2, VAR_3, VAR_4);
          FUNC_2(VAR_2, ' ');
          FUNC_3(VAR_2, VAR_1->data, VAR_1->len);
        }
    }
  else
    {


      svn_skel_t *VAR_5;

      FUNC_2(VAR_2, '(');

      for (VAR_5 = VAR_1->children; VAR_5; VAR_5 = VAR_5->next)
        {
          FUNC_6(VAR_5, VAR_2);
          if (VAR_5->next)
            FUNC_2(VAR_2, ' ');
        }

      FUNC_2(VAR_2, ')');
    }

  return VAR_2;
}
