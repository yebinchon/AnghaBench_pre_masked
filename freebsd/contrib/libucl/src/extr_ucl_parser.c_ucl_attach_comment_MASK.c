
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucl_object_t ;
struct ucl_parser {TYPE_1__* last_comment; int comments; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,char const*,int,int) ;

__attribute__((used)) static void
FUNC_1 (struct ucl_parser *VAR_1, ucl_object_t *VAR_2, bool VAR_3)
{
 if (VAR_1->last_comment) {
  FUNC_0 (VAR_1->comments, VAR_1->last_comment,
    (const char *)&VAR_2, sizeof (void *), 1);

  if (VAR_3) {
   VAR_1->last_comment->flags |= VAR_0;
  }

  VAR_1->last_comment = ((void*)0);
 }
}
