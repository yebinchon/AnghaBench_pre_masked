
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parser; int * error; } ;
typedef TYPE_1__ svn_xml_parser_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int,int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int *,int ,int ,long) ;
 int FUNC_6 (TYPE_1__*) ;

svn_error_t *
FUNC_7(svn_xml_parser_t *VAR_2,
              const char *VAR_3,
              apr_size_t VAR_4,
              svn_boolean_t VAR_5)
{
  svn_error_t *VAR_6;
  int VAR_7;


  VAR_7 = FUNC_3(VAR_2->parser, VAR_3, (int) VAR_4, VAR_5);


  if (VAR_2->error)
    {

      FUNC_6(VAR_2);
      return VAR_2->error;
    }


  if (! VAR_7)
    {

      long VAR_8 = FUNC_1(VAR_2->parser);

      VAR_6 = FUNC_5
        (VAR_0, ((void*)0),
         FUNC_4("Malformed XML: %s at line %ld"),
         FUNC_0(FUNC_2(VAR_2->parser)), VAR_8);


      FUNC_6(VAR_2);
      return VAR_6;
    }

  return VAR_1;
}
