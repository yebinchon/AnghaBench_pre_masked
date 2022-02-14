
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int autr_state_type ;
__attribute__((used)) static const char*
FUNC_0(autr_state_type VAR_0)
{
        switch (VAR_0) {
                case 129: return "  START  ";
                case 133: return " ADDPEND ";
                case 128: return "  VALID  ";
                case 132: return " MISSING ";
                case 130: return " REVOKED ";
                case 131: return " REMOVED ";
        }
        return " UNKNOWN ";
}
