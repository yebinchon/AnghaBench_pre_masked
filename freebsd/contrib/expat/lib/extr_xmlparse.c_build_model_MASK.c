
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef int XML_Content ;
typedef int XML_Char ;
struct TYPE_7__ {int scaffCount; int contentStringLen; } ;
struct TYPE_6__ {TYPE_2__* m_dtd; } ;
typedef TYPE_2__ DTD ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int **,int **) ;

__attribute__((used)) static XML_Content *
FUNC_2 (XML_Parser VAR_0)
{
  DTD * const VAR_1 = VAR_0->m_dtd;
  XML_Content *VAR_2;
  XML_Content *VAR_3;
  XML_Char * VAR_4;
  int VAR_5 = (VAR_1->scaffCount * sizeof(XML_Content)
                   + (VAR_1->contentStringLen * sizeof(XML_Char)));

  VAR_2 = (XML_Content *)FUNC_0(VAR_0, VAR_5);
  if (!VAR_2)
    return ((void*)0);

  VAR_4 = (XML_Char *) (&VAR_2[VAR_1->scaffCount]);
  VAR_3 = &VAR_2[1];

  FUNC_1(VAR_0, 0, VAR_2, &VAR_3, &VAR_4);
  return VAR_2;
}
