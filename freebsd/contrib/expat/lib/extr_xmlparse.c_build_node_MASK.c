
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* XML_Parser ;
struct TYPE_10__ {unsigned int numchildren; int * name; struct TYPE_10__* children; int type; int quant; } ;
typedef TYPE_3__ XML_Content ;
typedef int XML_Char ;
struct TYPE_11__ {TYPE_1__* scaffold; } ;
struct TYPE_9__ {TYPE_4__* m_dtd; } ;
struct TYPE_8__ {unsigned int childcnt; int firstchild; int nextsib; int * name; int quant; int type; } ;
typedef TYPE_4__ DTD ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(XML_Parser VAR_1,
           int VAR_2,
           XML_Content *VAR_3,
           XML_Content **VAR_4,
           XML_Char **VAR_5)
{
  DTD * const VAR_6 = VAR_1->m_dtd;
  VAR_3->type = VAR_6->scaffold[VAR_2].type;
  VAR_3->quant = VAR_6->scaffold[VAR_2].quant;
  if (VAR_3->type == VAR_0) {
    const XML_Char *VAR_7;
    VAR_3->name = *VAR_5;
    VAR_7 = VAR_6->scaffold[VAR_2].name;
    for (;;) {
      *(*VAR_5)++ = *VAR_7;
      if (!*VAR_7)
        break;
      VAR_7++;
    }
    VAR_3->numchildren = 0;
    VAR_3->children = ((void*)0);
  }
  else {
    unsigned int VAR_8;
    int VAR_9;
    VAR_3->numchildren = VAR_6->scaffold[VAR_2].childcnt;
    VAR_3->children = *VAR_4;
    *VAR_4 += VAR_3->numchildren;
    for (VAR_8 = 0, VAR_9 = VAR_6->scaffold[VAR_2].firstchild;
         VAR_8 < VAR_3->numchildren;
         VAR_8++, VAR_9 = VAR_6->scaffold[VAR_9].nextsib) {
      FUNC_0(VAR_1, VAR_9, &(VAR_3->children[VAR_8]), VAR_4, VAR_5);
    }
    VAR_3->name = ((void*)0);
  }
}
