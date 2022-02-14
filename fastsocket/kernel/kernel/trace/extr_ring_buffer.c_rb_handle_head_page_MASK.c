
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {struct buffer_page* tail_page; int overrun; } ;
struct buffer_page {int dummy; } ;






 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int const) ;
 int FUNC_3 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int const) ;
 int FUNC_4 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int) ;
 int FUNC_5 (struct ring_buffer_per_cpu*,struct buffer_page**) ;
 int FUNC_6 (struct buffer_page*) ;

__attribute__((used)) static int
FUNC_7(struct ring_buffer_per_cpu *VAR_0,
      struct buffer_page *VAR_1,
      struct buffer_page *VAR_2)
{
 struct buffer_page *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_2);






 VAR_5 = FUNC_4(VAR_0, VAR_2, VAR_1,
           131);
 switch (VAR_5) {
 case 131:





  FUNC_1(VAR_4, &VAR_0->overrun);







  break;

 case 128:




  break;
 case 129:





  return 1;
 case 130:





  return 1;
 default:
  FUNC_0(VAR_0, 1);
  return -1;
 }
 VAR_3 = VAR_2;
 FUNC_5(VAR_0, &VAR_3);

 VAR_6 = FUNC_2(VAR_0, VAR_3, VAR_2,
        129);
 switch (VAR_6) {
 case 131:
 case 129:

  break;
 default:
  FUNC_0(VAR_0, 1);
  return -1;
 }
 if (VAR_6 == 129) {




  if (VAR_0->tail_page != VAR_1 &&
      VAR_0->tail_page != VAR_2)
   FUNC_3(VAR_0, VAR_3,
      VAR_2,
      131);
 }






 if (VAR_5 == 131) {
  VAR_6 = FUNC_3(VAR_0, VAR_2,
           VAR_1,
           128);
  if (FUNC_0(VAR_0,
          VAR_6 != 128))
   return -1;
 }

 return 0;
}
