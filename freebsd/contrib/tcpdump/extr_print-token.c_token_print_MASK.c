
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct token_header {int * token_rseg; int token_rcf; } ;
struct lladdr_info {int* addr; void* addr_string; } ;
struct ether_header {int dummy; } ;
struct TYPE_6__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (struct token_header const*,int) ;
 size_t FUNC_1 (struct token_header const*) ;
 size_t FUNC_2 (struct token_header const*) ;
 int* FUNC_3 (struct ether_header*) ;
 int* FUNC_4 (struct ether_header*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct token_header const*) ;
 scalar_t__ FUNC_7 (struct token_header const*) ;
 size_t FUNC_8 (struct token_header const*) ;
 int FUNC_9 (int const*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct token_header const*) ;
 int FUNC_12 (struct token_header const*,int) ;
 int FUNC_13 (struct token_header const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 void* VAR_4 ;
 int FUNC_14 (struct token_header const*,char*,char*) ;
 int * VAR_5 ;
 int FUNC_15 (TYPE_1__*,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;
 int FUNC_16 (TYPE_1__*,struct token_header const*,scalar_t__,int*,int*) ;
 int VAR_6 ;

u_int
FUNC_17(netdissect_options *VAR_7, const u_char *VAR_8, u_int VAR_9, u_int VAR_10)
{
 const struct token_header *VAR_11;
 int VAR_12;
 struct ether_header VAR_13;
 struct lladdr_info VAR_14, VAR_15;
 u_int VAR_16 = 0, VAR_17 = VAR_1;
 int VAR_18;

 VAR_11 = (const struct token_header *)VAR_8;

 if (VAR_10 < VAR_1) {
  FUNC_10((VAR_7, "%s", VAR_6));
  return VAR_17;
 }




 FUNC_14(VAR_11, (char*)FUNC_4(&VAR_13), (char*)FUNC_3(&VAR_13));


 if (FUNC_7(VAR_11)) {

  *FUNC_4(&VAR_13) &= 0x7f;

  if (VAR_7->ndo_eflag)
   FUNC_16(VAR_7, VAR_11, VAR_9, FUNC_4(&VAR_13), FUNC_3(&VAR_13));

  if (VAR_10 < VAR_1 + 2) {
   FUNC_10((VAR_7, "%s", VAR_6));
   return VAR_17;
  }
  VAR_16 = FUNC_11(VAR_11);
  VAR_17 += VAR_16;
  if (VAR_10 < VAR_17) {
   FUNC_10((VAR_7, "%s", VAR_6));
   return VAR_17;
  }
  if (VAR_7->ndo_vflag) {
   FUNC_10((VAR_7, "%s ", VAR_2[FUNC_1(VAR_11)]));
   FUNC_10((VAR_7, "%s", VAR_3[FUNC_2(VAR_11)]));

   for (VAR_18 = 0; VAR_18 < FUNC_13(VAR_11); VAR_18++)
    FUNC_10((VAR_7, " [%d:%d]", FUNC_12(VAR_11, VAR_18),
        FUNC_0(VAR_11, VAR_18)));
  } else {
   FUNC_10((VAR_7, "rt = %x", FUNC_5(&VAR_11->token_rcf)));

   for (VAR_18 = 0; VAR_18 < FUNC_13(VAR_11); VAR_18++)
    FUNC_10((VAR_7, ":%x", FUNC_5(&VAR_11->token_rseg[VAR_18])));
  }
  FUNC_10((VAR_7, " (%s) ", VAR_5[FUNC_8(VAR_11)]));
 } else {
  if (VAR_7->ndo_eflag)
   FUNC_16(VAR_7, VAR_11, VAR_9, FUNC_4(&VAR_13), FUNC_3(&VAR_13));
 }

 VAR_14.addr = FUNC_4(&VAR_13);
 VAR_14.addr_string = VAR_4;
 VAR_15.addr = FUNC_3(&VAR_13);
 VAR_15.addr_string = VAR_4;


 VAR_9 -= VAR_17;
 VAR_8 += VAR_17;
 VAR_10 -= VAR_17;


 if (FUNC_6(VAR_11) == VAR_0) {

  VAR_12 = FUNC_15(VAR_7, VAR_8, VAR_9, VAR_10, &VAR_14, &VAR_15);
  if (VAR_12 < 0) {

   if (!VAR_7->ndo_suppress_default_print)
    FUNC_9(VAR_8, VAR_10);
   VAR_12 = -VAR_12;
  }
  VAR_17 += VAR_12;
 } else {


  if (!VAR_7->ndo_eflag)
   FUNC_16(VAR_7, VAR_11, VAR_9 + VAR_1 + VAR_16,
       FUNC_4(&VAR_13), FUNC_3(&VAR_13));
  if (!VAR_7->ndo_suppress_default_print)
   FUNC_9(VAR_8, VAR_10);
 }
 return (VAR_17);
}
