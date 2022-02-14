
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct acc_t {scalar_t__ accchar; scalar_t__** map; } ;
struct TYPE_4__ {int n_accs; struct acc_t* acc; } ;
typedef TYPE_1__ accentmap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_1(accentmap_t *VAR_3, accentmap_t *VAR_4, struct thread *VAR_5)
{
 struct acc_t *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_2 <= 2)
  return (0);

 if (VAR_3->n_accs != VAR_4->n_accs)
  return FUNC_0(VAR_5, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_3->n_accs; VAR_8++) {
  VAR_6 = &VAR_3->acc[VAR_8];
  VAR_7 = &VAR_4->acc[VAR_8];
  if (VAR_6->accchar != VAR_7->accchar)
   return FUNC_0(VAR_5, VAR_1);
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
   if (VAR_6->map[VAR_9][0] != VAR_7->map[VAR_9][0])
    return FUNC_0(VAR_5, VAR_1);
   if (VAR_6->map[VAR_9][0] == 0)
    break;
   if (VAR_6->map[VAR_9][1] != VAR_7->map[VAR_9][1])
    return FUNC_0(VAR_5, VAR_1);
  }
 }

 return (0);
}
