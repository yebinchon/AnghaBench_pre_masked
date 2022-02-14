
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lang_statement_union_type ;
struct TYPE_8__ {TYPE_2__* the_bfd; int next; } ;
typedef TYPE_1__ lang_input_statement_type ;
struct TYPE_10__ {TYPE_2__** input_bfds_tail; } ;
struct TYPE_9__ {TYPE_1__* usrdata; struct TYPE_9__* link_next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int *) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

void
FUNC_4 (lang_input_statement_type *VAR_5)
{
  FUNC_3 (&VAR_0,
    (lang_statement_union_type *) VAR_5,
    &VAR_5->next);



  FUNC_0 (VAR_5->the_bfd->link_next == ((void*)0));
  FUNC_0 (VAR_5->the_bfd != VAR_3);

  *VAR_2.input_bfds_tail = VAR_5->the_bfd;
  VAR_2.input_bfds_tail = &VAR_5->the_bfd->link_next;
  VAR_5->the_bfd->usrdata = VAR_5;
  FUNC_2 (VAR_5->the_bfd, VAR_1);
  FUNC_1 (VAR_5->the_bfd, VAR_4, VAR_5);
}
