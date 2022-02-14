
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct worker {int scratchpad; int env; } ;
struct edns_data {int * opt_list; int bits; int udp_size; int edns_version; } ;
struct comm_reply {int dummy; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,struct edns_data*) ;
 scalar_t__ FUNC_5 (struct edns_data*) ;
 int FUNC_6 (int *,int *,int *,int *,int ,struct edns_data*,struct comm_reply*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*,size_t) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,size_t) ;
 size_t FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(sldns_buffer* VAR_8, char** VAR_9, int VAR_10, struct edns_data* VAR_11,
 struct worker* VAR_12, struct comm_reply* VAR_13)
{
 int VAR_14;
 unsigned int VAR_15 = FUNC_3(FUNC_8(VAR_8));
 unsigned int VAR_16 = FUNC_1(FUNC_8(VAR_8));
 FUNC_10(VAR_8);
 FUNC_13(VAR_8, (ssize_t)sizeof(uint16_t));
 FUNC_15(VAR_8, (uint16_t)(VAR_0|VAR_1));
 if(VAR_15) FUNC_2(FUNC_8(VAR_8));
 if(VAR_16) FUNC_0(FUNC_8(VAR_8));
 FUNC_15(VAR_8, 1);
 FUNC_15(VAR_8, (uint16_t)VAR_10);
 FUNC_15(VAR_8, 0);
 FUNC_15(VAR_8, 0);
 (void)FUNC_7(VAR_8);
 FUNC_13(VAR_8, (ssize_t)sizeof(uint16_t));
 FUNC_13(VAR_8, (ssize_t)sizeof(uint16_t));
 for(VAR_14=0; VAR_14<VAR_10; VAR_14++) {
  size_t VAR_17 = FUNC_18(VAR_9[VAR_14]);
  if(VAR_17>255) VAR_17=255;
  FUNC_15(VAR_8, 0xc00c);
  FUNC_15(VAR_8, VAR_7);
  FUNC_15(VAR_8, VAR_6);
  FUNC_16(VAR_8, 0);
  FUNC_15(VAR_8, sizeof(uint8_t) + VAR_17);
  FUNC_17(VAR_8, VAR_17);
  FUNC_14(VAR_8, VAR_9[VAR_14], VAR_17);
 }
 FUNC_11(VAR_8);
 VAR_11->edns_version = VAR_3;
 VAR_11->udp_size = VAR_2;
 VAR_11->bits &= VAR_4;
 if(!FUNC_6(&VAR_12->env, ((void*)0), ((void*)0), ((void*)0),
  VAR_5, VAR_11, VAR_13, VAR_12->scratchpad))
   VAR_11->opt_list = ((void*)0);
 if(FUNC_9(VAR_8) >=
  FUNC_12(VAR_8)+FUNC_5(VAR_11))
  FUNC_4(VAR_8, VAR_11);
}
