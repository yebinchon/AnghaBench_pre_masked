
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asm_opcode {int tag; } ;
struct asm_cond {void* value; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {scalar_t__ elems; } ;
struct TYPE_4__ {int size_req; void* cond; int error; TYPE_1__ vectype; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;






 int VAR_3 ;



 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct asm_cond const*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (int ,char*,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char**) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static const struct asm_opcode *
FUNC_8 (char **VAR_11)
{
  char *VAR_12, *VAR_13;
  char *VAR_14;
  const struct asm_opcode *VAR_15;
  const struct asm_cond *VAR_16;
  char VAR_17[2];
  bfd_boolean VAR_18;

  VAR_18 = FUNC_0 (VAR_6, VAR_7);



  for (VAR_13 = VAR_12 = *VAR_11; *VAR_12 != '\0'; VAR_12++)
    if (*VAR_12 == ' ' || ((VAR_10 || VAR_18) && *VAR_12 == '.'))
      break;

  if (VAR_12 == VAR_13)
    return 0;


  if (VAR_12[0] == '.')
    {
      int VAR_19 = 2;



      if (VAR_10 && VAR_12[1] == 'w')
 VAR_8.size_req = 4;
      else if (VAR_10 && VAR_12[1] == 'n')
 VAR_8.size_req = 2;
      else
        VAR_19 = 0;

      VAR_8.vectype.elems = 0;

      *VAR_11 = VAR_12 + VAR_19;

      if (VAR_12[VAR_19] == '.')
 {


          if (FUNC_7 (&VAR_8.vectype, VAR_11) == VAR_2)
     return 0;
        }
      else if (VAR_12[VAR_19] != '\0' && VAR_12[VAR_19] != ' ')
        return 0;
    }
  else
    *VAR_11 = VAR_12;


  VAR_15 = FUNC_4 (VAR_5, VAR_13, VAR_12 - VAR_13);
  if (VAR_15)
    {

      if (VAR_15->tag < VAR_3)
 {
   VAR_8.cond = VAR_1;
   return VAR_15;
 }

      if (VAR_10)
 FUNC_2 (FUNC_1("conditional infixes are deprecated in unified syntax"));
      VAR_14 = VAR_13 + (VAR_15->tag - VAR_3);
      VAR_16 = FUNC_4 (VAR_4, VAR_14, 2);
      FUNC_3 (VAR_16);

      VAR_8.cond = VAR_16->value;
      return VAR_15;
    }



  if (VAR_12 - VAR_13 < 3)
    return 0;


  VAR_14 = VAR_12 - 2;
  VAR_16 = FUNC_4 (VAR_4, VAR_14, 2);
  VAR_15 = FUNC_4 (VAR_5, VAR_13, VAR_14 - VAR_13);
  if (VAR_15 && VAR_16)
    {

      switch (VAR_15->tag)
 {
 case 134:

   break;

 case 136:
 case 135:
 case 130:
   if (!VAR_10)
     return 0;


 case 132:
        case 131:
 case 133:
   VAR_8.cond = VAR_16->value;
   return VAR_15;

 case 129:
 case 128:
   if (VAR_9)
     {
       VAR_8.cond = VAR_16->value;
     }
   else
     {

       VAR_8.error = VAR_0;
       VAR_8.cond = VAR_1;
     }
   return VAR_15;

 default:
   return 0;
 }
    }



  if (VAR_12 - VAR_13 < 6)
    return 0;


  VAR_14 = VAR_13 + 3;
  VAR_16 = FUNC_4 (VAR_4, VAR_14, 2);
  if (!VAR_16)
    return 0;

  FUNC_5 (VAR_17, VAR_14, 2);
  FUNC_6 (VAR_14, VAR_14 + 2, (VAR_12 - VAR_14) - 2);
  VAR_15 = FUNC_4 (VAR_5, VAR_13, (VAR_12 - VAR_13) - 2);
  FUNC_6 (VAR_14 + 2, VAR_14, (VAR_12 - VAR_14) - 2);
  FUNC_5 (VAR_14, VAR_17, 2);

  if (VAR_15
      && (VAR_15->tag == 136
   || VAR_15->tag == 135
   || VAR_15->tag == 133
   || VAR_15->tag == 134))
    {

      if (VAR_10
   && (VAR_15->tag == 136
       || VAR_15->tag == 135))
 FUNC_2 (FUNC_1("conditional infixes are deprecated in unified syntax"));

      VAR_8.cond = VAR_16->value;
      return VAR_15;
    }

  return 0;
}
