
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int source_location ;
struct TYPE_22__ {scalar_t__ type; int flags; int src_loc; } ;
typedef TYPE_2__ cpp_token ;
struct TYPE_23__ {TYPE_1__* buffer; int cur_token; } ;
typedef TYPE_3__ cpp_reader ;
struct TYPE_21__ {scalar_t__ cur; scalar_t__ rlimit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (TYPE_3__*,int ,char*,unsigned char*,int ) ;
 int FUNC_8 (TYPE_3__*,unsigned char*,int,int) ;
 unsigned char* FUNC_9 (TYPE_3__*,TYPE_2__ const*,unsigned char*,int) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_11 (TYPE_2__ const*) ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_12 (cpp_reader *VAR_6, const cpp_token **VAR_7, const cpp_token *VAR_8)
{
  unsigned char *VAR_9, *VAR_10, *VAR_11;
  cpp_token *VAR_12;
  unsigned int VAR_13;

  VAR_13 = FUNC_11 (*VAR_7) + FUNC_11 (VAR_8) + 1;
  VAR_9 = (unsigned char *) FUNC_6 (VAR_13);
  VAR_10 = VAR_11 = FUNC_9 (VAR_6, *VAR_7, VAR_9, 0);





  if ((*VAR_7)->type == VAR_1 && VAR_8->type != VAR_3)
    *VAR_10++ = ' ';
  VAR_10 = FUNC_9 (VAR_6, VAR_8, VAR_10, 0);
  *VAR_10 = '\n';

  FUNC_8 (VAR_6, VAR_9, VAR_10 - VAR_9, 1);
  FUNC_2 (VAR_6);


  VAR_6->cur_token = FUNC_5 (VAR_6);
  VAR_12 = FUNC_3 (VAR_6);
  if (VAR_6->buffer->cur != VAR_6->buffer->rlimit)
    {
      source_location VAR_14 = VAR_12->src_loc;

      FUNC_4 (VAR_6);
      FUNC_1 (VAR_6, 1);
      *VAR_11 = '\0';



      *VAR_12 = **VAR_7;
      *VAR_7 = VAR_12;
      VAR_12->src_loc = VAR_14;
      VAR_12->flags &= ~VAR_4;


      if (FUNC_0 (VAR_6, VAR_5) != VAR_0)
 FUNC_7 (VAR_6, VAR_2,
  "pasting \"%s\" and \"%s\" does not give a valid preprocessing token",
     VAR_9, FUNC_10 (VAR_6, VAR_8));
      return 0;
    }

  *VAR_7 = VAR_12;
  FUNC_4 (VAR_6);
  return 1;
}
