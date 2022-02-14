
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct mem_ref {unsigned int prefetch_mod; scalar_t__ write_p; TYPE_1__* group; int mem; int stmt; } ;
typedef int block_stmt_iterator ;
struct TYPE_2__ {unsigned int step; } ;
typedef unsigned int HOST_WIDE_INT ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int,int *) ;
 int FUNC_7 (scalar_t__,char*,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (struct mem_ref *VAR_11, unsigned VAR_12, unsigned VAR_13)
{
  HOST_WIDE_INT VAR_14;
  tree VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
  block_stmt_iterator VAR_20;
  unsigned VAR_21, VAR_22;

  if (VAR_6 && (VAR_7 & VAR_4))
    FUNC_7 (VAR_6, "Issued prefetch for %p.\n", (void *) VAR_11);

  VAR_20 = FUNC_0 (VAR_11->stmt);

  VAR_21 = ((VAR_12 + VAR_11->prefetch_mod - 1)
    / VAR_11->prefetch_mod);
  VAR_16 = FUNC_2 (VAR_11->mem, VAR_10);
  VAR_16 = FUNC_6 (&VAR_20, FUNC_9 (VAR_16), 1, ((void*)0));

  for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
    {

      VAR_14 = (VAR_13 + VAR_22 * VAR_11->prefetch_mod) * VAR_11->group->step;
      VAR_15 = FUNC_5 (VAR_3, VAR_10,
     VAR_16, FUNC_4 (VAR_10, VAR_14));
      VAR_15 = FUNC_6 (&VAR_20, FUNC_9 (VAR_15), 1, ((void*)0));


      VAR_19 = VAR_11->write_p ? VAR_8 : VAR_9;
      VAR_18 = FUNC_8 (VAR_2, VAR_15,
     FUNC_8 (VAR_2, VAR_19, VAR_2));

      VAR_17 = FUNC_3 (VAR_5[VAR_1],
        VAR_18);
      FUNC_1 (&VAR_20, VAR_17, VAR_0);
    }
}
