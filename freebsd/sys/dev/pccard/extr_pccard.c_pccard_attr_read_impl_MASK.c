
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int ccr_base; int ccr_rid; int pf_ccrh; int pf_ccrt; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int,int*) ;
 struct pccard_ivar* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, uint32_t VAR_3,
    uint8_t *VAR_4)
{
 struct pccard_ivar *VAR_5 = FUNC_1(VAR_2);
 struct pccard_function *VAR_6 = VAR_5->pf;






 if (VAR_3 / VAR_0 ==
     VAR_6->ccr_base / VAR_0)
  *VAR_4 = FUNC_2(VAR_6->pf_ccrt, VAR_6->pf_ccrh,
      VAR_3 % VAR_0);
 else {
  FUNC_0(VAR_1, VAR_2, VAR_6->ccr_rid, VAR_3,
      &VAR_3);
  *VAR_4 = FUNC_2(VAR_6->pf_ccrt, VAR_6->pf_ccrh, VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_6->ccr_rid, VAR_6->ccr_base,
      &VAR_3);
 }
 return 0;
}
