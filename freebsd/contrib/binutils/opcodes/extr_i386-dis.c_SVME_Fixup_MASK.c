
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 char const** VAR_7 ;
 char const* VAR_8 ;
 char* VAR_9 ;
 char** VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_3 (int VAR_15, int VAR_16)
{
  const char *VAR_17;
  char *VAR_18;

  switch (*VAR_4)
    {
    case 0xd8:
      VAR_17 = "vmrun";
      break;
    case 0xd9:
      VAR_17 = "vmmcall";
      break;
    case 0xda:
      VAR_17 = "vmload";
      break;
    case 0xdb:
      VAR_17 = "vmsave";
      break;
    case 0xdc:
      VAR_17 = "stgi";
      break;
    case 0xdd:
      VAR_17 = "clgi";
      break;
    case 0xde:
      VAR_17 = "skinit";
      break;
    case 0xdf:
      VAR_17 = "invlpga";
      break;
    default:
      FUNC_0 (VAR_15, VAR_16);
      return;
    }

  VAR_18 = VAR_8 + FUNC_2 (VAR_8) - 4;

  if (*VAR_18 == 'i')
    --VAR_18;
  FUNC_1 (VAR_18, VAR_17);
  if (!(VAR_12 & VAR_1))
    {
      ++VAR_4;
      return;
    }
  VAR_14 |= VAR_1;
  switch (*VAR_4++)
    {
    case 0xdf:
      FUNC_1 (VAR_10[1], VAR_7[1]);
      VAR_13 = 1;

    case 0xd8:
    case 0xda:
    case 0xdb:
      *VAR_9++ = VAR_11;
      if (VAR_2 == VAR_5 || (VAR_16 & VAR_0))
        VAR_17 = VAR_7[0];
      else
        VAR_17 = VAR_6[0];
      FUNC_1 (VAR_9, VAR_17);
      VAR_9 += FUNC_2 (VAR_17);
      *VAR_9++ = VAR_3;
      *VAR_9 = '\0';
      break;
    }
}
