
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_xml_parser_t ;
typedef int svn_error_t ;
struct entries_accumulator {int scratch_pool; int * parser; int * pool; int * entries; } ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (struct entries_accumulator*,int ,int *,int *,int *) ;
 int FUNC_8 (int *,char const*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_3,
                  apr_hash_t *VAR_4,
                  const char *VAR_5,
                  apr_size_t VAR_6,
                  apr_pool_t *VAR_7,
                  apr_pool_t *VAR_8)
{
  svn_xml_parser_t *VAR_9;
  struct entries_accumulator VAR_10;


  VAR_10.entries = VAR_4;
  VAR_10.pool = VAR_7;
  VAR_10.scratch_pool = FUNC_4(VAR_8);


  VAR_9 = FUNC_7(&VAR_10,
                                   VAR_2,
                                   ((void*)0),
                                   ((void*)0),
                                   VAR_8);



  VAR_10.parser = VAR_9;


  FUNC_0(FUNC_8(VAR_9, VAR_5, VAR_6, VAR_1),
            FUNC_2(VAR_8,
                         FUNC_1("XML parser failed in '%s'"),
                         FUNC_3(VAR_3, VAR_8)));

  FUNC_5(VAR_10.scratch_pool);


  FUNC_6(VAR_9);

  return VAR_0;
}
