
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_pac {int * pac_opaque; int pac_opaque_len; } ;


 int * FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char * FUNC_2(struct eap_fast_pac *VAR_0,
           char *VAR_1)
{
 FUNC_1(VAR_0->pac_opaque);
 VAR_0->pac_opaque = FUNC_0(VAR_1, &VAR_0->pac_opaque_len);
 if (VAR_0->pac_opaque == ((void*)0))
  return "Invalid PAC-Opaque";
 return ((void*)0);
}
