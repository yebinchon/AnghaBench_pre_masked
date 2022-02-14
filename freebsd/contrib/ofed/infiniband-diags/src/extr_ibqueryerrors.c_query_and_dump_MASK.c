
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int pc ;
typedef int ib_portid_t ;
struct TYPE_2__ {int pma_query_failures; } ;


 int FUNC_0 (char*,char const*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,void*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,size_t,char*,char*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_7(char *VAR_3, size_t VAR_4, ib_portid_t * VAR_5,
     char *VAR_6, int VAR_7,
     const char *VAR_8, uint16_t VAR_9,
     int VAR_10, int VAR_11)
{
 uint8_t VAR_12[1024];
 uint32_t VAR_13 = 0;
 int VAR_14, VAR_15;

 FUNC_3(VAR_12, 0, sizeof(VAR_12));

 if (!FUNC_4(VAR_12, VAR_5, VAR_7, VAR_0, VAR_9,
      VAR_1)) {
  FUNC_0("%s query failed on %s, %s port %d", VAR_8,
         VAR_6, FUNC_5(VAR_5), VAR_7);
  VAR_2.pma_query_failures++;
  return 0;
 }

 for (VAR_15 = 0, VAR_14 = VAR_10; VAR_14 < VAR_11; VAR_14++) {
  FUNC_1(VAR_12, VAR_14, (void *)&VAR_13);
  if (VAR_13)
   VAR_15 += FUNC_6(VAR_3 + VAR_15, VAR_4 - VAR_15, " [%s == %u]",
          FUNC_2(VAR_14), VAR_13);
 }

 return VAR_15;
}
