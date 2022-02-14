
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned int VAR_0)
{
  static char VAR_1[32];

  switch (VAR_0)
    {
    case 134: return "UNIX - System V";
    case 140: return "UNIX - HP-UX";
    case 135: return "UNIX - NetBSD";
    case 137: return "UNIX - Linux";
    case 139: return "GNU/Hurd";
    case 130: return "UNIX - Solaris";
    case 144: return "UNIX - AIX";
    case 138: return "UNIX - IRIX";
    case 141: return "UNIX - FreeBSD";
    case 128: return "UNIX - TRU64";
    case 136: return "Novell - Modesto";
    case 132: return "UNIX - OpenBSD";
    case 131: return "VMS - OpenVMS";
    case 133: return "HP - Non-Stop Kernel";
    case 142: return "Amiga Research OS";
    case 129: return FUNC_0("Standalone App");
    case 143: return "ARM";
    default:
      FUNC_1 (VAR_1, sizeof (VAR_1), FUNC_0("<unknown: %x>"), VAR_0);
      return VAR_1;
    }
}
