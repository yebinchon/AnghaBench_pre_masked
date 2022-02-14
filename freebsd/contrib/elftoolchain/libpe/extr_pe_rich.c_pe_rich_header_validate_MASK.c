
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {char* pe_rh_start; char* pe_stub; TYPE_1__* pe_rh; } ;
struct TYPE_5__ {scalar_t__ rh_total; unsigned char* rh_compid; int* rh_cnt; scalar_t__ rh_xor; } ;
typedef TYPE_1__ PE_RichHdr ;
typedef TYPE_2__ PE ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (unsigned char,int) ;

int
FUNC_3(PE *VAR_0)
{
 PE_RichHdr *VAR_1;
 uint32_t VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 if (FUNC_1(VAR_0) == ((void*)0))
  return (-1);

 FUNC_0(VAR_0->pe_rh_start != ((void*)0));





 VAR_2 = VAR_0->pe_rh_start - VAR_0->pe_stub;





 for (VAR_3 = VAR_0->pe_stub; VAR_3 < VAR_0->pe_rh_start; VAR_3++) {

  VAR_5 = VAR_3 - VAR_0->pe_stub;
  if (VAR_5 >= 0x3c && VAR_5 < 0x40)
   continue;
  VAR_2 += FUNC_2((unsigned char) *VAR_3, VAR_5);
 }


 VAR_1 = VAR_0->pe_rh;
 for (VAR_4 = 0; (uint32_t) VAR_4 < VAR_1->rh_total; VAR_4++)
  VAR_2 += FUNC_2(VAR_1->rh_compid[VAR_4], VAR_1->rh_cnt[VAR_4]);


 if (VAR_2 == VAR_1->rh_xor)
  return (1);

 return (0);
}
