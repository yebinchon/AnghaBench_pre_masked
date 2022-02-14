
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;



 int VAR_4 ;


 char* FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,char*,char const*,char const*,...) ;

svn_error_t *
FUNC_2(int VAR_5, const char *VAR_6, const char *VAR_7)
{
  apr_status_t VAR_8;
  const char *VAR_9;

  if (VAR_5 == VAR_4)
    return VAR_3;

  switch (VAR_5)
    {
    case 129:
      VAR_8 = VAR_1;
      VAR_9 = FUNC_0("stream error");
      break;

    case 130:
      VAR_8 = VAR_0;
      VAR_9 = FUNC_0("out of memory");
      break;

    case 132:
      VAR_8 = VAR_0;
      VAR_9 = FUNC_0("buffer error");
      break;

    case 128:
      VAR_8 = VAR_2;
      VAR_9 = FUNC_0("version error");
      break;

    case 131:
      VAR_8 = VAR_1;
      VAR_9 = FUNC_0("corrupt data");
      break;

    default:
      VAR_8 = VAR_2;
      VAR_9 = FUNC_0("unknown error");
      break;
    }

  if (VAR_7 != ((void*)0))
    return FUNC_1(VAR_8, ((void*)0), "zlib (%s): %s: %s", VAR_6,
                             VAR_9, VAR_7);
  else
    return FUNC_1(VAR_8, ((void*)0), "zlib (%s): %s", VAR_6, VAR_9);
}
