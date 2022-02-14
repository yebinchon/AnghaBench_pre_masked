
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int rc_cap_mask ;
struct TYPE_6__ {size_t lid; int sl; } ;
typedef TYPE_1__ ib_portid_t ;
struct TYPE_7__ {int pma_query_failures; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_1__*,int,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_4(ib_portid_t * VAR_5, char *VAR_6, int VAR_7,
     uint16_t * VAR_8)
{
 uint8_t VAR_9[1024] = { 0 };
 uint16_t VAR_10;

 VAR_5->sl = VAR_3[VAR_5->lid];


 if (!FUNC_2(VAR_9, VAR_5, VAR_7, VAR_1, VAR_0,
      VAR_2)) {
  FUNC_0("classportinfo query failed on %s, %s port %d",
         VAR_6, FUNC_3(VAR_5), VAR_7);
  VAR_4.pma_query_failures++;
  return -1;
 }


 FUNC_1(&VAR_10, VAR_9 + 2, sizeof(VAR_10));

 *VAR_8 = VAR_10;
 return 0;
}
