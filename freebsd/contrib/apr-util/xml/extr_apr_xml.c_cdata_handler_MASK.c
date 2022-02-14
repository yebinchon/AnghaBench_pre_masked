
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int p; TYPE_3__* cur_elem; scalar_t__ error; } ;
typedef TYPE_2__ apr_xml_parser ;
struct TYPE_6__ {TYPE_1__* last_child; int first_cdata; } ;
typedef TYPE_3__ apr_xml_elem ;
typedef int apr_text_header ;
struct TYPE_4__ {int following_cdata; } ;


 char* FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,int *,char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2)
{
    apr_xml_parser *VAR_3 = VAR_0;
    apr_xml_elem *VAR_4;
    apr_text_header *VAR_5;
    const char *VAR_6;


    if (VAR_3->error)
 return;

    VAR_4 = VAR_3->cur_elem;
    VAR_6 = FUNC_0(VAR_3->p, VAR_1, VAR_2);

    if (VAR_4->last_child == ((void*)0)) {

 VAR_5 = &VAR_4->first_cdata;
    }
    else {

 VAR_5 = &VAR_4->last_child->following_cdata;
    }

    FUNC_1(VAR_3->p, VAR_5, VAR_6);
}
