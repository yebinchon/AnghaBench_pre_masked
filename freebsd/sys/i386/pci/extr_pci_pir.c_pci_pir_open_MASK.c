
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int8_t ;
struct TYPE_2__ {int ph_length; } ;
struct PIR_table {TYPE_1__ pt_header; } ;
struct PIR_header {int dummy; } ;
struct PIR_entry {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*,int,int,int ) ;
 int VAR_0 ;
 struct PIR_table* VAR_1 ;

void
FUNC_2(void)
{
 struct PIR_table *VAR_2;
 uint32_t VAR_3;
 int VAR_4;
 uint8_t VAR_5, *VAR_6;


 if (VAR_1 != ((void*)0))
  return;


 VAR_3 = FUNC_1(0, "$PIR", 4, 16, 0);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(0, "_PIR", 4, 16, 0);
 if (VAR_3 == 0)
  return;



 VAR_2 = (struct PIR_table *)(uintptr_t)FUNC_0(VAR_3);
 if (VAR_2->pt_header.ph_length <= sizeof(struct PIR_header))
  return;
 for (VAR_6 = (u_int8_t *)VAR_2, VAR_5 = 0, VAR_4 = 0;
      VAR_4 < (VAR_2->pt_header.ph_length); VAR_4++)
  VAR_5 += VAR_6[VAR_4];
 if (VAR_5 != 0)
  return;


 VAR_1 = VAR_2;
 VAR_0 = (VAR_2->pt_header.ph_length -
     sizeof(struct PIR_header)) /
     sizeof(struct PIR_entry);
}
