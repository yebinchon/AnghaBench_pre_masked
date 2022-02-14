
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;
typedef int bpf_u_int32 ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,int ,char const*,char*) ;
 int FUNC_7 (char*,int ,char*,...) ;
 int FUNC_8 (scalar_t__,char*) ;
 scalar_t__ FUNC_9 (char const*) ;

int
FUNC_10(pcap_if_list_t *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 const char *VAR_6;
 char *VAR_7;
 ULONG VAR_8;
 char *VAR_9;
 char VAR_10[VAR_1+1];
 VAR_8 = 0;
 if (!FUNC_1(((void*)0), &VAR_8))
 {
  DWORD VAR_11 = FUNC_0();

  if (VAR_11 != VAR_0)
  {
   FUNC_8(VAR_11, VAR_10);
   FUNC_7(VAR_4, VAR_1,
       "PacketGetAdapterNames: %s", VAR_10);
   return (-1);
  }
 }

 if (VAR_8 <= 0)
  return 0;
 VAR_7 = (char*) FUNC_5(VAR_8);
 if (VAR_7 == ((void*)0))
 {
  FUNC_7(VAR_4, VAR_1, "Cannot allocate enough memory to list the adapters.");
  return (-1);
 }

 if (!FUNC_1(VAR_7, &VAR_8)) {
  FUNC_8(FUNC_0(), VAR_10);
  FUNC_7(VAR_4, VAR_1, "PacketGetAdapterNames: %s",
      VAR_10);
  FUNC_3(VAR_7);
  return (-1);
 }
 VAR_6 = &VAR_7[0];
 while (*VAR_6 != '\0' || *(VAR_6 + 1) != '\0')
  VAR_6++;







 VAR_6 += 2;




 VAR_9 = &VAR_7[0];
 while (*VAR_9 != '\0') {
  bpf_u_int32 VAR_12 = 0;
  if (FUNC_4(VAR_9, &VAR_12, VAR_4) == -1) {



   VAR_5 = -1;
   break;
  }




  if (FUNC_6(VAR_3, VAR_9, VAR_12, VAR_6,
      VAR_4) == -1) {



   VAR_5 = -1;
   break;
  }
  VAR_9 += FUNC_9(VAR_9) + 1;
  VAR_6 += FUNC_9(VAR_6) + 1;
 }

 FUNC_3(VAR_7);
 return (VAR_5);
}
