
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef size_t u_int ;
struct pnpinfo {char* pi_desc; } ;
struct pnp_devNode {size_t* dn_data; size_t dn_size; } ;





 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t*,char*,size_t) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (struct pnpinfo*,int ) ;
 int FUNC_8 (size_t*) ;

__attribute__((used)) static void
FUNC_9(struct pnpinfo *VAR_0, struct pnp_devNode *VAR_1)
{
    u_int VAR_2, VAR_3, VAR_4, VAR_5;
    uint8_t *VAR_6;
    char *VAR_7;

    VAR_6 = VAR_1->dn_data;
    VAR_5 = VAR_1->dn_size - (VAR_6 - (uint8_t *)VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3+= VAR_4) {
 VAR_2 = VAR_6[VAR_3];
 VAR_3++;
 if (FUNC_1(VAR_2) == 0) {
     VAR_4 = FUNC_2(VAR_2);

     switch (FUNC_3(VAR_2)) {

     case 130:

  FUNC_7(VAR_0, FUNC_8(VAR_6 + VAR_3));
  break;

     case 129:
  return;
     }
 } else {

     VAR_4 = *(uint16_t *)(VAR_6 + VAR_3);
     VAR_3 += sizeof(uint16_t);

     switch(FUNC_0(VAR_2)) {

     case 128:
  VAR_7 = FUNC_6(VAR_4 + 1);
  FUNC_4(VAR_6 + VAR_3, VAR_7, VAR_4);
  VAR_7[VAR_4] = 0;
  if (VAR_0->pi_desc == ((void*)0)) {
      VAR_0->pi_desc = VAR_7;
  } else {
      FUNC_5(VAR_7);
  }
  break;
     }
 }
    }
}
