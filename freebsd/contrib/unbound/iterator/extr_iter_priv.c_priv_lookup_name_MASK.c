
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iter_priv {int n; } ;
typedef int sldns_buffer ;
typedef int decomp ;


 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int *,size_t,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct iter_priv* VAR_0, sldns_buffer* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4)
{
 size_t VAR_5;
 uint8_t VAR_6[256];
 int VAR_7;
 if(VAR_3 >= sizeof(VAR_6))
  return 0;
 FUNC_1(VAR_1, VAR_6, VAR_2);
 VAR_7 = FUNC_0(VAR_6, &VAR_5);
 FUNC_2(VAR_3 == VAR_5);
 return FUNC_3(&VAR_0->n, VAR_6, VAR_5, VAR_7, VAR_4) != ((void*)0);
}
