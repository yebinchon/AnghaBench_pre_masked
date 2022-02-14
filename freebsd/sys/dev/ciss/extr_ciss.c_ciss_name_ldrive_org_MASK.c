
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
    switch(VAR_0) {
    case 133:
 return("RAID 0");
    case 132:
 return("RAID 1(1+0)");
    case 131:
 return("RAID 4");
    case 130:
 return("RAID 5");
    case 129:
 return("RAID 5+1");
    case 128:
 return("RAID ADG");
    }
    return("unknown");
}
