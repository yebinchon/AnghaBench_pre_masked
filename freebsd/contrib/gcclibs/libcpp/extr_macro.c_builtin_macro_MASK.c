
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_20__ {scalar_t__ in_directive; } ;
struct TYPE_22__ {TYPE_3__* buffer; int cur_token; TYPE_2__ state; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_19__ {scalar_t__ builtin; } ;
struct TYPE_23__ {TYPE_1__ value; } ;
typedef TYPE_5__ cpp_hashnode ;
struct TYPE_21__ {scalar_t__ cur; scalar_t__ rlimit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_10 (TYPE_4__*,int *,size_t,int) ;
 int FUNC_11 (char*,int const*,size_t) ;
 size_t FUNC_12 (int const*) ;

__attribute__((used)) static int
FUNC_13 (cpp_reader *VAR_2, cpp_hashnode *VAR_3)
{
  const uchar *VAR_4;
  size_t VAR_5;
  char *VAR_6;

  if (VAR_3->value.builtin == VAR_0)
    {


      if (VAR_2->state.in_directive)
 return 0;

      FUNC_3 (VAR_2);
      return 1;
    }

  VAR_4 = FUNC_1 (VAR_2, VAR_3);
  VAR_5 = FUNC_12 (VAR_4);
  VAR_6 = (char *) FUNC_8 (VAR_5 + 1);
  FUNC_11 (VAR_6, VAR_4, VAR_5);
  VAR_6[VAR_5]='\n';

  FUNC_10 (VAR_2, (uchar *) VAR_6, VAR_5, 1);
  FUNC_2 (VAR_2);


  VAR_2->cur_token = FUNC_7 (VAR_2);
  FUNC_6 (VAR_2, ((void*)0), FUNC_4 (VAR_2), 1);
  if (VAR_2->buffer->cur != VAR_2->buffer->rlimit)
    FUNC_9 (VAR_2, VAR_1, "invalid built-in macro \"%s\"",
        FUNC_0 (VAR_3));
  FUNC_5 (VAR_2);

  return 1;
}
