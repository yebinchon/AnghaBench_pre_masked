
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int int64_t ;
struct TYPE_2__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int ,int ) ;
 TYPE_1__* FUNC_5 () ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 vm_paddr_t VAR_8;
 int64_t VAR_9;
 unsigned VAR_10, VAR_11;

 VAR_8 = FUNC_6(FUNC_1((vm_offset_t)&VAR_4));

 if (FUNC_5()->board_type == VAR_0) {

  VAR_5[0] = VAR_8;
  VAR_5[1] = 96 << 20;

  VAR_3[0] = VAR_5[0];
  VAR_3[1] = VAR_5[1];

  VAR_7 = VAR_6 = FUNC_2(VAR_5[1] - VAR_5[0]);
  return;
 }





 VAR_10 = 0;
 while (VAR_10 < VAR_2) {





  if (FUNC_3(128) < 2 << 20)
   break;

  VAR_9 = FUNC_4(1 << 20, VAR_8,
           ~(vm_paddr_t)0, VAR_1, 0);
  if (VAR_9 == -1)
   break;
  if (!FUNC_0(VAR_9 + (1 << 20) - 1))
   continue;


  VAR_6 += FUNC_2(1 << 20);

  if (VAR_10 > 0 && VAR_5[VAR_10 - 1] == VAR_9) {
   VAR_5[VAR_10 - 1] += 1 << 20;
   continue;
  }

  VAR_5[VAR_10 + 0] = VAR_9;
  VAR_5[VAR_10 + 1] = VAR_9 + (1 << 20);

  VAR_10 += 2;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_3[VAR_11] = VAR_5[VAR_11];

 VAR_7 = VAR_6;
}
