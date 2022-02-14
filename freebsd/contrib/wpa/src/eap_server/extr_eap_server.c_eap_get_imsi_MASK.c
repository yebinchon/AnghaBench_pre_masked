
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {char* imsi; } ;



const char * FUNC_0(struct eap_sm *VAR_0)
{
 if (!VAR_0 || VAR_0->imsi[0] == '\0')
  return ((void*)0);
 return VAR_0->imsi;
}
