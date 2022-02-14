
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct text_baton_t {int pool; int result_checksum; int node; int file_stream; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0)
{
  struct text_baton_t *VAR_1 = VAR_0;




  FUNC_0(FUNC_2(VAR_1->file_stream));


  return FUNC_1(VAR_1->node, VAR_1->result_checksum,
                                       VAR_1->pool);
}
