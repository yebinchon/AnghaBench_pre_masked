
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umad_port_t ;
typedef int dir_name ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*,char*,int,int *) ;
 char* FUNC_2 (char const*,int*) ;
 int FUNC_3 (char*,int,char*,char*,char const*,char*) ;

int FUNC_4(const char *VAR_3, int VAR_4, umad_port_t * VAR_5)
{
 char VAR_6[256];

 FUNC_0("ca_name %s portnum %d", VAR_3, VAR_4);

 if (!(VAR_3 = FUNC_2(VAR_3, &VAR_4)))
  return -VAR_0;

 FUNC_3(VAR_6, sizeof(VAR_6), "%s/%s/%s",
   VAR_2, VAR_3, VAR_1);

 return FUNC_1(VAR_3, VAR_6, VAR_4, VAR_5);
}
