
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ibnd_node_t ;
struct TYPE_7__ {size_t lid; int sl; } ;
typedef TYPE_1__ ib_portid_t ;
struct TYPE_8__ {int pma_query_failures; } ;


 int FUNC_0 (char*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*,int,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int *,int *,int,int*,int *,int) ;
 TYPE_2__ VAR_9 ;

__attribute__((used)) static int FUNC_6(ib_portid_t * VAR_10, uint16_t VAR_11,
   char *VAR_12, ibnd_node_t * VAR_13, int VAR_14,
   int *VAR_15)
{
 uint8_t VAR_16[1024];
 uint8_t VAR_17[1024];
 uint8_t *VAR_18 = ((void*)0);

 FUNC_2(VAR_16, 0, 1024);
 FUNC_2(VAR_17, 0, 1024);

 VAR_10->sl = VAR_8[VAR_10->lid];

 if (!FUNC_3(VAR_16, VAR_10, VAR_14, VAR_6,
      VAR_0, VAR_7)) {
  FUNC_0("IB_GSI_PORT_COUNTERS query failed on %s, %s port %d",
         VAR_12, FUNC_4(VAR_10), VAR_14);
  VAR_9.pma_query_failures++;
  return (0);
 }

 if (VAR_11 & (VAR_4 | VAR_3)) {
  if (!FUNC_3(VAR_17, VAR_10, VAR_14, VAR_6,
      VAR_1, VAR_7)) {
   FUNC_0("IB_GSI_PORT_COUNTERS_EXT query failed on %s, %s port %d",
          VAR_12, FUNC_4(VAR_10), VAR_14);
   VAR_9.pma_query_failures++;
   return (0);
  }
  VAR_18 = VAR_17;
 }

 if (!(VAR_11 & VAR_5)) {

  uint32_t VAR_19 = 0;
  FUNC_1(VAR_16, VAR_2, &VAR_19);
 }
 return (FUNC_5(VAR_10, VAR_12, VAR_13, VAR_16, VAR_14,
         VAR_15, VAR_18, VAR_11));
}
