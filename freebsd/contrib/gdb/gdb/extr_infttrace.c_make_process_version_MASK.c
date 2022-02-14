
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttreq_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static ttreq_t
FUNC_2 (ttreq_t VAR_4)
{
  if (!FUNC_0 (VAR_4))
    {
      FUNC_1 ("Internal error, bad ttrace request made\n");
      return -1;
    }

  switch (VAR_4)
    {
    case 129:
      return VAR_3;

    case 135:
      return VAR_0;

    case 134:
      return VAR_1;

    case 131:
      return VAR_2;

    case 130:
    case 132:
    case 128:
    case 133:
      return -1;

    default:
      return VAR_4;
    }
}
