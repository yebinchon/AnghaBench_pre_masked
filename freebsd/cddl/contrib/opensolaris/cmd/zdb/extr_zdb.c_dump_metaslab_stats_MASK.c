
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rt_histogram; } ;
typedef TYPE_1__ range_tree_t ;
struct TYPE_7__ {int ms_size; int ms_allocatable_by_size; TYPE_1__* ms_allocatable; } ;
typedef TYPE_2__ metaslab_t ;
typedef int maxbuf ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(metaslab_t *VAR_2)
{
 char VAR_3[32];
 range_tree_t *VAR_4 = VAR_2->ms_allocatable;
 avl_tree_t *VAR_5 = &VAR_2->ms_allocatable_by_size;
 int VAR_6 = FUNC_5(VAR_4) * 100 / VAR_2->ms_size;


 FUNC_0(sizeof (VAR_3) >= VAR_0);

 FUNC_6(FUNC_3(VAR_2), VAR_3, sizeof (VAR_3));

 (void) FUNC_4("\t %25s %10lu   %7s  %6s   %4s %4d%%\n",
     "segments", FUNC_1(VAR_5), "maxsize", VAR_3,
     "freepct", VAR_6);
 (void) FUNC_4("\tIn-memory histogram:\n");
 FUNC_2(VAR_4->rt_histogram, VAR_1, 0);
}
