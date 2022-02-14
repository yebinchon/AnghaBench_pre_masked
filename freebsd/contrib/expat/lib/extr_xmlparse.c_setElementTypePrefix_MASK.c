
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef scalar_t__ XML_Char ;
struct TYPE_11__ {int pool; int prefixes; } ;
struct TYPE_10__ {scalar_t__* name; TYPE_2__* prefix; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_8__ {TYPE_4__* m_dtd; } ;
typedef TYPE_2__ PREFIX ;
typedef TYPE_3__ ELEMENT_TYPE ;
typedef TYPE_4__ DTD ;


 char VAR_0 ;
 scalar_t__ const FUNC_0 (char) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__ const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(XML_Parser VAR_1, ELEMENT_TYPE *VAR_2)
{
  DTD * const VAR_3 = VAR_1->m_dtd;
  const XML_Char *VAR_4;
  for (VAR_4 = VAR_2->name; *VAR_4; VAR_4++) {
    if (*VAR_4 == FUNC_0(VAR_0)) {
      PREFIX *VAR_5;
      const XML_Char *VAR_6;
      for (VAR_6 = VAR_2->name; VAR_6 != VAR_4; VAR_6++) {
        if (!FUNC_2(&VAR_3->pool, *VAR_6))
          return 0;
      }
      if (!FUNC_2(&VAR_3->pool, FUNC_0('\0')))
        return 0;
      VAR_5 = (PREFIX *)FUNC_1(VAR_1, &VAR_3->prefixes, FUNC_5(&VAR_3->pool),
                                sizeof(PREFIX));
      if (!VAR_5)
        return 0;
      if (VAR_5->name == FUNC_5(&VAR_3->pool))
        FUNC_4(&VAR_3->pool);
      else
        FUNC_3(&VAR_3->pool);
      VAR_2->prefix = VAR_5;

    }
  }
  return 1;
}
