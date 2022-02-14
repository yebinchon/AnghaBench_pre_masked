
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union aux_ext {int a_rndx; int a_ti; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd ;
struct TYPE_12__ {unsigned int bt; unsigned int tq0; unsigned int tq1; unsigned int tq2; unsigned int tq3; unsigned int tq4; unsigned int tq5; scalar_t__ fBitfield; } ;
struct TYPE_8__ {union aux_ext* external_aux; } ;
struct TYPE_11__ {TYPE_1__ debug_info; } ;
struct TYPE_10__ {TYPE_7__ ti; } ;
struct TYPE_9__ {int iauxBase; int fBigendian; } ;
typedef int RNDXR ;
typedef TYPE_2__ FDR ;
typedef TYPE_3__ AUXU ;


 int FUNC_0 (int,union aux_ext*) ;
 int FUNC_1 (int,union aux_ext*) ;
 scalar_t__ FUNC_2 (int,union aux_ext*) ;
 void* FUNC_3 (int,union aux_ext*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,int *,int *) ;
 int FUNC_6 (int,int *,TYPE_7__*) ;
 TYPE_6__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*,char*,int *,long,char*) ;
 int FUNC_9 (char*,char*,long,...) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
__attribute__((used)) static char *
FUNC_12 (bfd *VAR_0, FDR *VAR_1, unsigned int VAR_2)
{
  union aux_ext *VAR_3;
  int VAR_4;
  AUXU VAR_5;
  struct qual
  {
    unsigned int type;
    int low_bound;
    int high_bound;
    int stride;
  } VAR_6[7];
  unsigned int VAR_7;
  int VAR_8;
  char VAR_9[1024];
  static char VAR_10[1024];
  char *VAR_11 = VAR_9;
  char *VAR_12 = VAR_10;
  RNDXR VAR_13;

  VAR_3 = FUNC_7 (VAR_0)->debug_info.external_aux + VAR_1->iauxBase;
  VAR_4 = VAR_1->fBigendian;

  for (VAR_8 = 0; VAR_8 < 7; VAR_8++)
    {
      VAR_6[VAR_8].low_bound = 0;
      VAR_6[VAR_8].high_bound = 0;
      VAR_6[VAR_8].stride = 0;
    }

  if (FUNC_2 (VAR_4, &VAR_3[VAR_2]) == (bfd_vma) -1)
    return "-1 (no type)";
  FUNC_6 (VAR_4, &VAR_3[VAR_2++].a_ti, &VAR_5.ti);

  VAR_7 = VAR_5.ti.bt;
  VAR_6[0].type = VAR_5.ti.tq0;
  VAR_6[1].type = VAR_5.ti.tq1;
  VAR_6[2].type = VAR_5.ti.tq2;
  VAR_6[3].type = VAR_5.ti.tq3;
  VAR_6[4].type = VAR_5.ti.tq4;
  VAR_6[5].type = VAR_5.ti.tq5;
  VAR_6[6].type = 131;


  switch (VAR_7)
    {
    case 148:
      FUNC_10 (VAR_11, "nil");
      break;

    case 161:
      FUNC_10 (VAR_11, "address");
      break;

    case 159:
      FUNC_10 (VAR_11, "char");
      break;

    case 140:
      FUNC_10 (VAR_11, "unsigned char");
      break;

    case 144:
      FUNC_10 (VAR_11, "short");
      break;

    case 137:
      FUNC_10 (VAR_11, "unsigned short");
      break;

    case 150:
      FUNC_10 (VAR_11, "int");
      break;

    case 139:
      FUNC_10 (VAR_11, "unsigned int");
      break;

    case 149:
      FUNC_10 (VAR_11, "long");
      break;

    case 138:
      FUNC_10 (VAR_11, "unsigned long");
      break;

    case 153:
      FUNC_10 (VAR_11, "float");
      break;

    case 156:
      FUNC_10 (VAR_11, "double");
      break;





    case 142:
      FUNC_5 (VAR_4, &VAR_3[VAR_2].a_rndx, &VAR_13);
      FUNC_8 (VAR_0, VAR_1, VAR_11, &VAR_13,
       (long) FUNC_2 (VAR_4, &VAR_3[VAR_2+1]),
       "struct");
      VAR_2++;
      break;





    case 136:
      FUNC_5 (VAR_4, &VAR_3[VAR_2].a_rndx, &VAR_13);
      FUNC_8 (VAR_0, VAR_1, VAR_11, &VAR_13,
       (long) FUNC_2 (VAR_4, &VAR_3[VAR_2+1]),
       "union");
      VAR_2++;
      break;





    case 155:
      FUNC_5 (VAR_4, &VAR_3[VAR_2].a_rndx, &VAR_13);
      FUNC_8 (VAR_0, VAR_1, VAR_11, &VAR_13,
       (long) FUNC_2 (VAR_4, &VAR_3[VAR_2+1]),
       "enum");
      VAR_2++;
      break;

    case 141:
      FUNC_10 (VAR_11, "typedef");
      break;

    case 146:
      FUNC_10 (VAR_11, "subrange");
      break;

    case 145:
      FUNC_10 (VAR_11, "set");
      break;

    case 158:
      FUNC_10 (VAR_11, "complex");
      break;

    case 157:
      FUNC_10 (VAR_11, "double complex");
      break;

    case 151:
      FUNC_10 (VAR_11, "forward/unamed typedef");
      break;

    case 154:
      FUNC_10 (VAR_11, "fixed decimal");
      break;

    case 152:
      FUNC_10 (VAR_11, "float decimal");
      break;

    case 143:
      FUNC_10 (VAR_11, "string");
      break;

    case 160:
      FUNC_10 (VAR_11, "bit");
      break;

    case 147:
      FUNC_10 (VAR_11, "picture");
      break;

    case 135:
      FUNC_10 (VAR_11, "void");
      break;

    default:
      FUNC_9 (VAR_11, FUNC_4("Unknown basic type %d"), (int) VAR_7);
      break;
    }

  VAR_11 += FUNC_11 (VAR_9);


  if (VAR_5.ti.fBitfield)
    {
      int VAR_14;

      VAR_14 = FUNC_3 (VAR_4, &VAR_3[VAR_2++]);
      FUNC_9 (VAR_11, " : %d", VAR_14);
      VAR_11 += FUNC_11 (VAR_9);
    }


  if (VAR_6[0].type != 131)
    {







      for (VAR_8 = 0; VAR_8 < 7; VAR_8++)
 {
   if (VAR_6[VAR_8].type == 134)
     {
       VAR_6[VAR_8].low_bound =
  FUNC_1 (VAR_4, &VAR_3[VAR_2+2]);
       VAR_6[VAR_8].high_bound =
  FUNC_0 (VAR_4, &VAR_3[VAR_2+3]);
       VAR_6[VAR_8].stride =
  FUNC_3 (VAR_4, &VAR_3[VAR_2+4]);
       VAR_2 += 5;
     }
 }


      for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
 {
   switch (VAR_6[VAR_8].type)
     {
     case 131:
     case 132:
       break;

     case 129:
       FUNC_10 (VAR_12, "ptr to ");
       VAR_12 += sizeof ("ptr to ")-1;
       break;

     case 128:
       FUNC_10 (VAR_12, "volatile ");
       VAR_12 += sizeof ("volatile ")-1;
       break;

     case 133:
       FUNC_10 (VAR_12, "far ");
       VAR_12 += sizeof ("far ")-1;
       break;

     case 130:
       FUNC_10 (VAR_12, "func. ret. ");
       VAR_12 += sizeof ("func. ret. ");
       break;

     case 134:
       {
  int VAR_15 = VAR_8;
  int VAR_16;



  while (VAR_8 < 5 && VAR_6[VAR_8+1].type == 134)
    VAR_8++;

  for (VAR_16 = VAR_8; VAR_16 >= VAR_15; VAR_16--)
    {
      FUNC_10 (VAR_12, "array [");
      VAR_12 += sizeof ("array [")-1;
      if (VAR_6[VAR_16].low_bound != 0)
        FUNC_9 (VAR_12,
          "%ld:%ld {%ld bits}",
          (long) VAR_6[VAR_16].low_bound,
          (long) VAR_6[VAR_16].high_bound,
          (long) VAR_6[VAR_16].stride);

      else if (VAR_6[VAR_16].high_bound != -1)
        FUNC_9 (VAR_12,
          "%ld {%ld bits}",
          (long) (VAR_6[VAR_16].high_bound + 1),
          (long) (VAR_6[VAR_16].stride));

      else
        FUNC_9 (VAR_12, " {%ld bits}", (long) (VAR_6[VAR_16].stride));

      VAR_12 += FUNC_11 (VAR_12);
      FUNC_10 (VAR_12, "] of ");
      VAR_12 += sizeof ("] of ")-1;
    }
       }
       break;
     }
 }
    }

  FUNC_10 (VAR_12, VAR_9);
  return VAR_10;
}
