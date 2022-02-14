
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef scalar_t__ XML_Char ;
typedef int XML_Bool ;
struct TYPE_10__ {scalar_t__ name; } ;
struct TYPE_12__ {int pool; int prefixes; TYPE_2__ defaultPrefix; int generalEntities; } ;
struct TYPE_11__ {int open; } ;
struct TYPE_9__ {int m_tempPool; int m_inheritedBindings; TYPE_4__* m_dtd; } ;
typedef TYPE_2__ PREFIX ;
typedef TYPE_3__ ENTITY ;
typedef TYPE_4__ DTD ;


 char VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ const FUNC_0 (char) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,scalar_t__,int) ;
 int FUNC_3 (int *,scalar_t__ const) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static XML_Bool
FUNC_8(XML_Parser VAR_5, const XML_Char *VAR_6)
{
  DTD * const VAR_7 = VAR_5->m_dtd;
  const XML_Char *VAR_8 = VAR_6;

  while (*VAR_6 != FUNC_0('\0')) {
    if (*VAR_8 == VAR_1 || *VAR_8 == FUNC_0('\0')) {
      ENTITY *VAR_9;
      if (!FUNC_3(&VAR_5->m_tempPool, FUNC_0('\0')))
        return VAR_3;
      VAR_9 = (ENTITY *)FUNC_2(VAR_5, &VAR_7->generalEntities, FUNC_7(&VAR_5->m_tempPool), 0);
      if (VAR_9)
        VAR_9->open = VAR_4;
      if (*VAR_8 != FUNC_0('\0'))
        VAR_8++;
      VAR_6 = VAR_8;
      FUNC_5(&VAR_5->m_tempPool);
    }
    else if (*VAR_8 == FUNC_0(VAR_0)) {
      PREFIX *VAR_10;
      if (FUNC_6(&VAR_5->m_tempPool) == 0)
        VAR_10 = &VAR_7->defaultPrefix;
      else {
        if (!FUNC_3(&VAR_5->m_tempPool, FUNC_0('\0')))
          return VAR_3;
        VAR_10 = (PREFIX *)FUNC_2(VAR_5, &VAR_7->prefixes, FUNC_7(&VAR_5->m_tempPool),
                                  sizeof(PREFIX));
        if (!VAR_10)
          return VAR_3;
        if (VAR_10->name == FUNC_7(&VAR_5->m_tempPool)) {
          VAR_10->name = FUNC_4(&VAR_7->pool, VAR_10->name);
          if (!VAR_10->name)
            return VAR_3;
        }
        FUNC_5(&VAR_5->m_tempPool);
      }
      for (VAR_6 = VAR_8 + 1;
           *VAR_6 != VAR_1 && *VAR_6 != FUNC_0('\0');
           VAR_6++)
        if (!FUNC_3(&VAR_5->m_tempPool, *VAR_6))
          return VAR_3;
      if (!FUNC_3(&VAR_5->m_tempPool, FUNC_0('\0')))
        return VAR_3;
      if (FUNC_1(VAR_5, VAR_10, ((void*)0), FUNC_7(&VAR_5->m_tempPool),
                     &VAR_5->m_inheritedBindings) != VAR_2)
        return VAR_3;
      FUNC_5(&VAR_5->m_tempPool);
      if (*VAR_6 != FUNC_0('\0'))
        ++VAR_6;
      VAR_8 = VAR_6;
    }
    else {
      if (!FUNC_3(&VAR_5->m_tempPool, *VAR_8))
        return VAR_3;
      VAR_8++;
    }
  }
  return VAR_4;
}
