
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3 (char *VAR_1, int VAR_2)
{
  char VAR_3[100];

  FUNC_1 (VAR_1, VAR_0);
  FUNC_1 (" ", VAR_0);

  switch (VAR_2)
    {
    case 0x1:
      VAR_1 = "Unknown fault";
      break;
    case 0x2:
      VAR_1 = "Power failed";
      break;
    case 0x3:
      VAR_1 = "Cable disconnected";
      break;
    case 0x4:
      VAR_1 = "Couldn't enter OCD mode";
      break;
    case 0x5:
      VAR_1 = "Target stuck in reset";
      break;
    case 0x6:
      VAR_1 = "OCD hasn't been initialized";
      break;
    case 0x7:
      VAR_1 = "Write verify failed";
      break;
    case 0x8:
      VAR_1 = "Reg buff error (during MPC5xx fp reg read/write)";
      break;
    case 0x9:
      VAR_1 = "Invalid CPU register access attempt failed";
      break;
    case 0x11:
      VAR_1 = "Bus error";
      break;
    case 0x12:
      VAR_1 = "Checksum error";
      break;
    case 0x13:
      VAR_1 = "Illegal command";
      break;
    case 0x14:
      VAR_1 = "Parameter error";
      break;
    case 0x15:
      VAR_1 = "Internal error";
      break;
    case 0x80:
      VAR_1 = "Flash erase error";
      break;
    default:
      FUNC_2 (VAR_3, "Unknown error code %d", VAR_2);
      VAR_1 = VAR_3;
    }

  FUNC_0 ("%s", VAR_1);
}
