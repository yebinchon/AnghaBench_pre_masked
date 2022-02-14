
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct directory {int di_name; TYPE_1__* di_next; struct directory* di_prev; } ;
struct TYPE_2__ {struct directory* di_prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 struct directory* VAR_4 ;
 int FUNC_3 (struct directory*) ;
 int FUNC_4 () ;
 struct directory VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct directory *VAR_7, int VAR_8)
{
    int VAR_9;

    if (FUNC_1(VAR_1)) {
 struct directory *VAR_10;

 for (VAR_10 = VAR_5.di_prev; VAR_10 != &VAR_5; VAR_10 = VAR_10->di_prev)
     if (VAR_10 != VAR_7 && FUNC_0(VAR_10->di_name, VAR_7->di_name) == 0) {
  VAR_10->di_next->di_prev = VAR_10->di_prev;
  VAR_10->di_prev->di_next = VAR_10->di_next;
  FUNC_3(VAR_10);
  break;
     }
    }
    VAR_4 = VAR_7;
    FUNC_5(VAR_4->di_name);
    FUNC_4();
    VAR_9 = VAR_6;
    if (FUNC_1(VAR_2))
 VAR_9 = 0;
    if (VAR_8 & VAR_0)
 VAR_9 = 1;
    if (VAR_3)
 VAR_9 = 0;
    if (VAR_9)
 FUNC_6(VAR_8);
    FUNC_2();
}
