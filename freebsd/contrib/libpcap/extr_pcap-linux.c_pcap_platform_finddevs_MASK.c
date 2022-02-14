
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,char*,int,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;

int
FUNC_4(pcap_if_list_t *VAR_6, char *VAR_7)
{
 int VAR_8;




 if (FUNC_1(VAR_6, VAR_7, VAR_4,
     VAR_5) == -1)
  return (-1);
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 if (VAR_8 == -1)
  return (-1);
 if (VAR_8 == 0) {



  if (FUNC_2(VAR_6, VAR_7) == -1)
   return (-1);
 }







 if (FUNC_0(VAR_6, "any",
     VAR_2|VAR_1|VAR_0,
     VAR_3, VAR_7) == ((void*)0))
  return (-1);

 return (0);
}
