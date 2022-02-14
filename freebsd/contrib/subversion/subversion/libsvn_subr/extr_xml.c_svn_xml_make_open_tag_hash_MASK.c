
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef enum svn_xml_open_tag_style { ____Placeholder_svn_xml_open_tag_style } svn_xml_open_tag_style ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void const**,int *,void**) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int *,char const*) ;
 int * FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int **,void*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_9(svn_stringbuf_t **VAR_2,
                           apr_pool_t *VAR_3,
                           enum svn_xml_open_tag_style VAR_4,
                           const char *VAR_5,
                           apr_hash_t *VAR_6)
{
  apr_hash_index_t *VAR_7;
  apr_size_t VAR_8 = FUNC_5(VAR_5) + 4 + FUNC_0(VAR_6) * 30;

  if (*VAR_2 == ((void*)0))
    *VAR_2 = FUNC_7(VAR_8, VAR_3);

  FUNC_6(*VAR_2, "<");
  FUNC_6(*VAR_2, VAR_5);

  for (VAR_7 = FUNC_1(VAR_3, VAR_6); VAR_7; VAR_7 = FUNC_2(VAR_7))
    {
      const void *VAR_9;
      void *VAR_10;

      FUNC_3(VAR_7, &VAR_9, ((void*)0), &VAR_10);
      FUNC_4(VAR_10 != ((void*)0));

      FUNC_6(*VAR_2, "\n   ");
      FUNC_6(*VAR_2, VAR_9);
      FUNC_6(*VAR_2, "=\"");
      FUNC_8(VAR_2, VAR_10, VAR_3);
      FUNC_6(*VAR_2, "\"");
    }

  if (VAR_4 == VAR_1)
    FUNC_6(*VAR_2, "/");
  FUNC_6(*VAR_2, ">");
  if (VAR_4 != VAR_0)
    FUNC_6(*VAR_2, "\n");
}
