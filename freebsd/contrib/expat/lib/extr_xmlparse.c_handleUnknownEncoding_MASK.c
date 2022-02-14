
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum XML_Error { ____Placeholder_XML_Error } XML_Error ;
typedef TYPE_1__* XML_Parser ;
struct TYPE_7__ {int* map; int * data; int (* release ) (int *) ;int * convert; } ;
typedef TYPE_2__ XML_Encoding ;
typedef int XML_Char ;
struct TYPE_6__ {int * m_encoding; int (* m_unknownEncodingRelease ) (int *) ;int * m_unknownEncodingData; int m_unknownEncodingMem; scalar_t__ m_ns; int m_unknownEncodingHandlerData; scalar_t__ (* m_unknownEncodingHandler ) (int ,int const*,TYPE_2__*) ;} ;
typedef int ENCODING ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int*,int *,int *) ;
 int * FUNC_2 (int ,int*,int *,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int const*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int*,int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static enum XML_Error
FUNC_8(XML_Parser VAR_3, const XML_Char *VAR_4)
{
  if (VAR_3->m_unknownEncodingHandler) {
    XML_Encoding VAR_5;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
      VAR_5.map[VAR_6] = -1;
    VAR_5.convert = ((void*)0);
    VAR_5.data = ((void*)0);
    VAR_5.release = ((void*)0);
    if (VAR_3->m_unknownEncodingHandler(VAR_3->m_unknownEncodingHandlerData, VAR_4,
                               &VAR_5)) {
      ENCODING *VAR_7;
      VAR_3->m_unknownEncodingMem = FUNC_0(VAR_3, FUNC_3());
      if (!VAR_3->m_unknownEncodingMem) {
        if (VAR_5.release)
          VAR_5.release(VAR_5.data);
        return VAR_1;
      }
      VAR_7 = (VAR_3->m_ns
             ? FUNC_2
             : FUNC_1)(VAR_3->m_unknownEncodingMem,
                                       VAR_5.map,
                                       VAR_5.convert,
                                       VAR_5.data);
      if (VAR_7) {
        VAR_3->m_unknownEncodingData = VAR_5.data;
        VAR_3->m_unknownEncodingRelease = VAR_5.release;
        VAR_3->m_encoding = VAR_7;
        return VAR_0;
      }
    }
    if (VAR_5.release != ((void*)0))
      VAR_5.release(VAR_5.data);
  }
  return VAR_2;
}
