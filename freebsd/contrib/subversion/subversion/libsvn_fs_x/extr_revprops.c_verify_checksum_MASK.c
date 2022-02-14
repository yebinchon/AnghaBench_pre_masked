
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_byte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int **,int ,scalar_t__,int,int *) ;
 int * FUNC_2 (int const*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,char*) ;
 int * FUNC_5 (int ,int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_stringbuf_t *VAR_3,
                apr_pool_t *VAR_4)
{
  const apr_byte_t *VAR_5;
  svn_checksum_t *VAR_6, *VAR_7;


  if (VAR_3->len < sizeof(apr_uint32_t))
    return FUNC_5(VAR_0, ((void*)0),
                            "File too short");

  VAR_3->len -= sizeof(apr_uint32_t);
  VAR_5 = (apr_byte_t *)VAR_3->data + VAR_3->len;

  VAR_7 = FUNC_2(VAR_5, VAR_4);
  FUNC_0(FUNC_1(&VAR_6, VAR_2, VAR_3->data,
                       VAR_3->len, VAR_4));

  if (!FUNC_3(VAR_6, VAR_7))
    FUNC_0(FUNC_4(VAR_7, VAR_6, VAR_4,
                                      "checksum mismatch"));

  return VAR_1;
}
