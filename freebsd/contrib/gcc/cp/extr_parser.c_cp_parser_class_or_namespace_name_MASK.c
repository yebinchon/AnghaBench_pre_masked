
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_8__ {int lexer; void* object_scope; void* qualifying_scope; void* scope; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_9__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_7__* FUNC_2 (int ,int) ;
 void* FUNC_3 (TYPE_1__*,int,int,int ,int,int,int) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_7 (cp_parser *VAR_5,
       bool VAR_6,
       bool VAR_7,
       bool VAR_8,
       bool VAR_9,
       bool VAR_10)
{
  tree VAR_11;
  tree VAR_12;
  tree VAR_13;
  tree VAR_14;
  bool VAR_15;




  VAR_11 = VAR_5->scope;
  VAR_12 = VAR_5->qualifying_scope;
  VAR_13 = VAR_5->object_scope;


  VAR_15 = VAR_7 || (VAR_11 && FUNC_0 (VAR_11));
  if (!VAR_15)
    FUNC_6 (VAR_5);
  VAR_14 = FUNC_3 (VAR_5,
    VAR_6,
    VAR_7,
    VAR_9 ? VAR_2 : VAR_4,
    VAR_8,
                     0,
    VAR_10);

  if (!VAR_15 && !FUNC_5 (VAR_5))
    {

      VAR_5->scope = VAR_11;
      VAR_5->qualifying_scope = VAR_12;
      VAR_5->object_scope = VAR_13;




      if (FUNC_1 (VAR_5->lexer, VAR_0)
   || FUNC_2 (VAR_5->lexer, 2)->type != VAR_1)
 return VAR_3;
      VAR_14 = FUNC_4 (VAR_5);
    }

  return VAR_14;
}
