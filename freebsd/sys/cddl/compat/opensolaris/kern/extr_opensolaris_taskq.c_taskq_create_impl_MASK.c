
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {int tq_queue; } ;
typedef TYPE_1__ taskq_t ;
typedef int proc_t ;
typedef int pri_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int ,int ,int *) ;
 int FUNC_3 (int *,int,int ,int *,char*,char const*) ;
 int VAR_4 ;

__attribute__((used)) static taskq_t *
FUNC_4(const char *VAR_5, int VAR_6, pri_t VAR_7, proc_t *VAR_8,
    uint_t VAR_9)
{
 taskq_t *VAR_10;

 if ((VAR_9 & VAR_2) != 0)
  VAR_6 = FUNC_0((VAR_3 * VAR_6) / 100, 1);

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_0);
 VAR_10->tq_queue = FUNC_2(VAR_5, VAR_1, VAR_4,
     &VAR_10->tq_queue);
 (void) FUNC_3(&VAR_10->tq_queue, VAR_6, VAR_7,
     VAR_8, "%s", VAR_5);

 return ((taskq_t *)VAR_10);
}
