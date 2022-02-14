
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
struct md_page {int pv_list; } ;
struct TYPE_4__ {int pv_list; } ;
struct TYPE_3__ {int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 struct md_page* VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void
FUNC_5(void)
{
 vm_size_t VAR_9;
 long VAR_10, VAR_11;




 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  FUNC_4(&VAR_5[VAR_10], "pmap pv list");




 VAR_11 = FUNC_1(VAR_8[VAR_7 - 1].end, VAR_2);




 VAR_9 = (vm_size_t)VAR_11 * sizeof(struct md_page);
 VAR_9 = FUNC_3(VAR_9);
 VAR_6 = (struct md_page *)FUNC_2(VAR_9, VAR_0 | VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  FUNC_0(&VAR_6[VAR_10].pv_list);
 FUNC_0(&VAR_4.pv_list);
}
