
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_hdr {int ar_name; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 char* FUNC_1 (size_t const) ;
 int FUNC_2 (char*,int ,size_t const) ;

char *
FUNC_3(const struct ar_hdr *VAR_1)
{
 char *VAR_2;
 const size_t VAR_3 = sizeof(VAR_1->ar_name);

 if ((VAR_2 = FUNC_1(VAR_3 + 1)) == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 (void) FUNC_2(VAR_2, VAR_1->ar_name, VAR_3);
 VAR_2[VAR_3] = '\0';
 return (VAR_2);
}
