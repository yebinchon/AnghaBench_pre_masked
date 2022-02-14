
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int HOST_WIDE_INT ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;






 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static const char *
FUNC_6 (rtx VAR_0, HOST_WIDE_INT *VAR_1)
{
  const char * VAR_2;
  enum rtx_code VAR_3 = FUNC_0 (VAR_0);

  switch (FUNC_0 (FUNC_2 (VAR_0, 1)))
    {
    case 131:
    case 128:
      *VAR_1 = -1;
      break;

    case 134:
      *VAR_1 = FUNC_1 (FUNC_2 (VAR_0, 1));
      break;

    default:
      FUNC_4 ();
    }

  switch (VAR_3)
    {
    case 136:
      VAR_2 = "asl";
      break;

    case 135:
      VAR_2 = "asr";
      break;

    case 133:
      VAR_2 = "lsr";
      break;

    case 130:
      FUNC_3 (*VAR_1 != -1);
      *VAR_1 = 32 - *VAR_1;



    case 129:
      VAR_2 = "ror";
      break;

    case 132:


      FUNC_3 (*VAR_1 != -1);
      *VAR_1 = FUNC_5 (*VAR_1);
      return "asl";

    default:
      FUNC_4 ();
    }

  if (*VAR_1 != -1)
    {







      if (VAR_3 == 129)

 *VAR_1 &= 31;
      else if (*VAR_1 != (*VAR_1 & 31))
 {
   if (VAR_3 == 136)
     VAR_2 = "lsr";
   *VAR_1 = 32;
 }


      if (*VAR_1 == 0)
 return ((void*)0);
    }

  return VAR_2;
}
