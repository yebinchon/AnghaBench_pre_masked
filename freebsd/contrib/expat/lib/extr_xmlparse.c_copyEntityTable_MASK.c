
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XML_Parser ;
typedef int const XML_Char ;
struct TYPE_2__ {int is_internal; int is_param; int const* notation; int textLen; int const* textPtr; int const* publicId; int const* base; int const* systemId; int const* name; } ;
typedef int STRING_POOL ;
typedef int HASH_TABLE_ITER ;
typedef int HASH_TABLE ;
typedef TYPE_1__ ENTITY ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int const*,int) ;
 int const* FUNC_3 (int *,int const*) ;
 int const* FUNC_4 (int *,int const*,int ) ;

__attribute__((used)) static int
FUNC_5(XML_Parser VAR_0,
                HASH_TABLE *VAR_1,
                STRING_POOL *VAR_2,
                const HASH_TABLE *VAR_3)
{
  HASH_TABLE_ITER VAR_4;
  const XML_Char *VAR_5 = ((void*)0);
  const XML_Char *VAR_6 = ((void*)0);

  FUNC_0(&VAR_4, VAR_3);

  for (;;) {
    ENTITY *VAR_7;
    const XML_Char *VAR_8;
    const ENTITY *VAR_9 = (ENTITY *)FUNC_1(&VAR_4);
    if (!VAR_9)
      break;
    VAR_8 = FUNC_3(VAR_2, VAR_9->name);
    if (!VAR_8)
      return 0;
    VAR_7 = (ENTITY *)FUNC_2(VAR_0, VAR_1, VAR_8, sizeof(ENTITY));
    if (!VAR_7)
      return 0;
    if (VAR_9->systemId) {
      const XML_Char *VAR_10 = FUNC_3(VAR_2, VAR_9->systemId);
      if (!VAR_10)
        return 0;
      VAR_7->systemId = VAR_10;
      if (VAR_9->base) {
        if (VAR_9->base == VAR_5)
          VAR_7->base = VAR_6;
        else {
          VAR_5 = VAR_9->base;
          VAR_10 = FUNC_3(VAR_2, VAR_5);
          if (!VAR_10)
            return 0;
          VAR_6 = VAR_7->base = VAR_10;
        }
      }
      if (VAR_9->publicId) {
        VAR_10 = FUNC_3(VAR_2, VAR_9->publicId);
        if (!VAR_10)
          return 0;
        VAR_7->publicId = VAR_10;
      }
    }
    else {
      const XML_Char *VAR_11 = FUNC_4(VAR_2, VAR_9->textPtr,
                                            VAR_9->textLen);
      if (!VAR_11)
        return 0;
      VAR_7->textPtr = VAR_11;
      VAR_7->textLen = VAR_9->textLen;
    }
    if (VAR_9->notation) {
      const XML_Char *VAR_12 = FUNC_3(VAR_2, VAR_9->notation);
      if (!VAR_12)
        return 0;
      VAR_7->notation = VAR_12;
    }
    VAR_7->is_param = VAR_9->is_param;
    VAR_7->is_internal = VAR_9->is_internal;
  }
  return 1;
}
