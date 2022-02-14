
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef scalar_t__ XML_Char ;
struct TYPE_11__ {scalar_t__ const* name; TYPE_2__* prefix; int xmlns; } ;
struct TYPE_9__ {scalar_t__ const* name; } ;
struct TYPE_10__ {int pool; int prefixes; TYPE_2__ defaultPrefix; int attributeIds; } ;
struct TYPE_8__ {int m_ns; TYPE_3__* m_dtd; } ;
typedef TYPE_2__ PREFIX ;
typedef int ENCODING ;
typedef TYPE_3__ DTD ;
typedef TYPE_4__ ATTRIBUTE_ID ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ const FUNC_0 (char) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,scalar_t__ const*,int) ;
 int FUNC_2 (int *,scalar_t__ const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ const* FUNC_5 (int *) ;
 scalar_t__* FUNC_6 (int *,int const*,char const*,char const*) ;

__attribute__((used)) static ATTRIBUTE_ID *
FUNC_7(XML_Parser VAR_7, const ENCODING *VAR_8,
               const char *VAR_9, const char *VAR_10)
{
  DTD * const VAR_11 = VAR_7->m_dtd;
  ATTRIBUTE_ID *VAR_12;
  const XML_Char *VAR_13;
  if (!FUNC_2(&VAR_11->pool, FUNC_0('\0')))
    return ((void*)0);
  VAR_13 = FUNC_6(&VAR_11->pool, VAR_8, VAR_9, VAR_10);
  if (!VAR_13)
    return ((void*)0);

  ++VAR_13;
  VAR_12 = (ATTRIBUTE_ID *)FUNC_1(VAR_7, &VAR_11->attributeIds, VAR_13, sizeof(ATTRIBUTE_ID));
  if (!VAR_12)
    return ((void*)0);
  if (VAR_12->name != VAR_13)
    FUNC_3(&VAR_11->pool);
  else {
    FUNC_4(&VAR_11->pool);
    if (!VAR_7->m_ns)
      ;
    else if (VAR_13[0] == FUNC_0(VAR_5)
        && VAR_13[1] == FUNC_0(VAR_2)
        && VAR_13[2] == FUNC_0(VAR_1)
        && VAR_13[3] == FUNC_0(VAR_3)
        && VAR_13[4] == FUNC_0(VAR_4)
        && (VAR_13[5] == FUNC_0('\0') || VAR_13[5] == FUNC_0(VAR_0))) {
      if (VAR_13[5] == FUNC_0('\0'))
        VAR_12->prefix = &VAR_11->defaultPrefix;
      else
        VAR_12->prefix = (PREFIX *)FUNC_1(VAR_7, &VAR_11->prefixes, VAR_13 + 6, sizeof(PREFIX));
      VAR_12->xmlns = VAR_6;
    }
    else {
      int VAR_14;
      for (VAR_14 = 0; VAR_13[VAR_14]; VAR_14++) {

        if (VAR_13[VAR_14] == FUNC_0(VAR_0)) {
          int VAR_15;
          for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
            if (!FUNC_2(&VAR_11->pool, VAR_13[VAR_15]))
              return ((void*)0);
          }
          if (!FUNC_2(&VAR_11->pool, FUNC_0('\0')))
            return ((void*)0);
          VAR_12->prefix = (PREFIX *)FUNC_1(VAR_7, &VAR_11->prefixes, FUNC_5(&VAR_11->pool),
                                        sizeof(PREFIX));
          if (!VAR_12->prefix)
            return ((void*)0);
          if (VAR_12->prefix->name == FUNC_5(&VAR_11->pool))
            FUNC_4(&VAR_11->pool);
          else
            FUNC_3(&VAR_11->pool);
          break;
        }
      }
    }
  }
  return VAR_12;
}
