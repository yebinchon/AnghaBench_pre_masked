
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bpf_u_int32 ;
typedef size_t ULONG ;
struct TYPE_5__ {size_t Length; int Data; int Oid; } ;
typedef TYPE_1__ PACKET_OID_DATA ;
typedef int ADAPTER ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (char*,int ,char*,...) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(ADAPTER *VAR_3, bpf_u_int32 VAR_4, void *VAR_5, size_t *VAR_6,
    char *VAR_7)
{
 PACKET_OID_DATA *VAR_8;
 VAR_8 = FUNC_3(sizeof (PACKET_OID_DATA) + *VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_7, VAR_1,
      "Couldn't allocate argument buffer for PacketRequest");
  return (VAR_2);
 }




 VAR_8->Oid = VAR_4;
 VAR_8->Length = (ULONG)(*VAR_6);
 if (!FUNC_1(VAR_3, VAR_0, VAR_8)) {
  char VAR_9[VAR_1+1];

  FUNC_6(FUNC_0(), VAR_9);
  FUNC_5(VAR_7, VAR_1,
      "Error calling PacketRequest: %s", VAR_9);
  FUNC_2(VAR_8);
  return (-1);
 }




 *VAR_6 = VAR_8->Length;




 FUNC_4(VAR_5, VAR_8->Data, *VAR_6);
 FUNC_2(VAR_8);
 return (0);
}
