
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_tlv_parsed_buf {int data; int p_val; } ;
struct ecore_mfw_tlv_time {int month; int day; int hour; int min; int msec; int usec; int b_set; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct ecore_mfw_tlv_time *VAR_1,
        struct ecore_tlv_parsed_buf *VAR_2)
{
 if (!VAR_1->b_set)
  return -1;


 if (VAR_1->month > 12)
  VAR_1->month = 0;
 if (VAR_1->day > 31)
  VAR_1->day = 0;
 if (VAR_1->hour > 23)
  VAR_1->hour = 0;
 if (VAR_1->min > 59)
  VAR_1->hour = 0;
 if (VAR_1->msec > 999)
  VAR_1->msec = 0;
 if (VAR_1->usec > 999)
  VAR_1->usec = 0;

 FUNC_0(VAR_2->data, sizeof(u8) * VAR_0);
 FUNC_1(VAR_2->data, 14, "%d%d%d%d%d%d",
        VAR_1->month, VAR_1->day,
        VAR_1->hour, VAR_1->min,
        VAR_1->msec, VAR_1->usec);

 VAR_2->p_val = VAR_2->data;
 return 14;
}
