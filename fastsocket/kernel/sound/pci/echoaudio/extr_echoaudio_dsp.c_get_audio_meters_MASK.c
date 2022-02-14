
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {TYPE_1__* comm_page; } ;
struct TYPE_2__ {long* vu_meter; long* peak_meter; } ;


 int VAR_0 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;

__attribute__((used)) static void FUNC_3(struct echoaudio *VAR_1, long *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++, VAR_4++) {
  VAR_2[VAR_5++] = VAR_1->comm_page->vu_meter[VAR_4];
  VAR_2[VAR_5++] = VAR_1->comm_page->peak_meter[VAR_4];
 }
 for (; VAR_5 < 32; VAR_5++)
  VAR_2[VAR_5] = 0;





 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++, VAR_4++) {
  VAR_2[VAR_5++] = VAR_1->comm_page->vu_meter[VAR_4];
  VAR_2[VAR_5++] = VAR_1->comm_page->peak_meter[VAR_4];
 }
 for (; VAR_5 < 64; VAR_5++)
  VAR_2[VAR_5] = 0;







 for (; VAR_5 < 96; VAR_5++)
  VAR_2[VAR_5] = 0;
}
