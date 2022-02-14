
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct changer_element_status_request {int cesr_element_count; struct changer_element_status* cesr_element_status; int cesr_flags; void* cesr_element_base; void* cesr_element_type; } ;
struct changer_element_status {int dummy; } ;
typedef int cesr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct changer_element_status*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct changer_element_status_request*,int ,int) ;

__attribute__((used)) static struct changer_element_status *
FUNC_6(unsigned int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct changer_element_status_request VAR_7;
 struct changer_element_status *VAR_8;

 VAR_8 = (struct changer_element_status *)
     FUNC_0((size_t)1, sizeof(struct changer_element_status));

 if (((void*)0) == VAR_8)
  FUNC_2(1, "can't allocate status storage");

 (void)FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.cesr_element_type = (uint16_t)VAR_4;
 VAR_7.cesr_element_base = (uint16_t)VAR_5;
 VAR_7.cesr_element_count = 1;
 if (VAR_6)
  VAR_7.cesr_flags |= VAR_0;
 VAR_7.cesr_element_status = VAR_8;

 if (FUNC_4(VAR_2, VAR_1, (char *)&VAR_7) == -1) {
  FUNC_3(VAR_8);
  FUNC_1(1, "%s: CHIOGSTATUS", VAR_3);

 }

 return VAR_8;
}
