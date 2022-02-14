
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* XML_Parser ;
struct TYPE_8__ {int prevPrefixBinding; TYPE_1__* prefix; struct TYPE_8__* nextTagBinding; } ;
struct TYPE_7__ {TYPE_3__* m_freeBindingList; int m_handlerArg; int (* m_endNamespaceDeclHandler ) (int ,int ) ;} ;
struct TYPE_6__ {int binding; int name; } ;
typedef TYPE_3__ BINDING ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(XML_Parser VAR_0, BINDING *VAR_1)
{
  while (VAR_1) {
    BINDING *VAR_2 = VAR_1;




    if (VAR_0->m_endNamespaceDeclHandler)
        VAR_0->m_endNamespaceDeclHandler(VAR_0->m_handlerArg, VAR_2->prefix->name);

    VAR_1 = VAR_1->nextTagBinding;
    VAR_2->nextTagBinding = VAR_0->m_freeBindingList;
    VAR_0->m_freeBindingList = VAR_2;
    VAR_2->prefix->binding = VAR_2->prevPrefixBinding;
  }
}
