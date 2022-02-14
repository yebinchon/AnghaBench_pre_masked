
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttreq_t ;
typedef int register_value_t ;
typedef int register_value ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;
typedef int PTRACE_ARG3_TYPE ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int,int*,int) ;
 int FUNC_5 (int,int,int*,int) ;

int
FUNC_6 (int VAR_12, int VAR_13, PTRACE_ARG3_TYPE VAR_14, int VAR_15)
{
  ttreq_t VAR_16;
  TTRACE_ARG_TYPE VAR_17 = (TTRACE_ARG_TYPE) VAR_14;
  TTRACE_ARG_TYPE VAR_18 = (TTRACE_ARG_TYPE) VAR_15;
  TTRACE_ARG_TYPE VAR_19 = VAR_1;
  int VAR_20;
  register_value_t VAR_21;
  int VAR_22;





  switch (VAR_12)
    {







    case 134:
      return FUNC_3 (0, 0, 0);

    case 135:
      VAR_20 = FUNC_4 (VAR_13,
       VAR_17,
       &VAR_21,
       sizeof (VAR_21));
      if (VAR_20 < 0)
 return VAR_20;
      return VAR_21;

    case 128:
      VAR_21 = (int) VAR_18;
      VAR_20 = FUNC_5 (VAR_13,
      VAR_17,
      &VAR_21,
      sizeof (VAR_21));
      return VAR_20;
      break;

    case 136:
      VAR_20 = FUNC_1 (VAR_8,
          VAR_13,
          VAR_17,
          (TTRACE_ARG_TYPE) 4,
          (TTRACE_ARG_TYPE) & VAR_22);
      if (VAR_20 < 0)
 return VAR_20;
      return VAR_22;

    case 137:
      VAR_20 = FUNC_1 (VAR_7,
          VAR_13,
          VAR_17,
          (TTRACE_ARG_TYPE) 4,
          (TTRACE_ARG_TYPE) & VAR_22);
      if (VAR_20 < 0)
 return VAR_20;
      return VAR_22;

    case 144:
      VAR_20 = FUNC_0 (VAR_2,
        FUNC_2 (VAR_13),
        (lwpid_t) VAR_1,
        VAR_17,
        (TTRACE_ARG_TYPE) VAR_11,
        VAR_19);
      if (VAR_20 < 0)
 return VAR_20;
      return VAR_20;




    case 142:
      VAR_16 = VAR_4;
      break;

    case 130:
      VAR_16 = VAR_10;
      VAR_18 = 4;
      VAR_19 = (TTRACE_ARG_TYPE) & VAR_15;
      break;

    case 131:
      VAR_16 = VAR_9;
      VAR_18 = 4;
      VAR_19 = (TTRACE_ARG_TYPE) & VAR_15;
      break;

    case 138:
      VAR_16 = VAR_8;
      break;

    case 139:
      VAR_16 = VAR_7;
      break;

    case 129:
      VAR_16 = VAR_10;
      break;

    case 132:
      VAR_16 = VAR_9;
      break;

    case 143:
      VAR_16 = VAR_3;
      break;

    case 133:
      VAR_16 = VAR_0;
      break;

    case 140:
      VAR_16 = VAR_5;
      break;

    case 141:
      VAR_16 = VAR_6;
      break;

    default:
      VAR_16 = VAR_12;
      break;
    }

  return FUNC_1 (VAR_16,
        VAR_13,
        VAR_17,
        VAR_18,
        VAR_19);
}
