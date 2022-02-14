
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_stability_t ;
const char *
FUNC_0(dtrace_stability_t VAR_0)
{
 switch (VAR_0) {
 case 133: return ("Internal");
 case 131: return ("Private");
 case 132: return ("Obsolete");
 case 134: return ("External");
 case 128: return ("Unstable");
 case 135: return ("Evolving");
 case 130: return ("Stable");
 case 129: return ("Standard");
 default: return (((void*)0));
 }
}
