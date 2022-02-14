
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int *) ;
 int * FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_stream_t *VAR_5, svn_filesize_t *VAR_6,
                   apr_size_t *VAR_7, apr_size_t *VAR_8,
                   apr_size_t *VAR_9, apr_size_t *VAR_10,
                   apr_size_t *VAR_11)
{
  unsigned char VAR_12;


  *VAR_11 = 0;
  *VAR_6 = 0;
  while (1)
    {
      FUNC_0(FUNC_2(&VAR_12, VAR_5));
      ++*VAR_11;
      *VAR_6 = (*VAR_6 << 7) | (VAR_12 & 0x7f);
      if (!(VAR_12 & 0x80))
        break;
    }


  FUNC_0(FUNC_3(VAR_7, VAR_11, VAR_5));
  FUNC_0(FUNC_3(VAR_8, VAR_11, VAR_5));
  FUNC_0(FUNC_3(VAR_9, VAR_11, VAR_5));
  FUNC_0(FUNC_3(VAR_10, VAR_11, VAR_5));

  if (*VAR_8 > VAR_1 ||
      *VAR_7 > VAR_1 ||

      *VAR_10 > VAR_1 + VAR_4 ||
      *VAR_9 > VAR_0)
    return FUNC_4(VAR_2, ((void*)0),
                            FUNC_1("Svndiff contains a too-large window"));


  if (*VAR_6 < 0 || *VAR_9 + *VAR_10 < *VAR_9
      || *VAR_7 + *VAR_8 < *VAR_7
      || (apr_size_t)*VAR_6 + *VAR_7 < (apr_size_t)*VAR_6)
    return FUNC_4(VAR_2, ((void*)0),
                            FUNC_1("Svndiff contains corrupt window header"));

  return VAR_3;
}
